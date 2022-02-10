package com.doordash.kmm.item

data class KmmCxItemDetail(
    val itemHeader: KmmCxItemHeader?,
    val optionLists: List<KmmCxItemOptionList> = emptyList()
) {
    fun updateSelection(
        selectedOptionListId: String,
        selectedOption: KmmCxItemOption
    ): KmmCxItemDetail {
        return this.copy(
            optionLists = this.optionLists.map { optionList ->
                if (optionList.id == selectedOptionListId) {
                    optionList.copy(
                        options = optionList.options.map { option ->
                            if (option.id == selectedOption.id) {
                                option.copy(
                                    quantity = selectedOption.quantity,
                                    isSelected = selectedOption.isSelected
                                )
                            } else {
                                option
                            }
                        }
                    )
                } else {
                    optionList
                }
            }
        )
    }
}

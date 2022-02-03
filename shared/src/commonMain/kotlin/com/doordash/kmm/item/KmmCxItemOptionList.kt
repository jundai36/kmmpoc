package com.doordash.kmm.item

data class KmmCxItemOptionList(
    val id: String,
    val title: String?,
    val subtitle: String?,
    val imageUrl: String?,
    val isOptional: Boolean,
    val selectionMode: KmmCxItemOptionListSelectionMode,
    val minNumOptions: Int,
    val maxNumOptions: Int,
    val numFreeOptions: Int,
    val maxAggregateOptionsQuantity: Int? = null,
    val minAggregateOptionsQuantity: Int? = null,
    val minOptionChoiceQuantity: Int? = null,
    val maxOptionChoiceQuantity: Int? = null,
    val caloricDisplayString: String?,
    val options: List<KmmCxItemOption> = emptyList()
) {
    fun getFirstInvalidOption(): String? {
        return when (selectionMode) {
            KmmCxItemOptionListSelectionMode.SINGLE_SELECT -> getFirstInvalidSingleSelectionOption()
            KmmCxItemOptionListSelectionMode.MULTI_SELECT -> getFirstInvalidMultiSelectionOption()
            KmmCxItemOptionListSelectionMode.AGGREGATE_QUANTITY -> getFirstInvalidAggregateSelectionOption()
        }
    }

    private fun getFirstInvalidSingleSelectionOption(): String? {
        TODO()
    }

    private fun getFirstInvalidMultiSelectionOption(): String? {
        TODO()
    }

    private fun getFirstInvalidAggregateSelectionOption(): String? {
        TODO()
    }
}

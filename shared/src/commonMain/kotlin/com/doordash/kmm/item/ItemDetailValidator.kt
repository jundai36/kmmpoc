package com.doordash.kmm.item

object ItemDetailValidator {
    fun validateMultiSelection(
        itemDetail: KmmCxItemDetail,
        parentOptionId: String,
        selectedOptionId: String,
        checked: Boolean
    ): Boolean {
        return !checked || itemDetail.optionLists.firstOrNull {
            it.id == parentOptionId
        }?.let {
            val selectedOptionCount = it.options.count { option ->
                option.isSelected
            }
            selectedOptionCount < it.maxNumOptions
        } ?: true
    }

    fun validateAggregateSelection(
        itemDetail: KmmCxItemDetail,
        parentOptionId: String,
        selectedOptionId: String,
        quantity: Int
    ): Boolean {
        return itemDetail.optionLists.firstOrNull {
            it.id == parentOptionId
        }?.let {
            val selectedQuantity = it.options.filterNot { option ->
                option.id != selectedOptionId
            }.sumOf { option ->
                option.quantity
            }
            selectedQuantity + quantity <= (it.maxAggregateOptionsQuantity ?: it.options.size)
        } ?: true
    }
}
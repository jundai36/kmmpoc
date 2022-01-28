package com.doordash.kmm.item

data class KmmCxItemOption(
    val optionId: String,
    val optionName: String?,
    val imageUrl: String?,
    val isOptional: Boolean,
    val subtitle: String?,
    val selectionMode: KmmCxItemOptionListSelectionMode,
    val minNumOptions: Int,
    val maxNumOptions: Int,
    val numFreeOptions: Int,
    val maxAggregateOptionsQuantity: Int? = null,
    val minAggregateOptionsQuantity: Int? = null,
    val minOptionChoiceQuantity: Int? = null,
    val maxOptionChoiceQuantity: Int? = null,
    val caloricDisplayString: String?,
    val content: List<KmmCxItemOptionListContent> = emptyList()
)

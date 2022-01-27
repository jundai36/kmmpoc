package com.doordash.kmm.item

data class ItemOptionListContent(
    val id: String,
    val name: String,
    val imageUrl: String?,
    val description: String?,
    val priceDisplayString: String?,
    val caloricDisplayString: String?,
    val quantity: Int,
    val defaultQuantity: Int?,
    val isSelected: Boolean = false
)

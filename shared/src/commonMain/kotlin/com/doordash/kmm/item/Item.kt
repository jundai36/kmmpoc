package com.doordash.kmm.item

data class Item(
    val header: ItemHeader?,
    val optionList: List<ItemOption> = emptyList()
)

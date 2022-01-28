package com.doordash.kmm.item

data class KmmCxItemDetail(
    val itemHeader: KmmCxItemHeader?,
    val optionLists: List<KmmCxItemOptionList> = emptyList()
)

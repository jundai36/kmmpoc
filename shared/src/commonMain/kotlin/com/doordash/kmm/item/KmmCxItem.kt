package com.doordash.kmm.item

data class KmmCxItem(
    val header: KmmCxItemHeader?,
    val optionList: List<KmmCxItemOption> = emptyList()
)

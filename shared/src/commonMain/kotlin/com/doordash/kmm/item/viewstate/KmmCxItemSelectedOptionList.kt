package com.doordash.kmm.item.viewstate

/**
 *
 *
 * @author jun.dai
 * @since 02/04/21
 */
data class KmmCxItemSelectedOptionList(
    val id: String
) {
    constructor(id: String, selectedOptions: Map<String, KmmCxItemSelectedOption>) : this(id) {
        this.selectedOptions = selectedOptions
    }

    var selectedOptions: Map<String, KmmCxItemSelectedOption> = mutableMapOf()
        set(value) {
            field = value.filter {
                it.value.quantity > 0 || it.value.embeddedOptionLists.isNotEmpty()
            }
        }

    var selectedSingleOptionIdentifier: String?
        get() = selectedOptions.values.first().id
        set(value) {
            selectedOptions = value?.let {
                mapOf(Pair(it, KmmCxItemSelectedOption(it, 1)))
            } ?: mutableMapOf()
        }

    var selectedMultipleUniqueOptionIdentifiers: Set<String>
        get() = selectedOptions.keys
        set(value) {
            selectedOptions = selectedOptions.filter {
                value.contains(it.key)
            }.plus(value.filterNot {
                selectedOptions.contains(it)
            }.map {
                Pair(it, KmmCxItemSelectedOption(it, 1))
            })
        }

    var selectedAmount: Int = selectedOptions.values.sumOf { it.quantity }

    fun getAllSelectedOptions(): List<KmmCxItemSelectedOption> {
        return selectedOptions.flatMap {
            listOf(it.value).plus(it.value.getAllSelectedOptions())
        }
    }
}
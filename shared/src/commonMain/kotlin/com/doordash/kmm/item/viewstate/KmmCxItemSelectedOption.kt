package com.doordash.kmm.item.viewstate

data class KmmCxItemSelectedOption(
    val id: String
) {

    constructor(id: String, quantity: Int) : this(id) {
        this.quantity = quantity
    }

    var quantity: Int = 0
    var embeddedOptionLists: Map<String, KmmCxItemSelectedOptionList> = mutableMapOf()
        set(value) {
            field = value.filterNot {
                it.value.selectedOptions.isEmpty()
            }
        }
    var nestedOptionsMeetMinimumRequirements: Boolean = true

    fun getAllSelectedOptions(): List<KmmCxItemSelectedOption> {
        return embeddedOptionLists.values.flatMap {
            it.getAllSelectedOptions()
        }
    }

    override fun equals(other: Any?): Boolean {
        return other is KmmCxItemSelectedOption
                && other.id == this.id
                && other.quantity == this.quantity
                && other.embeddedOptionLists == this.embeddedOptionLists
    }

    override fun hashCode(): Int {
        var result = id.hashCode()
        result = 31 * result + quantity
        result = 31 * result + embeddedOptionLists.hashCode()
        result = 31 * result + nestedOptionsMeetMinimumRequirements.hashCode()
        return result
    }
}

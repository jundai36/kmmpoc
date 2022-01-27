package com.doordash.kmm.item

/**
 *
 *
 * @author jun.dai
 * @since 01/26/21
 */
enum class ItemOptionListSelectionMode(val string: String) {
    MULTI_SELECT("multi_select"),
    SINGLE_SELECT("single_select"),
    AGGREGATE_QUANTITY("aggregate_quantity");

    companion object {
        fun fromString(selectionMode: String?): ItemOptionListSelectionMode {
            return when (selectionMode) {
                AGGREGATE_QUANTITY.string -> AGGREGATE_QUANTITY
                MULTI_SELECT.string -> MULTI_SELECT
                else -> SINGLE_SELECT
            }
        }
    }
}
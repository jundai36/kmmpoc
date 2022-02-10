package com.doordash.kmm.item.viewstate

import kotlin.test.Test
import kotlin.test.assertEquals

/**
 *
 *
 * @author jun.dai
 * @since 02/09/21
 */
class KmmCxItemSelectedOptionListTest {
    @Test
    fun testMultipleSelection() {
        val selectedOptionList = KmmCxItemSelectedOptionList("id")
        selectedOptionList.selectedMultipleUniqueOptionIdentifiers = setOf("id_123", "id_456")
        assertEquals(2, selectedOptionList.selectedMultipleUniqueOptionIdentifiers.size)

        selectedOptionList.selectedMultipleUniqueOptionIdentifiers = setOf("id_456", "id_789")
        assertEquals(2, selectedOptionList.selectedMultipleUniqueOptionIdentifiers.size)
    }

    @Test
    fun testGetAllSelectedOptions() {
        val firstChildList = KmmCxItemSelectedOptionList("id_123")
        firstChildList.selectedMultipleUniqueOptionIdentifiers = setOf("child_id_123", "child_id_456")
        val selectedOptionList = KmmCxItemSelectedOptionList("parent_id")
        selectedOptionList.selectedMultipleUniqueOptionIdentifiers = setOf("id_123", "id_456")
        assertEquals(2, selectedOptionList.selectedMultipleUniqueOptionIdentifiers.size)
    }
}
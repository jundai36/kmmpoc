package com.doordash.kmm.ordercart

data class OrderCartValidationParams(
    val orderCartStoreId: String,
    val numItems: Int,
    val newItemStoreId: String,
    val isDeleteExistingCart: Boolean = false,
    val isBundleOpportunity: Boolean = false,
    val fallbackSaveCartStoreId: String? = null
)

package com.doordash.kmm.ordercart

/**
 *
 *
 * @author jun.dai
 * @since 01/20/21
 */
class OrderCartManager {
    fun validateNewItemFromSameStore(params: OrderCartValidationParams): Boolean {
        return params.numItems > 0 &&
                params.orderCartStoreId == params.newItemStoreId &&
                params.isDeleteExistingCart &&
                params.isBundleOpportunity &&
                params.fallbackSaveCartStoreId.isNullOrBlank()
    }
}
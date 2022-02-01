package com.example.kmm_poc

data class DataTypeMapping(
    var intType: Int,
    var intTypeNullable: Int?,
    val constIntType: Int,
    val constIntTypeNullable: Int?,
    val constIntTypeNullableDefaultNull: Int? = null,
    val intTypeWithDefaultValue: Int = 10,
    val intTypeNullableWithDefaultValue: Int? = 10,
)

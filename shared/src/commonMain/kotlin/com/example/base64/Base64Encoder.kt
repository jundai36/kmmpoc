package com.example.base64

interface Base64Encoder {
    fun encode(src: ByteArray): ByteArray
}
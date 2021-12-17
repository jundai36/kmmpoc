package com.example.base64

import android.annotation.TargetApi
import android.os.Build
import java.util.*

actual object Base64Factory {
    actual fun createEncoder(): Base64Encoder {
        return JvmBase64Encoder
    }

    object JvmBase64Encoder : Base64Encoder {
        @TargetApi(Build.VERSION_CODES.O)
        override fun encode(src: ByteArray): ByteArray {
            return Base64.getEncoder().encode(src)
        }
    }
}
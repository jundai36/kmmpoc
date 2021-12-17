package com.example.kmm_poc

class Greeting {
    fun greeting(): String {
        return "Hello, This is from ${Platform().platform}!"
    }
}
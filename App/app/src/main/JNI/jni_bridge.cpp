#include <jni.h>
#include <android/log.h>
#include "../cpp/Logging/LogManager.cpp"

#define LOG_TAG "RetroDroidNative" //label for filtering

extern "C" //allows JNI to find the function
JNIEXPORT void JNICALL //requires JNI macros
Java_com_loopy_retrodroidapp_MainActivity_nativeLog(
        JNIEnv *env, //pointer to the environment
        jobject thiz, //because 'this' is reserved lmao
        jstring message //cant just get a char* because it's from kotlin
        )
        {
    if (message == nullptr) {
        LogManager::log(LogManager::LogLevel::ERROR, "Message is null");
        return;
    }
    const char* messageChars = env->GetStringUTFChars(message, nullptr); //converts from jstring to char*

    LogManager::log(LogManager::LogLevel::INFO, messageChars); //logs the message

    env->ReleaseStringUTFChars(message, messageChars); //releases the char*
}

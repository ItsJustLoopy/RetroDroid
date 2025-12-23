#include <jni.h>
#include <android/log.h>

#define LOG_TAG "RetroDroidNative" //label for filtering

extern "C" //allows JNI to find the function
JNIEXPORT void JNICALL //requires JNI macros
Java_com_loopy_retrodroidapp_MainActivity_NativeLogHello(
        JNIEnv *env, //pointer to the environment
        jobject thiz //because 'this' is reserved lmao
        ){
    __android_log_print(ANDROID_LOG_INFO, LOG_TAG, "Hello from C++ "); //prints to logcat
}

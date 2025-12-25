//
// Created by loopy on 12/24/25.
//

#include "LogManager.h"
#include <android/log.h>

static const char* LOG_TAG = "RetroDroidNative";

void LogManager::log(LogManager::LogLevel level, const char* message) {

    if (message == nullptr) {
        __android_log_print(ANDROID_LOG_ERROR, LOG_TAG,"%s", "Message is null");
        return;
    }

    switch (level) {
        case LogManager::LogLevel::DEBUG:
            __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG,"%s", message);
            break;
        case LogManager::LogLevel::INFO:
            __android_log_print(ANDROID_LOG_INFO, LOG_TAG,"%s", message);
            break;
        case LogManager::LogLevel::WARNING:
            __android_log_print(ANDROID_LOG_WARN, LOG_TAG,"%s", message);
            break;
        case LogManager::LogLevel::ERROR:
            __android_log_print(ANDROID_LOG_ERROR, LOG_TAG,"%s", message);
            break;
        default:
            __android_log_print(ANDROID_LOG_ERROR, LOG_TAG,"%s", "Message with unknown log level");
            break;
    }
}

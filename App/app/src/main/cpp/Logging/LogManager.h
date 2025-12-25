//
// Created by loopy on 12/24/25.
//

#ifndef RETRODROIDAPP_LOGMANAGER_H
#define RETRODROIDAPP_LOGMANAGER_H


class LogManager {

public:
    enum class LogLevel {
        DEBUG,
        INFO,
        WARNING,
        ERROR
    };

    static void log(LogLevel level, const char* message);
    //not using std::string here because JNI gives C-style strings and android loghging expects them

};


#endif //RETRODROIDAPP_LOGMANAGER_H

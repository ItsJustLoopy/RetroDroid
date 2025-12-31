//
// Created by loopy on 12/31/25.
//

#ifndef RETRODROIDAPP_CORE_H
#define RETRODROIDAPP_CORE_H

#include <string>
extern "C" {
#include <libretro.h>
}

class Core {

public:
    Core(std::string name, std::string path);
    ~Core();

    std::string getName();
    std::string getPath();

    bool isValidCore;

    //libretro function pointers
    void (*retro_init)(void);
    void (*retro_deinit)(void);
    //void* handle //dlopen handle

private:

    std::string coreName;
    std::string corePath;
};


#endif //RETRODROIDAPP_CORE_H

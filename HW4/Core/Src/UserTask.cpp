#include "DR16.hpp"
#include "cmsis_os2.h"
#include "main.h"


extern "C"
{
    void startUserTask()
    {
        // init DR16
        Drivers::DR16::init();
    }
}
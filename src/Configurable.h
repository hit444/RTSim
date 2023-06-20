#ifndef __CONFIGURABLE__
#define __CONFIGURABLE__

#include "src/Config.h"

namespace NVM {

class Configurable
{
    public:
        virtual void SetConfig(Config*, bool = true) { }
};


}

#endif
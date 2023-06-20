#include "include/NVMainRequest.h"

std::ostream& operator<<(std::ostream& os, NVM::OpType type)
{
    switch (type)
    {
        case NVM::OpType::NOP: return os << "NOP";
        case NVM::OpType::ACTIVATE: os << "ACTIVATE"; break;
        default: os << "???"; break;
    }
    return os;
}
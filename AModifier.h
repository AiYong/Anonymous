#pragma once 

namespace Anonymous {

/**
 * @brief The AModifier enum
 */
enum AModifier
{
    Public          = 1,
    Protected       = 2,
    Private         = 4,
    Final           = 8,
    Virtual         = 16,
    Override        = 32,
    MethodConst     = 64,
    NoExcept        = 128,
    Inline          = 256,
    Static          = 512,
    Volatile        = 1024,
    Mutable         = 2048,
    TopLevelConst   = 4096,
    LowLevelConst   = 8192
};

}

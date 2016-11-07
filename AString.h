#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class AString : public AObject
{
    A_OBJECT()
public:

    AString(char16_t const* cStr);

public:

    static AString FromLocaleString(char const* cStr);

    static AString FromU16String(char16_t const* cStr);

    static AString FromU32String(char32_t const* cStr);

private:


};


}
#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class AChar32 : public AObject
{
    A_OBJECT()
public:

    AChar32();

    AChar32(wchar Value);

    AChar32(AChar32 const& Other);

    AChar32& operator=(AChar32 const& Other);

    ~AChar32();

private:

    char32 Value;

};



}

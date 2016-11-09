#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class AChar16 : public AObject
{
    A_OBJECT()
public:

    AChar16();

    AChar16(wchar Value);

    AChar16(AChar16 const& Other);

    AChar16& operator=(AChar16 const& Other);

    ~AChar16();

private:

    char16 Value;

};

}
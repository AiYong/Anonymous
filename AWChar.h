#pragma once 

#include <Anonymous/AObject.h>

namespace Anonymous {

class AWChar : public AObject
{
    A_OBJECT()
public:

    AWChar();

    AWChar(wchar Value);

    AWChar(AWChar const& Other);

    AWChar& operator=(AWChar const& Other);

    ~AWChar();

private:

    wchar Value;

};



}
#include <Anonymous/AWChar.h>

namespace Anonymous {

AWChar::AWChar()
{
}

AWChar::AWChar(wchar Value)
    :Value(Value)
{
}

AWChar::AWChar(AWChar const& Other)
{
    this->Value = Other.Value;
}

AWChar& AWChar::operator=(AWChar const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AWChar::~AWChar()
{
}


}
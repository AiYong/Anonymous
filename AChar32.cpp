#include <Anonymous/AChar32.h>

namespace Anonymous {

AChar32::AChar32()
{
}

AChar32::AChar32(wchar Value)
    :Value(Value)
{
}

AChar32::AChar32(AChar32 const& Other)
{
    this->Value = Other.Value;
}

AChar32& AChar32::operator=(AChar32 const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AChar32::~AChar32()
{
}


}
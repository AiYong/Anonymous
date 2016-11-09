#include <Anonymous/AChar16.h>

namespace Anonymous {

AChar16::AChar16()
{
}

AChar16::AChar16(wchar Value)
    :Value(Value)
{
}

AChar16::AChar16(AChar16 const& Other)
{
    this->Value = Other.Value;
}

AChar16& AChar16::operator=(AChar16 const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AChar16::~AChar16()
{
}


}
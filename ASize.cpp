#include <Anonymous/ASize.h>
#include <Anonymous/AString.h>


namespace Anonymous {


ASize::ASize()
    :Value()
{
}

ASize::ASize(i8 Value)
    :Value(Value)
{
}

ASize::ASize(ASize const& Other)
{
    this->Value = Other.Value;
}

ASize& ASize::operator=(ASize const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

ASize::~ASize()
{
}

ASize::operator size()
{
    return Value;
}

bool ASize::operator <(ASize const& Other) const
{
    return this->Value < Other.Value;
}

bool ASize::operator <=(ASize const& Other) const
{
    return this->Value <= Other.Value;
}

bool ASize::operator >(ASize const& Other) const
{
    return this->Value > Other.Value;
}

bool ASize::operator >=(ASize const& Other) const
{
    return this->Value >= Other.Value;
}

bool ASize::operator ==(ASize const& Other) const
{
    return this->Value == Other.Value;
}

bool ASize::operator !=(ASize const& Other) const
{
    return this->Value != Other.Value;
}

ASize& ASize::operator++()
{
    this->Value++;
    return (*this);
}

ASize& ASize::operator--()
{
    this->Value--;
    return (*this);
}

ASize ASize::operator++(int)
{
    ASize Ret(this->Value);
    this->Value++;
    return Ret;
}

ASize ASize::operator--(int)
{
    ASize Ret(this->Value);
    this->Value--;
    return Ret;
}

bool ASize::operator!() const
{
    return !(this->Value);
}

bool ASize::operator&&(ASize const& Other) const
{
    return this->Value && Other.Value;
}

bool ASize::operator||(ASize const& Other) const
{
    return this->Value || Other.Value;
}

ASize ASize::operator+() const
{
    return ASize(+(this->Value));
}

ASize ASize::operator-() const
{
    return ASize(-(this->Value));
}

ASize ASize::operator+(ASize const& Other) const
{
    return ASize((this->Value + Other.Value));
}

ASize ASize::operator-(ASize const& Other) const
{
    return ASize((this->Value - Other.Value));
}

ASize ASize::operator*(ASize const& Other) const
{
    return ASize((this->Value * Other.Value));
}

ASize ASize::operator/(ASize const& Other) const
{
    return ASize((this->Value / Other.Value));
}

ASize ASize::operator%(ASize const& Other) const
{
    return ASize((this->Value % Other.Value));
}

ASize& ASize::operator+=(ASize const& Other) const
{
    this->Value += Other.Value;
    return (*this);
}

ASize& ASize::operator-=(ASize const& Other) const
{
    this->Value -= Other.Value;
    return (*this);
}

ASize& ASize::operator*=(ASize const& Other) const
{
    this->Value *= Other.Value;
    return (*this);
}

ASize& ASize::operator/=(ASize const& Other) const
{
    this->Value /= Other.Value;
    return (*this);
}

ASize& ASize::operator%=(ASize const& Other) const
{
    this->Value %= Other.Value;
    return (*this);
}


i8 ASize::ToI8() const 
{
    return (i8)(this->Value);
}

i16 ASize::ToI16() const 
{
    return (i16)(this->Value);
}

i32 ASize::ToI32() const 
{
    return (i32)(this->Value);
}

i64 ASize::ToI64() const 
{
    return (i64)(this->Value);
}

u8 ASize::ToU8() const 
{
    return (u8)(this->Value);
}

u16 ASize::ToU16() const 
{
    return (u16)(this->Value);
}

u32 ASize::ToU32() const 
{
    return (u32)(this->Value);
}

u64 ASize::ToU64() const
{
    return (u64)(this->Value);
}

float ASize::ToFloat() const
{
    return (float)(this->Value);
}

double ASize::ToDouble() const 
{
    return (double)(this->Value);
}

size ASize::ToSize() const 
{
    return (this->Value);
}


}
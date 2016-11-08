#include <Anonymous/AI16.h>
#include <Anonymous/AString.h>

namespace Anonymous {


AI16::AI16()
    :Value()
{
}

AI16::AI16(i8 Value)
    :Value(Value)
{
}

AI16::AI16(AI16 const& Other)
{
    this->Value = Other.Value;
}

AI16& AI16::operator=(AI16 const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AI16::~AI16()
{
}

AI16::operator i16()
{
    return Value;
}

bool AI16::operator <(AI16 const& Other) const
{
    return this->Value < Other.Value;
}

bool AI16::operator <=(AI16 const& Other) const
{
    return this->Value <= Other.Value;
}

bool AI16::operator >(AI16 const& Other) const
{
    return this->Value > Other.Value;
}

bool AI16::operator >=(AI16 const& Other) const
{
    return this->Value >= Other.Value;
}

bool AI16::operator ==(AI16 const& Other) const
{
    return this->Value == Other.Value;
}

bool AI16::operator !=(AI16 const& Other) const
{
    return this->Value != Other.Value;
}

AI16& AI16::operator++()
{
    this->Value++;
    return (*this);
}

AI16& AI16::operator--()
{
    this->Value--;
    return (*this);
}

AI16 AI16::operator++(int)
{
    AI16 Ret(this->Value);
    this->Value++;
    return Ret;
}

AI16 AI16::operator--(int)
{
    AI16 Ret(this->Value);
    this->Value--;
    return Ret;
}

bool AI16::operator!() const
{
    return !(this->Value);
}

bool AI16::operator&&(AI16 const& Other) const
{
    return this->Value && Other.Value;
}

bool AI16::operator||(AI16 const& Other) const
{
    return this->Value || Other.Value;
}

AI16 AI16::operator+() const
{
    return AI16(+(this->Value));
}

AI16 AI16::operator-() const
{
    return AI16(-(this->Value));
}

AI16 AI16::operator+(AI16 const& Other) const
{
    return AI16((this->Value + Other.Value));
}

AI16 AI16::operator-(AI16 const& Other) const
{
    return AI16((this->Value - Other.Value));
}

AI16 AI16::operator*(AI16 const& Other) const
{
    return AI16((this->Value * Other.Value));
}

AI16 AI16::operator/(AI16 const& Other) const
{
    return AI16((this->Value / Other.Value));
}

AI16 AI16::operator%(AI16 const& Other) const
{
    return AI16((this->Value % Other.Value));
}

AI16 AI16::operator~(AI16 const& Other) const
{
    return AI16(this->Value & Other.Value);
}

AI16 AI16::operator&(AI16 const& Other) const
{
    return AI16(this->Value & Other.Value);
}

AI16 AI16::operator|(AI16 const& Other) const
{
    return AI16(this->Value | Other.Value);
}

AI16 AI16::operator^(AI16 const& Other) const
{
    return AI16(this->Value ^ Other.Value);
}

AI16 AI16::operator<<(AI16 const& Other) const
{
    return AI16(this->Value << Other.Value);
}

AI16 AI16::operator>>(AI16 const& Other) const
{
    return AI16(this->Value >> Other.Value);
}

AI16& AI16::operator+=(AI16 const& Other) const
{
    this->Value += Other.Value;
    return (*this);
}

AI16& AI16::operator-=(AI16 const& Other) const
{
    this->Value -= Other.Value;
    return (*this);
}

AI16& AI16::operator*=(AI16 const& Other) const
{
    this->Value *= Other.Value;
    return (*this);
}

AI16& AI16::operator/=(AI16 const& Other) const
{
    this->Value /= Other.Value;
    return (*this);
}

AI16& AI16::operator%=(AI16 const& Other) const
{
    this->Value %= Other.Value;
    return (*this);
}

AI16& AI16::operator&=(AI16 const& Other) const
{
    this->Value &= Other.Value;
    return (*this);
}

AI16& AI16::operator|=(AI16 const& Other) const
{
    this->Value |= Other.Value;
    return (*this);
}

AI16& AI16::operator^=(AI16 const& Other) const
{
    this->Value ^= Other.Value;
    return (*this);
}

AI16& AI16::operator<<=(AI16 const& Other) const
{
    this->Value <<= Other.Value;
    return (*this);
}

AI16& AI16::operator>>=(AI16 const& Other) const
{
    this->Value >>= Other.Value;
    return (*this);
}

i8 AI16::ToI8() const 
{
    return (i8)(this->Value);
}

i16 AI16::ToI16() const 
{
    return (i16)(this->Value);
}

i32 AI16::ToI32() const 
{
    return (i32)(this->Value);
}

i64 AI16::ToI64() const 
{
    return (i64)(this->Value);
}

u8 AI16::ToU8() const 
{
    return (u8)(this->Value);
}

u16 AI16::ToU16() const 
{
    return (u16)(this->Value);
}

u32 AI16::ToU32() const 
{
    return (u32)(this->Value);
}

u64 AI16::ToU64() const
{
    return (u64)(this->Value);
}

float AI16::ToFloat() const
{
    return (float)(this->Value);
}

double AI16::ToDouble() const 
{
    return (double)(this->Value);
}

size AI16::ToSize() const 
{
    return (size)(this->Value);
}


}

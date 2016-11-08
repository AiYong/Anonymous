#include <Anonymous/AI32.h>
#include <Anonymous/AString.h>


namespace Anonymous {


AI8::AI8()
    :Value()
{
}

AI8::AI8(i8 Value)
    :Value(Value)
{
}

AI8::AI8(AI8 const& Other)
{
    this->Value = Other.Value;
}

AI8& AI8::operator=(AI8 const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AI8::~AI8()
{
}

AI32::operator i32()
{
    return Value;
}

bool AI32::operator <(AI32 const& Other) const
{
    return this->Value < Other.Value;
}

bool AI32::operator <=(AI32 const& Other) const
{
    return this->Value <= Other.Value;
}

bool AI32::operator >(AI32 const& Other) const
{
    return this->Value > Other.Value;
}

bool AI32::operator >=(AI32 const& Other) const
{
    return this->Value >= Other.Value;
}

bool AI32::operator ==(AI32 const& Other) const
{
    return this->Value == Other.Value;
}

bool AI32::operator !=(AI32 const& Other) const
{
    return this->Value != Other.Value;
}

AI32& AI32::operator++()
{
    this->Value++;
    return (*this);
}

AI32& AI32::operator--()
{
    this->Value--;
    return (*this);
}

AI32 AI32::operator++(int)
{
    AI32 Ret(this->Value);
    this->Value++;
    return Ret;
}

AI32 AI32::operator--(int)
{
    AI32 Ret(this->Value);
    this->Value--;
    return Ret;
}

bool AI32::operator!() const
{
    return !(this->Value);
}

bool AI32::operator&&(AI32 const& Other) const
{
    return this->Value && Other.Value;
}

bool AI32::operator||(AI32 const& Other) const
{
    return this->Value || Other.Value;
}

AI32 AI32::operator+() const
{
    return AI32(+(this->Value));
}

AI32 AI32::operator-() const
{
    return AI32(-(this->Value));
}

AI32 AI32::operator+(AI32 const& Other) const
{
    return AI32((this->Value + Other.Value));
}

AI32 AI32::operator-(AI32 const& Other) const
{
    return AI32((this->Value - Other.Value));
}

AI32 AI32::operator*(AI32 const& Other) const
{
    return AI32((this->Value * Other.Value));
}

AI32 AI32::operator/(AI32 const& Other) const
{
    return AI32((this->Value / Other.Value));
}

AI32 AI32::operator%(AI32 const& Other) const
{
    return AI32((this->Value % Other.Value));
}

AI32 AI32::operator~(AI32 const& Other) const
{
    return AI32(this->Value & Other.Value);
}

AI32 AI32::operator&(AI32 const& Other) const
{
    return AI32(this->Value & Other.Value);
}

AI32 AI32::operator|(AI32 const& Other) const
{
    return AI32(this->Value | Other.Value);
}

AI32 AI32::operator^(AI32 const& Other) const
{
    return AI32(this->Value ^ Other.Value);
}

AI32 AI32::operator<<(AI32 const& Other) const
{
    return AI32(this->Value << Other.Value);
}

AI32 AI32::operator>>(AI32 const& Other) const
{
    return AI32(this->Value >> Other.Value);
}

AI32& AI32::operator+=(AI32 const& Other) const
{
    this->Value += Other.Value;
    return (*this);
}

AI32& AI32::operator-=(AI32 const& Other) const
{
    this->Value -= Other.Value;
    return (*this);
}

AI32& AI32::operator*=(AI32 const& Other) const
{
    this->Value *= Other.Value;
    return (*this);
}

AI32& AI32::operator/=(AI32 const& Other) const
{
    this->Value /= Other.Value;
    return (*this);
}

AI32& AI32::operator%=(AI32 const& Other) const
{
    this->Value %= Other.Value;
    return (*this);
}

AI32& AI32::operator&=(AI32 const& Other) const
{
    this->Value &= Other.Value;
    return (*this);
}

AI32& AI32::operator|=(AI32 const& Other) const
{
    this->Value |= Other.Value;
    return (*this);
}

AI32& AI32::operator^=(AI32 const& Other) const
{
    this->Value ^= Other.Value;
    return (*this);
}

AI32& AI32::operator<<=(AI32 const& Other) const
{
    this->Value <<= Other.Value;
    return (*this);
}

AI32& AI32::operator>>=(AI32 const& Other) const
{
    this->Value >>= Other.Value;
    return (*this);
}

i8 AI32::ToI8() const 
{
    return (i8)(this->Value);
}

i16 AI32::ToI16() const 
{
    return (i16)(this->Value);
}

i32 AI32::ToI32() const 
{
    return (i32)(this->Value);
}

i64 AI32::ToI64() const 
{
    return (i64)(this->Value);
}

u8 AI32::ToU8() const 
{
    return (u8)(this->Value);
}

u16 AI32::ToU16() const 
{
    return (u16)(this->Value);
}

u32 AI32::ToU32() const 
{
    return (u32)(this->Value);
}

u64 AI32::ToU64() const
{
    return (u64)(this->Value);
}

float AI32::ToFloat() const
{
    return (float)(this->Value);
}

double AI32::ToDouble() const 
{
    return (double)(this->Value);
}

size AI32::ToSize() const 
{
    return (size)(this->Value);
}


}

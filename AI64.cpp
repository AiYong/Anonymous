#include <Anonymous/AI64.h>
#include <Anonymous/AString.h>

namespace Anonymous {


AI64::AI64()
    :Value()
{
}

AI64::AI64(i8 Value)
    :Value(Value)
{
}

AI64::AI64(AI64 const& Other)
{
    this->Value = Other.Value;
}

AI64& AI64::operator=(AI64 const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AI64::~AI64()
{
}

AI64::operator u64()
{
    return Value;
}

bool AI64::operator <(AI64 const& Other) const
{
    return this->Value < Other.Value;
}

bool AI64::operator <=(AI64 const& Other) const
{
    return this->Value <= Other.Value;
}

bool AI64::operator >(AI64 const& Other) const
{
    return this->Value > Other.Value;
}

bool AI64::operator >=(AI64 const& Other) const
{
    return this->Value >= Other.Value;
}

bool AI64::operator ==(AI64 const& Other) const
{
    return this->Value == Other.Value;
}

bool AI64::operator !=(AI64 const& Other) const
{
    return this->Value != Other.Value;
}

AI64& AI64::operator++()
{
    this->Value++;
    return (*this);
}

AI64& AI64::operator--()
{
    this->Value--;
    return (*this);
}

AI64 AI64::operator++(int)
{
    AI64 Ret(this->Value);
    this->Value++;
    return Ret;
}

AI64 AI64::operator--(int)
{
    AI64 Ret(this->Value);
    this->Value--;
    return Ret;
}

bool AI64::operator!() const
{
    return !(this->Value);
}

bool AI64::operator&&(AI64 const& Other) const
{
    return this->Value && Other.Value;
}

bool AI64::operator||(AI64 const& Other) const
{
    return this->Value || Other.Value;
}

AI64 AI64::operator+() const
{
    return AI64(+(this->Value));
}

AI64 AI64::operator-() const
{
    return AI64(-(this->Value));
}

AI64 AI64::operator+(AI64 const& Other) const
{
    return AI64((this->Value + Other.Value));
}

AI64 AI64::operator-(AI64 const& Other) const
{
    return AI64((this->Value - Other.Value));
}

AI64 AI64::operator*(AI64 const& Other) const
{
    return AI64((this->Value * Other.Value));
}

AI64 AI64::operator/(AI64 const& Other) const
{
    return AI64((this->Value / Other.Value));
}

AI64 AI64::operator%(AI64 const& Other) const
{
    return AI64((this->Value % Other.Value));
}

AI64 AI64::operator~(AI64 const& Other) const
{
    return AI64(this->Value & Other.Value);
}

AI64 AI64::operator&(AI64 const& Other) const
{
    return AI64(this->Value & Other.Value);
}

AI64 AI64::operator|(AI64 const& Other) const
{
    return AI64(this->Value | Other.Value);
}

AI64 AI64::operator^(AI64 const& Other) const
{
    return AI64(this->Value ^ Other.Value);
}

AI64 AI64::operator<<(AI64 const& Other) const
{
    return AI64(this->Value << Other.Value);
}

AI64 AI64::operator>>(AI64 const& Other) const
{
    return AI64(this->Value >> Other.Value);
}

AI64& AI64::operator+=(AI64 const& Other) const
{
    this->Value += Other.Value;
    return (*this);
}

AI64& AI64::operator-=(AI64 const& Other) const
{
    this->Value -= Other.Value;
    return (*this);
}

AI64& AI64::operator*=(AI64 const& Other) const
{
    this->Value *= Other.Value;
    return (*this);
}

AI64& AI64::operator/=(AI64 const& Other) const
{
    this->Value /= Other.Value;
    return (*this);
}

AI64& AI64::operator%=(AI64 const& Other) const
{
    this->Value %= Other.Value;
    return (*this);
}

AI64& AI64::operator&=(AI64 const& Other) const
{
    this->Value &= Other.Value;
    return (*this);
}

AI64& AI64::operator|=(AI64 const& Other) const
{
    this->Value |= Other.Value;
    return (*this);
}

AI64& AI64::operator^=(AI64 const& Other) const
{
    this->Value ^= Other.Value;
    return (*this);
}

AI64& AI64::operator<<=(AI64 const& Other) const
{
    this->Value <<= Other.Value;
    return (*this);
}

AI64& AI64::operator>>=(AI64 const& Other) const
{
    this->Value >>= Other.Value;
    return (*this);
}

i8 AI64::ToI8() const 
{
    return (i8)(this->Value);
}

i16 AI64::ToI16() const 
{
    return (i16)(this->Value);
}

i32 AI64::ToI32() const 
{
    return (i32)(this->Value);
}

i64 AI64::ToI64() const 
{
    return (i64)(this->Value);
}

u8 AI64::ToU8() const 
{
    return (u8)(this->Value);
}

u16 AI64::ToU16() const 
{
    return (u16)(this->Value);
}

u32 AI64::ToU32() const 
{
    return (u32)(this->Value);
}

u64 AI64::ToU64() const
{
    return (u64)(this->Value);
}

float AI64::ToFloat() const
{
    return (float)(this->Value);
}

double AI64::ToDouble() const 
{
    return (double)(this->Value);
}

size AI64::ToSize() const 
{
    return (size)(this->Value);
}

}
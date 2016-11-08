#include <Anonymous/AI8.h>
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

AI8::operator u8()
{
    return Value;
}

bool AI8::operator <(AI8 const& Other) const
{
    return this->Value < Other.Value;
}

bool AI8::operator <=(AI8 const& Other) const
{
    return this->Value <= Other.Value;
}

bool AI8::operator >(AI8 const& Other) const
{
    return this->Value > Other.Value;
}

bool AI8::operator >=(AI8 const& Other) const
{
    return this->Value >= Other.Value;
}

bool AI8::operator ==(AI8 const& Other) const
{
    return this->Value == Other.Value;
}

bool AI8::operator !=(AI8 const& Other) const
{
    return this->Value != Other.Value;
}

AI8& AI8::operator++()
{
    this->Value++;
    return (*this);
}

AI8& AI8::operator--()
{
    this->Value--;
    return (*this);
}

AI8 AI8::operator++(int)
{
    AI8 Ret(this->Value);
    this->Value++;
    return Ret;
}

AI8 AI8::operator--(int)
{
    AI8 Ret(this->Value);
    this->Value--;
    return Ret;
}

bool AI8::operator!() const
{
    return !(this->Value);
}

bool AI8::operator&&(AI8 const& Other) const
{
    return this->Value && Other.Value;
}

bool AI8::operator||(AI8 const& Other) const
{
    return this->Value || Other.Value;
}

AI8 AI8::operator+() const
{
    return AI8(+(this->Value));
}

AI8 AI8::operator-() const
{
    return AI8(-(this->Value));
}

AI8 AI8::operator+(AI8 const& Other) const
{
    return AI8((this->Value + Other.Value));
}

AI8 AI8::operator-(AI8 const& Other) const
{
    return AI8((this->Value - Other.Value));
}

AI8 AI8::operator*(AI8 const& Other) const
{
    return AI8((this->Value * Other.Value));
}

AI8 AI8::operator/(AI8 const& Other) const
{
    return AI8((this->Value / Other.Value));
}

AI8 AI8::operator%(AI8 const& Other) const
{
    return AI8((this->Value % Other.Value));
}

AI8 AI8::operator~(AI8 const& Other) const
{
    return AI8(this->Value & Other.Value);
}

AI8 AI8::operator&(AI8 const& Other) const
{
    return AI8(this->Value & Other.Value);
}

AI8 AI8::operator|(AI8 const& Other) const
{
    return AI8(this->Value | Other.Value);
}

AI8 AI8::operator^(AI8 const& Other) const
{
    return AI8(this->Value ^ Other.Value);
}

AI8 AI8::operator<<(AI8 const& Other) const
{
    return AI8(this->Value << Other.Value);
}

AI8 AI8::operator>>(AI8 const& Other) const
{
    return AI8(this->Value >> Other.Value);
}

AI8& AI8::operator+=(AI8 const& Other) const
{
    this->Value += Other.Value;
    return (*this);
}

AI8& AI8::operator-=(AI8 const& Other) const
{
    this->Value -= Other.Value;
    return (*this);
}

AI8& AI8::operator*=(AI8 const& Other) const
{
    this->Value *= Other.Value;
    return (*this);
}

AI8& AI8::operator/=(AI8 const& Other) const
{
    this->Value /= Other.Value;
    return (*this);
}

AI8& AI8::operator%=(AI8 const& Other) const
{
    this->Value %= Other.Value;
    return (*this);
}

AI8& AI8::operator&=(AI8 const& Other) const
{
    this->Value &= Other.Value;
    return (*this);
}

AI8& AI8::operator|=(AI8 const& Other) const
{
    this->Value |= Other.Value;
    return (*this);
}

AI8& AI8::operator^=(AI8 const& Other) const
{
    this->Value ^= Other.Value;
    return (*this);
}

AI8& AI8::operator<<=(AI8 const& Other) const
{
    this->Value <<= Other.Value;
    return (*this);
}

AI8& AI8::operator>>=(AI8 const& Other) const
{
    this->Value >>= Other.Value;
    return (*this);
}

i8 AI8::ToI8() const 
{
    return (i8)(this->Value);
}

i16 AI8::ToI16() const 
{
    return (i16)(this->Value);
}

i32 AI8::ToI32() const 
{
    return (i32)(this->Value);
}

i64 AI8::ToI64() const 
{
    return (i64)(this->Value);
}

u8 AI8::ToU8() const 
{
    return (u8)(this->Value);
}

u16 AI8::ToU16() const 
{
    return (u16)(this->Value);
}

u32 AI8::ToU32() const 
{
    return (u32)(this->Value);
}

u64 AI8::ToU64() const
{
    return (u64)(this->Value);
}

float AI8::ToFloat() const
{
    return (float)(this->Value);
}

double AI8::ToDouble() const 
{
    return (double)(this->Value);
}

size AI8::ToSize() const 
{
    return (size)(this->Value);
}


}

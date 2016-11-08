#include <Anonymous/AU8.h>

namespace Anonymous {


AU8::AU8()
    :Value()
{
}

AU8::AU8(i8 Value)
    :Value(Value)
{
}

AU8::AU8(AU8 const& Other)
{
    this->Value = Other.Value;
}

AU8& AU8::operator=(AU8 const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AU8::~AU8()
{
}

AU8::operator u8()
{
    return Value;
}

bool AU8::operator <(AU8 const& Other) const
{
    return this->Value < Other.Value;
}

bool AU8::operator <=(AU8 const& Other) const
{
    return this->Value <= Other.Value;
}

bool AU8::operator >(AU8 const& Other) const
{
    return this->Value > Other.Value;
}

bool AU8::operator >=(AU8 const& Other) const
{
    return this->Value >= Other.Value;
}

bool AU8::operator ==(AU8 const& Other) const
{
    return this->Value == Other.Value;
}

bool AU8::operator !=(AU8 const& Other) const
{
    return this->Value != Other.Value;
}

AU8& AU8::operator++()
{
    this->Value++;
    return (*this);
}

AU8& AU8::operator--()
{
    this->Value--;
    return (*this);
}

AU8 AU8::operator++(int)
{
    AU8 Ret(this->Value);
    this->Value++;
    return Ret;
}

AU8 AU8::operator--(int)
{
    AU8 Ret(this->Value);
    this->Value--;
    return Ret;
}

bool AU8::operator!() const
{
    return !(this->Value);
}

bool AU8::operator&&(AU8 const& Other) const
{
    return this->Value && Other.Value;
}

bool AU8::operator||(AU8 const& Other) const
{
    return this->Value || Other.Value;
}

AU8 AU8::operator+() const
{
    return AU8(+(this->Value));
}

AU8 AU8::operator-() const
{
    return AU8(-(this->Value));
}

AU8 AU8::operator+(AU8 const& Other) const
{
    return AU8((this->Value + Other.Value));
}

AU8 AU8::operator-(AU8 const& Other) const
{
    return AU8((this->Value - Other.Value));
}

AU8 AU8::operator*(AU8 const& Other) const
{
    return AU8((this->Value * Other.Value));
}

AU8 AU8::operator/(AU8 const& Other) const
{
    return AU8((this->Value / Other.Value));
}

AU8 AU8::operator%(AU8 const& Other) const
{
    return AU8((this->Value % Other.Value));
}

AU8 AU8::operator~(AU8 const& Other) const
{
    return AU8(this->Value & Other.Value);
}

AU8 AU8::operator&(AU8 const& Other) const
{
    return AU8(this->Value & Other.Value);
}

AU8 AU8::operator|(AU8 const& Other) const
{
    return AU8(this->Value | Other.Value);
}

AU8 AU8::operator^(AU8 const& Other) const
{
    return AU8(this->Value ^ Other.Value);
}

AU8 AU8::operator<<(AU8 const& Other) const
{
    return AU8(this->Value << Other.Value);
}

AU8 AU8::operator>>(AU8 const& Other) const
{
    return AU8(this->Value >> Other.Value);
}

AU8& AU8::operator+=(AU8 const& Other) const
{
    this->Value += Other.Value;
    return (*this);
}

AU8& AU8::operator-=(AU8 const& Other) const
{
    this->Value -= Other.Value;
    return (*this);
}

AU8& AU8::operator*=(AU8 const& Other) const
{
    this->Value *= Other.Value;
    return (*this);
}

AU8& AU8::operator/=(AU8 const& Other) const
{
    this->Value /= Other.Value;
    return (*this);
}

AU8& AU8::operator%=(AU8 const& Other) const
{
    this->Value %= Other.Value;
    return (*this);
}

AU8& AU8::operator&=(AU8 const& Other) const
{
    this->Value &= Other.Value;
    return (*this);
}

AU8& AU8::operator|=(AU8 const& Other) const
{
    this->Value |= Other.Value;
    return (*this);
}

AU8& AU8::operator^=(AU8 const& Other) const
{
    this->Value ^= Other.Value;
    return (*this);
}

AU8& AU8::operator<<=(AU8 const& Other) const
{
    this->Value <<= Other.Value;
    return (*this);
}

AU8& AU8::operator>>=(AU8 const& Other) const
{
    this->Value >>= Other.Value;
    return (*this);
}

i8 AU8::ToI8() const 
{
    return (i8)(this->Value);
}

i16 AU8::ToI16() const 
{
    return (i16)(this->Value);
}

i32 AU8::ToI32() const 
{
    return (i32)(this->Value);
}

i64 AU8::ToI64() const 
{
    return (i64)(this->Value);
}

u8 AU8::ToU8() const 
{
    return (u8)(this->Value);
}

u16 AU8::ToU16() const 
{
    return (u16)(this->Value);
}

u32 AU8::ToU32() const 
{
    return (u32)(this->Value);
}

u64 AU8::ToU64() const
{
    return (u64)(this->Value);
}

float AU8::ToFloat() const
{
    return (float)(this->Value);
}

double AU8::ToDouble() const 
{
    return (double)(this->Value);
}

size AU8::ToSize() const 
{
    return (size)(this->Value);
}


}
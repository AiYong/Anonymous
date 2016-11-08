#include <Anonymous/AU16.h>
#include <Anonymous/AString.h>

namespace Anonymous {


AU16::AU16()
    :Value()
{
}

AU16::AU16(i8 Value)
    :Value(Value)
{
}

AU16::AU16(AU16 const& Other)
{
    this->Value = Other.Value;
}

AU16& AU16::operator=(AU16 const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AU16::~AU16()
{
}

AU16::operator u16()
{
    return Value;
}

bool AU16::operator <(AU16 const& Other) const
{
    return this->Value < Other.Value;
}

bool AU16::operator <=(AU16 const& Other) const
{
    return this->Value <= Other.Value;
}

bool AU16::operator >(AU16 const& Other) const
{
    return this->Value > Other.Value;
}

bool AU16::operator >=(AU16 const& Other) const
{
    return this->Value >= Other.Value;
}

bool AU16::operator ==(AU16 const& Other) const
{
    return this->Value == Other.Value;
}

bool AU16::operator !=(AU16 const& Other) const
{
    return this->Value != Other.Value;
}

AU16& AU16::operator++()
{
    this->Value++;
    return (*this);
}

AU16& AU16::operator--()
{
    this->Value--;
    return (*this);
}

AU16 AU16::operator++(int)
{
    AU16 Ret(this->Value);
    this->Value++;
    return Ret;
}

AU16 AU16::operator--(int)
{
    AU16 Ret(this->Value);
    this->Value--;
    return Ret;
}

bool AU16::operator!() const
{
    return !(this->Value);
}

bool AU16::operator&&(AU16 const& Other) const
{
    return this->Value && Other.Value;
}

bool AU16::operator||(AU16 const& Other) const
{
    return this->Value || Other.Value;
}

AU16 AU16::operator+() const
{
    return AU16(+(this->Value));
}

AU16 AU16::operator-() const
{
    return AU16(-(this->Value));
}

AU16 AU16::operator+(AU16 const& Other) const
{
    return AU16((this->Value + Other.Value));
}

AU16 AU16::operator-(AU16 const& Other) const
{
    return AU16((this->Value - Other.Value));
}

AU16 AU16::operator*(AU16 const& Other) const
{
    return AU16((this->Value * Other.Value));
}

AU16 AU16::operator/(AU16 const& Other) const
{
    return AU16((this->Value / Other.Value));
}

AU16 AU16::operator%(AU16 const& Other) const
{
    return AU16((this->Value % Other.Value));
}

AU16 AU16::operator~(AU16 const& Other) const
{
    return AU16(this->Value & Other.Value);
}

AU16 AU16::operator&(AU16 const& Other) const
{
    return AU16(this->Value & Other.Value);
}

AU16 AU16::operator|(AU16 const& Other) const
{
    return AU16(this->Value | Other.Value);
}

AU16 AU16::operator^(AU16 const& Other) const
{
    return AU16(this->Value ^ Other.Value);
}

AU16 AU16::operator<<(AU16 const& Other) const
{
    return AU16(this->Value << Other.Value);
}

AU16 AU16::operator>>(AU16 const& Other) const
{
    return AU16(this->Value >> Other.Value);
}

AU16& AU16::operator+=(AU16 const& Other) const
{
    this->Value += Other.Value;
    return (*this);
}

AU16& AU16::operator-=(AU16 const& Other) const
{
    this->Value -= Other.Value;
    return (*this);
}

AU16& AU16::operator*=(AU16 const& Other) const
{
    this->Value *= Other.Value;
    return (*this);
}

AU16& AU16::operator/=(AU16 const& Other) const
{
    this->Value /= Other.Value;
    return (*this);
}

AU16& AU16::operator%=(AU16 const& Other) const
{
    this->Value %= Other.Value;
    return (*this);
}

AU16& AU16::operator&=(AU16 const& Other) const
{
    this->Value &= Other.Value;
    return (*this);
}

AU16& AU16::operator|=(AU16 const& Other) const
{
    this->Value |= Other.Value;
    return (*this);
}

AU16& AU16::operator^=(AU16 const& Other) const
{
    this->Value ^= Other.Value;
    return (*this);
}

AU16& AU16::operator<<=(AU16 const& Other) const
{
    this->Value <<= Other.Value;
    return (*this);
}

AU16& AU16::operator>>=(AU16 const& Other) const
{
    this->Value >>= Other.Value;
    return (*this);
}

i8 AU16::ToI8() const 
{
    return (i8)(this->Value);
}

i16 AU16::ToI16() const 
{
    return (i16)(this->Value);
}

i32 AU16::ToI32() const 
{
    return (i32)(this->Value);
}

i64 AU16::ToI64() const 
{
    return (i64)(this->Value);
}

u8 AU16::ToU8() const 
{
    return (u8)(this->Value);
}

u16 AU16::ToU16() const 
{
    return (u16)(this->Value);
}

u32 AU16::ToU32() const 
{
    return (u32)(this->Value);
}

u64 AU16::ToU64() const
{
    return (u64)(this->Value);
}

float AU16::ToFloat() const
{
    return (float)(this->Value);
}

double AU16::ToDouble() const 
{
    return (double)(this->Value);
}

size AU16::ToSize() const 
{
    return (size)(this->Value);
}

}
#include <Anonymous/AU32.h>
#include <Anonymous/AString.h>


namespace Anonymous {


AU32::AU32()
    :Value()
{
}

AU32::AU32(i8 Value)
    :Value(Value)
{
}

AU32::AU32(AU32 const& Other)
{
    this->Value = Other.Value;
}

AU32& AU32::operator=(AU32 const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AU32::~AU32()
{
}

AU32::operator u32()
{
    return Value;
}

bool AU32::operator <(AU32 const& Other) const
{
    return this->Value < Other.Value;
}

bool AU32::operator <=(AU32 const& Other) const
{
    return this->Value <= Other.Value;
}

bool AU32::operator >(AU32 const& Other) const
{
    return this->Value > Other.Value;
}

bool AU32::operator >=(AU32 const& Other) const
{
    return this->Value >= Other.Value;
}

bool AU32::operator ==(AU32 const& Other) const
{
    return this->Value == Other.Value;
}

bool AU32::operator !=(AU32 const& Other) const
{
    return this->Value != Other.Value;
}

AU32& AU32::operator++()
{
    this->Value++;
    return (*this);
}

AU32& AU32::operator--()
{
    this->Value--;
    return (*this);
}

AU32 AU32::operator++(int)
{
    AU32 Ret(this->Value);
    this->Value++;
    return Ret;
}

AU32 AU32::operator--(int)
{
    AU32 Ret(this->Value);
    this->Value--;
    return Ret;
}

bool AU32::operator!() const
{
    return !(this->Value);
}

bool AU32::operator&&(AU32 const& Other) const
{
    return this->Value && Other.Value;
}

bool AU32::operator||(AU32 const& Other) const
{
    return this->Value || Other.Value;
}

AU32 AU32::operator+() const
{
    return AU32(+(this->Value));
}

AU32 AU32::operator-() const
{
    return AU32(-(this->Value));
}

AU32 AU32::operator+(AU32 const& Other) const
{
    return AU32((this->Value + Other.Value));
}

AU32 AU32::operator-(AU32 const& Other) const
{
    return AU32((this->Value - Other.Value));
}

AU32 AU32::operator*(AU32 const& Other) const
{
    return AU32((this->Value * Other.Value));
}

AU32 AU32::operator/(AU32 const& Other) const
{
    return AU32((this->Value / Other.Value));
}

AU32 AU32::operator%(AU32 const& Other) const
{
    return AU32((this->Value % Other.Value));
}

AU32 AU32::operator~(AU32 const& Other) const
{
    return AU32(this->Value & Other.Value);
}

AU32 AU32::operator&(AU32 const& Other) const
{
    return AU32(this->Value & Other.Value);
}

AU32 AU32::operator|(AU32 const& Other) const
{
    return AU32(this->Value | Other.Value);
}

AU32 AU32::operator^(AU32 const& Other) const
{
    return AU32(this->Value ^ Other.Value);
}

AU32 AU32::operator<<(AU32 const& Other) const
{
    return AU32(this->Value << Other.Value);
}

AU32 AU32::operator>>(AU32 const& Other) const
{
    return AU32(this->Value >> Other.Value);
}

AU32& AU32::operator+=(AU32 const& Other) const
{
    this->Value += Other.Value;
    return (*this);
}

AU32& AU32::operator-=(AU32 const& Other) const
{
    this->Value -= Other.Value;
    return (*this);
}

AU32& AU32::operator*=(AU32 const& Other) const
{
    this->Value *= Other.Value;
    return (*this);
}

AU32& AU32::operator/=(AU32 const& Other) const
{
    this->Value /= Other.Value;
    return (*this);
}

AU32& AU32::operator%=(AU32 const& Other) const
{
    this->Value %= Other.Value;
    return (*this);
}

AU32& AU32::operator&=(AU32 const& Other) const
{
    this->Value &= Other.Value;
    return (*this);
}

AU32& AU32::operator|=(AU32 const& Other) const
{
    this->Value |= Other.Value;
    return (*this);
}

AU32& AU32::operator^=(AU32 const& Other) const
{
    this->Value ^= Other.Value;
    return (*this);
}

AU32& AU32::operator<<=(AU32 const& Other) const
{
    this->Value <<= Other.Value;
    return (*this);
}

AU32& AU32::operator>>=(AU32 const& Other) const
{
    this->Value >>= Other.Value;
    return (*this);
}

i8 AU32::ToI8() const 
{
    return (i8)(this->Value);
}

i16 AU32::ToI16() const 
{
    return (i16)(this->Value);
}

i32 AU32::ToI32() const 
{
    return (i32)(this->Value);
}

i64 AU32::ToI64() const 
{
    return (i64)(this->Value);
}

u8 AU32::ToU8() const 
{
    return (u8)(this->Value);
}

u16 AU32::ToU16() const 
{
    return (u16)(this->Value);
}

u32 AU32::ToU32() const 
{
    return (u32)(this->Value);
}

u64 AU32::ToU64() const
{
    return (u64)(this->Value);
}

float AU32::ToFloat() const
{
    return (float)(this->Value);
}

double AU32::ToDouble() const 
{
    return (double)(this->Value);
}

size AU32::ToSize() const 
{
    return (size)(this->Value);
}

} 
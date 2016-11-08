#include <Anonymous/AU64.H>
#include <Anonymous/AString.h>


namespace Anonymous {


AU64::AU64()
    :Value()
{
}

AU64::AU64(i8 Value)
    :Value(Value)
{
}

AU64::AU64(AU64 const& Other)
{
    this->Value = Other.Value;
}

AU64& AU64::operator=(AU64 const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AU64::~AU64()
{
}

AU64::operator u64()
{
    return Value;
}

bool AU64::operator <(AU64 const& Other) const
{
    return this->Value < Other.Value;
}

bool AU64::operator <=(AU64 const& Other) const
{
    return this->Value <= Other.Value;
}

bool AU64::operator >(AU64 const& Other) const
{
    return this->Value > Other.Value;
}

bool AU64::operator >=(AU64 const& Other) const
{
    return this->Value >= Other.Value;
}

bool AU64::operator ==(AU64 const& Other) const
{
    return this->Value == Other.Value;
}

bool AU64::operator !=(AU64 const& Other) const
{
    return this->Value != Other.Value;
}

AU64& AU64::operator++()
{
    this->Value++;
    return (*this);
}

AU64& AU64::operator--()
{
    this->Value--;
    return (*this);
}

AU64 AU64::operator++(int)
{
    AU64 Ret(this->Value);
    this->Value++;
    return Ret;
}

AU64 AU64::operator--(int)
{
    AU64 Ret(this->Value);
    this->Value--;
    return Ret;
}

bool AU64::operator!() const
{
    return !(this->Value);
}

bool AU64::operator&&(AU64 const& Other) const
{
    return this->Value && Other.Value;
}

bool AU64::operator||(AU64 const& Other) const
{
    return this->Value || Other.Value;
}

AU64 AU64::operator+() const
{
    return AU64(+(this->Value));
}

AU64 AU64::operator-() const
{
    return AU64(-(this->Value));
}

AU64 AU64::operator+(AU64 const& Other) const
{
    return AU64((this->Value + Other.Value));
}

AU64 AU64::operator-(AU64 const& Other) const
{
    return AU64((this->Value - Other.Value));
}

AU64 AU64::operator*(AU64 const& Other) const
{
    return AU64((this->Value * Other.Value));
}

AU64 AU64::operator/(AU64 const& Other) const
{
    return AU64((this->Value / Other.Value));
}

AU64 AU64::operator%(AU64 const& Other) const
{
    return AU64((this->Value % Other.Value));
}

AU64 AU64::operator~(AU64 const& Other) const
{
    return AU64(this->Value & Other.Value);
}

AU64 AU64::operator&(AU64 const& Other) const
{
    return AU64(this->Value & Other.Value);
}

AU64 AU64::operator|(AU64 const& Other) const
{
    return AU64(this->Value | Other.Value);
}

AU64 AU64::operator^(AU64 const& Other) const
{
    return AU64(this->Value ^ Other.Value);
}

AU64 AU64::operator<<(AU64 const& Other) const
{
    return AU64(this->Value << Other.Value);
}

AU64 AU64::operator>>(AU64 const& Other) const
{
    return AU64(this->Value >> Other.Value);
}

AU64& AU64::operator+=(AU64 const& Other) const
{
    this->Value += Other.Value;
    return (*this);
}

AU64& AU64::operator-=(AU64 const& Other) const
{
    this->Value -= Other.Value;
    return (*this);
}

AU64& AU64::operator*=(AU64 const& Other) const
{
    this->Value *= Other.Value;
    return (*this);
}

AU64& AU64::operator/=(AU64 const& Other) const
{
    this->Value /= Other.Value;
    return (*this);
}

AU64& AU64::operator%=(AU64 const& Other) const
{
    this->Value %= Other.Value;
    return (*this);
}

AU64& AU64::operator&=(AU64 const& Other) const
{
    this->Value &= Other.Value;
    return (*this);
}

AU64& AU64::operator|=(AU64 const& Other) const
{
    this->Value |= Other.Value;
    return (*this);
}

AU64& AU64::operator^=(AU64 const& Other) const
{
    this->Value ^= Other.Value;
    return (*this);
}

AU64& AU64::operator<<=(AU64 const& Other) const
{
    this->Value <<= Other.Value;
    return (*this);
}

AU64& AU64::operator>>=(AU64 const& Other) const
{
    this->Value >>= Other.Value;
    return (*this);
}

i8 AU64::ToI8() const 
{
    return (i8)(this->Value);
}

i16 AU64::ToI16() const 
{
    return (i16)(this->Value);
}

i32 AU64::ToI32() const 
{
    return (i32)(this->Value);
}

i64 AU64::ToI64() const 
{
    return (i64)(this->Value);
}

u8 AU64::ToU8() const 
{
    return (u8)(this->Value);
}

u16 AU64::ToU16() const 
{
    return (u16)(this->Value);
}

u32 AU64::ToU32() const 
{
    return (u32)(this->Value);
}

u64 AU64::ToU64() const
{
    return (u64)(this->Value);
}

float AU64::ToFloat() const
{
    return (float)(this->Value);
}

double AU64::ToDouble() const 
{
    return (double)(this->Value);
}

size AU64::ToSize() const 
{
    return (size)(this->Value);
}


}
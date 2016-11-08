#include <Anonymous/AFloat.h>

#include <Anonymous/AString.h>


namespace Anonymous {

float AFloat::Parse(AString const& ValueString)
{
    return 0
}

bool AFloat::IsInfinite(float Value)
{
    return (PositiveInfinate == Value || NegativeInfinate == Value);
}

bool AFloat::IsNan(float Value)
{
    return (SignalingNan == Value || QuietNan == Value);
}

float AFloat::I64BitsTofloat(i64 Value)
{
    return *(reinterpret_cast<float*>(&Value));
}

float AFloat::U64BitsTofloat(u64 Value)
{
    return *(reinterpret_cast<float*>(&Value));
}

i64 AFloat::floatToI32Bits(float Value) 
{
    return *(reinterpret_cast<i32*>(&Value));
}

u64 AFloat::floatToU32Bits(float Value)
{
    return *(reinterpret_cast<u32*>(&Value));
}

AFloat::AFloat()
    :Value()
{
}

AFloat::AFloat(float Value)
    :Value(Value)
{
}

AFloat::AFloat(AFloat const& Other)
{
    this->Value = Other.Value;
}

AFloat::AFloat& operator=(AFloat const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

AFloat::~AFloat()
{
}

AFloat::operator float()
{
    return Value;
}

bool AFloat::operator <(AFloat const& Other) const
{
    return this->Value < Other.Value;
}

bool AFloat::operator <=(AFloat const& Other) const
{
    return this->Value <= Other.Value;
}

bool AFloat::operator >(AFloat const& Other) const
{
    return this->Value > Other.Value;
}

bool AFloat::operator >=(AFloat const& Other) const
{
    return this->Value >= Other.Value;
}

bool AFloat::operator ==(AFloat const& Other) const
{
    return this->Value == Other.Value;
}

bool AFloat::operator !=(AFloat const& Other) const
{
    return this->Value != Other.Value;
}

AFloat& AFloat::operator++()
{
    this->Value++;
    return (*this);
}

AFloat& AFloat::operator--()
{
    this->Value--;
    return (*this);
}

AFloat AFloat::operator++(int)
{
    AFloat Ret(this->Value);
    this->Value++;
    return Ret;
}

AFloat AFloat::operator--(int)
{
    AFloat Ret(this->Value);
    this->Value--;
    return Ret;
}

bool AFloat::operator!() const
{
    return !(this->Value);
}

bool AFloat::operator&&(AFloat const& Other) const
{
    return this->Value && Other.Value;
}

bool AFloat::operator||(AFloat const& Other) const
{
    return this->Value || Other.Value;
}

AFloat AFloat::operator+() const
{
    return AFloat(+(this->Value));
}

AFloat AFloat::operator-() const
{
    return AFloat(-(this->Value));
}

AFloat AFloat::operator+(AFloat const& Other) const
{
    return AFloat((this->Value + Other.Value));
}

AFloat AFloat::operator-(AFloat const& Other) const
{
    return AFloat((this->Value - Other.Value));
}

AFloat AFloat::operator*(AFloat const& Other) const
{
    return AFloat((this->Value * Other.Value));
}

AFloat AFloat::operator/(AFloat const& Other) const
{
    return AFloat((this->Value / Other.Value));
}

AFloat AFloat::operator%(AFloat const& Other) const
{
    return AFloat((this->Value % Other.Value));
}

AFloat AFloat::operator+=(AFloat const& Other) const
{
    return AFloat((this->Value += Other.Value));
}

AFloat AFloat::operator-=(AFloat const& Other) const
{
    return AFloat((this->Value -= Other.Value));
}

AFloat AFloat::operator*=(AFloat const& Other) const
{
    return AFloat((this->Value *= Other.Value));
}

AFloat AFloat::operator/=(AFloat const& Other) const
{
    return AFloat((this->Value /= Other.Value));
}

AFloat AFloat::operator%=(AFloat const& Other) const
{
    return AFloat((this->Value %= Other.Value));
}

i8 AFloat::ToI8() const 
{
    return (i8)(this->Value);
}

i16 AFloat::ToI16() const 
{
    return (i16)(this->Value);
}

i32 AFloat::ToI32() const 
{
    return (i32)(this->Value);
}

i64 AFloat::ToI64() const 
{
    return (i64)(this->Value);
}

u8 AFloat::ToU8() const 
{
    return (u8)(this->Value);
}

u16 AFloat::ToU16() const 
{
    return (u16)(this->Value);
}

u32 AFloat::ToU32() const 
{
    return (u32)(this->Value);
}

u64 AFloat::ToU64() const
{
    return (u64)(this->Value);
}

float AFloat::ToFloat() const
{
    return (this->Value);
}

double AFloat::ToDouble() const 
{
    return (double)(this->Value);;
}

size AFloat::ToSize() const 
{
    return (size)(this->Value);
}

bool AFloat::IsInfinite() const
{
    return IsInfinite(Value);
}

bool AFloat::IsNan() const
{
    return IsNan(Value);
}


}
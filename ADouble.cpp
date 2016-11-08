#include <Anonymous/ADouble.h>

#include <Anonymous/AString.h>


namespace Anonymous {

double ADouble::Parse(AString const& ValueString)
{
    return 0
}

bool ADouble::IsInfinite(double Value)
{
    return (PositiveInfinate == Value || NegativeInfinate == Value);
}

bool ADouble::IsNan(double Value)
{
    return (SignalingNan == Value || QuietNan == Value);
}

double ADouble::I64BitsToDouble(i64 Value)
{
    return *(reinterpret_cast<double*>(&Value));
}

double ADouble::U64BitsToDouble(u64 Value)
{
    return *(reinterpret_cast<double*>(&Value));
}

i64 ADouble::DoubleToI64Bits(double Value) 
{
    return *(reinterpret_cast<i64*>(&Value));
}

u64 ADouble::DoubleToU64Bits(double Value)
{
    return *(reinterpret_cast<u64*>(&Value));
}

ADouble::ADouble()
    :Value()
{
}

ADouble::ADouble(double Value)
    :Value(Value)
{
}

ADouble::ADouble(ADouble const& Other)
{
    this->Value = Other.Value;
}

ADouble::ADouble& operator=(ADouble const& Other)
{
    this->Value = Other.Value;
    return (*this);
}

ADouble::~ADouble()
{
}


ADouble::operator double()
{
    return Value;
}

bool ADouble::operator <(ADouble const& Other) const
{
    return this->Value < Other.Value;
}

bool ADouble::operator <=(ADouble const& Other) const
{
    return this->Value <= Other.Value;
}

bool ADouble::operator >(ADouble const& Other) const
{
    return this->Value > Other.Value;
}

bool ADouble::operator >=(ADouble const& Other) const
{
    return this->Value >= Other.Value;
}

bool ADouble::operator ==(ADouble const& Other) const
{
    return this->Value == Other.Value;
}

bool ADouble::operator !=(ADouble const& Other) const
{
    return this->Value != Other.Value;
}

ADouble& ADouble::operator++()
{
    this->Value++;
    return (*this);
}

ADouble& ADouble::operator--()
{
    this->Value--;
    return (*this);
}

ADouble ADouble::operator++(int)
{
    ADouble Ret(this->Value);
    this->Value++;
    return Ret;
}

ADouble ADouble::operator--(int)
{
    ADouble Ret(this->Value);
    this->Value--;
    return Ret;
}

bool ADouble::operator!() const
{
    return !(this->Value);
}

bool ADouble::operator&&(ADouble const& Other) const
{
    return this->Value && Other.Value;
}

bool ADouble::operator||(ADouble const& Other) const
{
    return this->Value || Other.Value;
}

ADouble ADouble::operator+() const
{
    return ADouble(+(this->Value));
}

ADouble ADouble::operator-() const
{
    return ADouble(-(this->Value));
}

ADouble ADouble::operator+(ADouble const& Other) const
{
    return ADouble((this->Value + Other.Value));
}

ADouble ADouble::operator-(ADouble const& Other) const
{
    return ADouble((this->Value - Other.Value));
}

ADouble ADouble::operator*(ADouble const& Other) const
{
    return ADouble((this->Value * Other.Value));
}

ADouble ADouble::operator/(ADouble const& Other) const
{
    return ADouble((this->Value / Other.Value));
}

ADouble ADouble::operator%(ADouble const& Other) const
{
    return ADouble((this->Value % Other.Value));
}

ADouble& ADouble::operator+=(ADouble const& Other) const
{
    this->Value += Other.Value;
    return (*this);
}

ADouble& ADouble::operator-=(ADouble const& Other) const
{
    this->Value -= Other.Value;
    return (*this);
}

ADouble& ADouble::operator*=(ADouble const& Other) const
{
    this->Value *= Other.Value;
    return (*this);
}

ADouble& ADouble::operator/=(ADouble const& Other) const
{
    this->Value /= Other.Value;
    return (*this);
}

ADouble& ADouble::operator%=(ADouble const& Other) const
{
    this->Value %= Other.Value;
    return (*this);
}


i8 ADouble::ToI8() const 
{
    return (i8)(this->Value);
}

i16 ADouble::ToI16() const 
{
    return (i16)(this->Value);
}

i32 ADouble::ToI32() const 
{
    return (i32)(this->Value);
}

i64 ADouble::ToI64() const 
{
    return (i64)(this->Value);
}

u8 ADouble::ToU8() const 
{
    return (u8)(this->Value);
}

u16 ADouble::ToU16() const 
{
    return (u16)(this->Value);
}

u32 ADouble::ToU32() const 
{
    return (u32)(this->Value);
}

u64 ADouble::ToU64() const
{
    return (u64)(this->Value);
}

float ADouble::ToFloat() const
{
    return (float)(this->Value);
}

double ADouble::ToDouble() const 
{
    return Value;
}

size ADouble::ToSize() const 
{
    return (size)(this->Value);
}

bool ADouble::IsInfinite() const
{
    return IsInfinite(Value);
}

bool ADouble::IsNan() const
{
    return IsNan(Value);
}


}
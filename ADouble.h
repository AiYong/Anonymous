#pragma once

#include <limits>
#include <Anonymous/ANumber.h>

namespace Anonymous {

class ADouble : public ANumber
{
    A_OBJECT()
public:

    /**
    *
    */
    static constexpr double MaxValue = std::numeric_limits<double>::max();

    /**
    *
    */
	static constexpr double MinValue = std::numeric_limits<double>::min();

    /**
    *
    */
	static constexpr double MinNormal = std::numeric_limits<double>::denorm_min();

    /**
    *
    */
	static constexpr i32 MaxExponet = std::numeric_limits<double>::max_exponent;

    /**
    *
    */
	static constexpr i32 MinExponet = std::numeric_limits<double>::min_exponent;

    /**
    *
    */
	static constexpr i32 MaxExponet10 = std::numeric_limits<double>::max_exponent10;

    /**
    *
    */
	static constexpr i32 MinExponet10 = std::numeric_limits<double>::min_exponent10;

    /**
    *
    */
	static constexpr double PositiveInfinate = std::numeric_limits<double>::infinity();

    /**
    *
    */
	static constexpr double NegativeInfinate = -1 * PositiveInfinate;

    /**
    *
    */
	static constexpr double SignalingNan = std::numeric_limits<double>::signaling_NaN();

    /**
    *
    */
	static constexpr double QuietNan = std::numeric_limits<double>::quiet_NaN();

    /**
    *
    */
	static constexpr i32 Digits = std::numeric_limits<double>::digits;

    /**
    *
    */
	static constexpr i32 Digits10 = std::numeric_limits<double>::digits10;

    /**
    *
    */
	static constexpr double Epsilon = std::numeric_limits<double>::epsilon();

public:

    static double Parse(AString const& ValueString);

public:

    static bool IsInfinite(double Value);

    static bool IsNan(double Value);

    static double I64BitsToDouble(i64 Value);

    static double U64BitsToDouble(u64 Value);

    static i64 DoubleToI64Bits() ;

    static u64 DoubleToU64Bits();

public:

    ADouble();

    ADouble(double dValue);

    ADouble(ADouble const& rOther);

    ADouble& operator=(ADouble const& rOther);

    virtual ~ADouble();

public:

    inline operator double();

public:

    bool operator <(ADouble const& Other) const;

    bool operator <=(ADouble const& Other) const;

    bool operator >(ADouble const& Other) const;

    bool operator >=(ADouble const& Other) const;

    bool operator ==(ADouble const& Other) const;

    bool operator !=(ADouble const& Other) const;

public:

    ADouble& operator++();

    ADouble& operator--();

    ADouble operator++(int);

    ADouble operator--(int);

public:

    bool operator!() const;

    bool operator&&(ADouble const& Other) const;

    bool operator||(ADouble const& Other) const;

public:

    ADouble operator+() const;

    ADouble operator-() const;

    ADouble operator+(ADouble const& Other) const;

    ADouble operator-(ADouble const& Other) const;

    ADouble operator*(ADouble const& Other) const;

    ADouble operator/(ADouble const& Other) const;

    ADouble operator%(ADouble const& Other) const;

public:

    ADouble& operator+=(ADouble const& Other) const;

    ADouble& operator-=(ADouble const& Other) const;

    ADouble& operator*=(ADouble const& Other) const;

    ADouble& operator/=(ADouble const& Other) const;

    ADouble& operator%=(ADouble const& Other) const;

public:

    virtual i8 ToI8() const ;

    virtual i16 ToI16() const ;

    virtual i32 ToI32() const ;

    virtual i64 ToI64() const ;
    
    virtual u8 ToU8() const ;

    virtual u16 ToU16() const ;

    virtual u32 ToU32() const ;

    virtual u64 ToU64() const ;

    virtual float ToDouble() const ;

    virtual double ToDouble() const ;

    virtual size ToSize() const ;

public:

    bool IsInfinite() const;

    bool IsNan() const;

private:

    double Value;

};

}

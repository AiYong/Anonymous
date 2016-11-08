#pragma once

#include <Anonymous/ANumber.h>

namespace Anonymous {

class AI16 : public ANumber
{
    A_OBJECT()
public:

    AI16();

    AI16(i8 Value);

    AI16(AI16 const& Other);

    AI16& operator=(AI16 const& Other);

    virtual ~AI16();

public:

    operator i16();

public:

    bool operator <(AI16 const& Other) const;

    bool operator <=(AI16 const& Other) const;

    bool operator >(AI16 const& Other) const;

    bool operator >=(AI16 const& Other) const;

    bool operator ==(AI16 const& Other) const;

    bool operator !=(AI16 const& Other) const;

public:

    AI16& operator++();

    AI16& operator--();

    AI16 operator++(int);

    AI16 operator--(int);

public:

    bool operator!(AI16 const& Other) const;

    bool operator&&(AI16 const& Other) const;

    bool operator||(AI16 const& Other) const;

public:

    AI16 operator+() const;

    AI16 operator-() const;

    AI16 operator+(AI16 const& Other) const;

    AI16 operator-(AI16 const& Other) const;

    AI16 operator*(AI16 const& Other) const;

    AI16 operator/(AI16 const& Other) const;

    AI16 operator%(AI16 const& Other) const;

    AI16 operator~(AI16 const& Other) const;

    AI16 operator&(AI16 const& Other) const;

    AI16 operator|(AI16 const& Other) const;

    AI16 operator^(AI16 const& Other) const;

    AI16 operator<<(AI16 const& Other) const;

    AI16 operator>>(AI16 const& Other) const;

public:

    AI16& operator+=(AI16 const& Other) const;

    AI16& operator-=(AI16 const& Other) const;

    AI16& operator*=(AI16 const& Other) const;

    AI16& operator/=(AI16 const& Other) const;

    AI16& operator%=(AI16 const& Other) const;

    AI16& operator&=(AI16 const& Other) const;

    AI16& operator|=(AI16 const& Other) const;

    AI16& operator^=(AI16 const& Other) const;

    AI16& operator<<=(AI16 const& Other) const;

    AI16& operator>>=(AI16 const& Other) const;
public:

    virtual i8 ToI8() const ;

    virtual i16 ToI16() const ;

    virtual i32 ToI32() const ;

    virtual i64 ToI64() const ;
    
    virtual u8 ToU8() const ;

    virtual u16 ToU16() const ;

    virtual u32 ToU32() const ;

    virtual u64 ToU64() const ;

    virtual float ToFloat() const ;

    virtual double ToDouble() const ;

    virtual size ToSize() const ;

private:

    i16 Value;

};

}

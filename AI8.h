#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class AI8 : public AObject 
{
    A_OBJECT()
public:

    AI8();

    AI8(i8 Value);

    AI8(AI8 const& Other);

    AI8& operator=(AI8 const& Other);

    virtual ~AI8();

public:

    operator i8();

public:

    bool operator <(AI8 const& Other) const;

    bool operator <=(AI8 const& Other) const;

    bool operator >(AI8 const& Other) const;

    bool operator >=(AI8 const& Other) const;

    bool operator ==(AI8 const& Other) const;

    bool operator !=(AI8 const& Other) const;

public:

    AI8& operator++();

    AI8& operator--();

    AI8 operator++(int);

    AI8 operator--(int);

public:

    bool operator!(AI8 const& Other) const;

    bool operator&&(AI8 const& Other) const;

    bool operator||(AI8 const& Other) const;

public:

    AI8 operator+() const;

    AI8 operator-() const;

    AI8 operator+(AI8 const& Other) const;

    AI8 operator-(AI8 const& Other) const;

    AI8 operator*(AI8 const& Other) const;

    AI8 operator/(AI8 const& Other) const;

    AI8 operator%(AI8 const& Other) const;

    AI8 operator~(AI8 const& Other) const;

    AI8 operator&(AI8 const& Other) const;

    AI8 operator|(AI8 const& Other) const;

    AI8 operator^(AI8 const& Other) const;

    AI8 operator<<(AI8 const& Other) const;

    AI8 operator>>(AI8 const& Other) const;

public:

    AI8& operator+=(AI8 const& Other) const;

    AI8& operator-=(AI8 const& Other) const;

    AI8& operator*=(AI8 const& Other) const;

    AI8& operator/=(AI8 const& Other) const;

    AI8& operator%=(AI8 const& Other) const;

    AI8& operator&=(AI8 const& Other) const;

    AI8& operator|=(AI8 const& Other) const;

    AI8& operator^=(AI8 const& Other) const;

    AI8& operator<<=(AI8 const& Other) const;

    AI8& operator>>=(AI8 const& Other) const;

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

    i8 Value;
    
};

}
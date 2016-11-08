#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class AI32 : public ANumber
{
public:

    AI32();

    AI32(i8 Value);

    AI32(AI32 const& Other);

    AI32& operator=(AI32 const& Other);

    virtual ~AI32();

public:

    operator i32();

public:

    bool operator <(AI32 const& Other) const;

    bool operator <=(AI32 const& Other) const;

    bool operator >(AI32 const& Other) const;

    bool operator >=(AI32 const& Other) const;

    bool operator ==(AI32 const& Other) const;

    bool operator !=(AI32 const& Other) const;

public:

    AI32& operator++();

    AI32& operator--();

    AI32 operator++(int);

    AI32 operator--(int);

public:

    bool operator!(AI32 const& Other) const;

    bool operator&&(AI32 const& Other) const;

    bool operator||(AI32 const& Other) const;

public:

    AI32 operator+() const;

    AI32 operator-() const;

    AI32 operator+(AI32 const& Other) const;

    AI32 operator-(AI32 const& Other) const;

    AI32 operator*(AI32 const& Other) const;

    AI32 operator/(AI32 const& Other) const;

    AI32 operator%(AI32 const& Other) const;

    AI32 operator~(AI32 const& Other) const;

    AI32 operator&(AI32 const& Other) const;

    AI32 operator|(AI32 const& Other) const;

    AI32 operator^(AI32 const& Other) const;

    AI32 operator<<(AI32 const& Other) const;

    AI32 operator>>(AI32 const& Other) const;

public:

    AI32& operator+=(AI32 const& Other) const;

    AI32& operator-=(AI32 const& Other) const;

    AI32& operator*=(AI32 const& Other) const;

    AI32& operator/=(AI32 const& Other) const;

    AI32& operator%=(AI32 const& Other) const;

    AI32& operator&=(AI32 const& Other) const;

    AI32& operator|=(AI32 const& Other) const;

    AI32& operator^=(AI32 const& Other) const;

    AI32& operator<<=(AI32 const& Other) const;

    AI32& operator>>=(AI32 const& Other) const;
    
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

};

}

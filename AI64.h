#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class AI64 : public ANumber
{
    A_OBJECT()
public:
        
    AI64();

    AI64(i8 Value);

    AI64(AI64 const& Other);

    AI64& operator=(AI64 const& Other);

    virtual ~AI64();

public:

    operator i64();

public:

    bool operator <(AI64 const& Other) const;

    bool operator <=(AI64 const& Other) const;

    bool operator >(AI64 const& Other) const;

    bool operator >=(AI64 const& Other) const;

    bool operator ==(AI64 const& Other) const;

    bool operator !=(AI64 const& Other) const;

public:

    AI64& operator++();

    AI64& operator--();

    AI64 operator++(int);

    AI64 operator--(int);

public:

    bool operator!(AI64 const& Other) const;

    bool operator&&(AI64 const& Other) const;

    bool operator||(AI64 const& Other) const;

public:

    AI64 operator+() const;

    AI64 operator-() const;

    AI64 operator+(AI64 const& Other) const;

    AI64 operator-(AI64 const& Other) const;

    AI64 operator*(AI64 const& Other) const;

    AI64 operator/(AI64 const& Other) const;

    AI64 operator%(AI64 const& Other) const;

    AI64 operator~(AI64 const& Other) const;

    AI64 operator&(AI64 const& Other) const;

    AI64 operator|(AI64 const& Other) const;

    AI64 operator^(AI64 const& Other) const;

    AI64 operator<<(AI64 const& Other) const;

    AI64 operator>>(AI64 const& Other) const;

public:

    AI64& operator+=(AI64 const& Other) const;

    AI64& operator-=(AI64 const& Other) const;

    AI64& operator*=(AI64 const& Other) const;

    AI64& operator/=(AI64 const& Other) const;

    AI64& operator%=(AI64 const& Other) const;

    AI64& operator&=(AI64 const& Other) const;

    AI64& operator|=(AI64 const& Other) const;

    AI64& operator^=(AI64 const& Other) const;

    AI64& operator<<=(AI64 const& Other) const;

    AI64& operator>>=(AI64 const& Other) const;
    
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

#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class AU8 : public AObject 
{
    A_OBJECT()
public:

    AU8();

    AU8(i8 Value);

    AU8(AU8 const& Other);

    AU8& operator=(AU8 const& Other);

    virtual ~AU8();

public:

    operator u8();

public:

    bool operator <(AU8 const& Other) const;

    bool operator <=(AU8 const& Other) const;

    bool operator >(AU8 const& Other) const;

    bool operator >=(AU8 const& Other) const;

    bool operator ==(AU8 const& Other) const;

    bool operator !=(AU8 const& Other) const;

public:

    AU8& operator++();

    AU8& operator--();

    AU8 operator++(int);

    AU8 operator--(int);

public:

    bool operator!(AU8 const& Other) const;

    bool operator&&(AU8 const& Other) const;

    bool operator||(AU8 const& Other) const;

public:

    AU8 operator+() const;

    AU8 operator-() const;

    AU8 operator+(AU8 const& Other) const;

    AU8 operator-(AU8 const& Other) const;

    AU8 operator*(AU8 const& Other) const;

    AU8 operator/(AU8 const& Other) const;

    AU8 operator%(AU8 const& Other) const;

    AU8 operator~(AU8 const& Other) const;

    AU8 operator&(AU8 const& Other) const;

    AU8 operator|(AU8 const& Other) const;

    AU8 operator^(AU8 const& Other) const;

    AU8 operator<<(AU8 const& Other) const;

    AU8 operator>>(AU8 const& Other) const;

public:

    AU8& operator+=(AU8 const& Other) const;

    AU8& operator-=(AU8 const& Other) const;

    AU8& operator*=(AU8 const& Other) const;

    AU8& operator/=(AU8 const& Other) const;

    AU8& operator%=(AU8 const& Other) const;

    AU8& operator&=(AU8 const& Other) const;

    AU8& operator|=(AU8 const& Other) const;

    AU8& operator^=(AU8 const& Other) const;

    AU8& operator<<=(AU8 const& Other) const;

    AU8& operator>>=(AU8 const& Other) const;

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
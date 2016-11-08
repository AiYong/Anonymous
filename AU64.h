#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class AU64 : public ANumber
{
public:

    AU64();

    AU64(i8 Value);

    AU64(AU64 const& Other);

    AU64& operator=(AU64 const& Other);

    virtual ~AU64();

public:

    operator u64();

public:

    bool operator <(AU64 const& Other) const;

    bool operator <=(AU64 const& Other) const;

    bool operator >(AU64 const& Other) const;

    bool operator >=(AU64 const& Other) const;

    bool operator ==(AU64 const& Other) const;

    bool operator !=(AU64 const& Other) const;

public:

    AU64& operator++();

    AU64& operator--();

    AU64 operator++(int);

    AU64 operator--(int);

public:

    bool operator!(AU64 const& Other) const;

    bool operator&&(AU64 const& Other) const;

    bool operator||(AU64 const& Other) const;

public:

    AU64 operator+() const;

    AU64 operator-() const;

    AU64 operator+(AU64 const& Other) const;

    AU64 operator-(AU64 const& Other) const;

    AU64 operator*(AU64 const& Other) const;

    AU64 operator/(AU64 const& Other) const;

    AU64 operator%(AU64 const& Other) const;

    AU64 operator~(AU64 const& Other) const;

    AU64 operator&(AU64 const& Other) const;

    AU64 operator|(AU64 const& Other) const;

    AU64 operator^(AU64 const& Other) const;

    AU64 operator<<(AU64 const& Other) const;

    AU64 operator>>(AU64 const& Other) const;

public:

    AU64& operator+=(AU64 const& Other) const;

    AU64& operator-=(AU64 const& Other) const;

    AU64& operator*=(AU64 const& Other) const;

    AU64& operator/=(AU64 const& Other) const;

    AU64& operator%=(AU64 const& Other) const;

    AU64& operator&=(AU64 const& Other) const;

    AU64& operator|=(AU64 const& Other) const;

    AU64& operator^=(AU64 const& Other) const;

    AU64& operator<<=(AU64 const& Other) const;

    AU64& operator>>=(AU64 const& Other) const;

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

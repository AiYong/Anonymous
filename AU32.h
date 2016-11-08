#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class AU32 : public ANumber
{
    A_OBJECT()
public:

    AU32();

    AU32(i8 Value);

    AU32(AU32 const& Other);

    AU32& operator=(AU32 const& Other);

    virtual ~AU32();

public:

    operator u32();

public:

    bool operator <(AU32 const& Other) const;

    bool operator <=(AU32 const& Other) const;

    bool operator >(AU32 const& Other) const;

    bool operator >=(AU32 const& Other) const;

    bool operator ==(AU32 const& Other) const;

    bool operator !=(AU32 const& Other) const;

public:

    AU32& operator++();

    AU32& operator--();

    AU32 operator++(int);

    AU32 operator--(int);

public:

    bool operator!(AU32 const& Other) const;

    bool operator&&(AU32 const& Other) const;

    bool operator||(AU32 const& Other) const;

public:

    AU32 operator+() const;

    AU32 operator-() const;

    AU32 operator+(AU32 const& Other) const;

    AU32 operator-(AU32 const& Other) const;

    AU32 operator*(AU32 const& Other) const;

    AU32 operator/(AU32 const& Other) const;

    AU32 operator%(AU32 const& Other) const;

    AU32 operator~(AU32 const& Other) const;

    AU32 operator&(AU32 const& Other) const;

    AU32 operator|(AU32 const& Other) const;

    AU32 operator^(AU32 const& Other) const;

    AU32 operator<<(AU32 const& Other) const;

    AU32 operator>>(AU32 const& Other) const;

public:

    AU32& operator+=(AU32 const& Other) const;

    AU32& operator-=(AU32 const& Other) const;

    AU32& operator*=(AU32 const& Other) const;

    AU32& operator/=(AU32 const& Other) const;

    AU32& operator%=(AU32 const& Other) const;

    AU32& operator&=(AU32 const& Other) const;

    AU32& operator|=(AU32 const& Other) const;

    AU32& operator^=(AU32 const& Other) const;

    AU32& operator<<=(AU32 const& Other) const;

    AU32& operator>>=(AU32 const& Other) const;
    
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

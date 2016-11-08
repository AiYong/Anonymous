#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class AU16 : public ANumber
{
    A_OBJECT()
public:

    AU16();

    AU16(i8 Value);

    AU16(AU16 const& Other);

    AU16& operator=(AU16 const& Other);

    virtual ~AU16();

public:

    operator u16();

public:

    bool operator <(AU16 const& Other) const;

    bool operator <=(AU16 const& Other) const;

    bool operator >(AU16 const& Other) const;

    bool operator >=(AU16 const& Other) const;

    bool operator ==(AU16 const& Other) const;

    bool operator !=(AU16 const& Other) const;

public:

    AU16& operator++();

    AU16& operator--();

    AU16 operator++(int);

    AU16 operator--(int);

public:

    bool operator!(AU16 const& Other) const;

    bool operator&&(AU16 const& Other) const;

    bool operator||(AU16 const& Other) const;

public:

    AU16 operator+() const;

    AU16 operator-() const;

    AU16 operator+(AU16 const& Other) const;

    AU16 operator-(AU16 const& Other) const;

    AU16 operator*(AU16 const& Other) const;

    AU16 operator/(AU16 const& Other) const;

    AU16 operator%(AU16 const& Other) const;

    AU16 operator~(AU16 const& Other) const;

    AU16 operator&(AU16 const& Other) const;

    AU16 operator|(AU16 const& Other) const;

    AU16 operator^(AU16 const& Other) const;

    AU16 operator<<(AU16 const& Other) const;

    AU16 operator>>(AU16 const& Other) const;

public:

    AU16& operator+=(AU16 const& Other) const;

    AU16& operator-=(AU16 const& Other) const;

    AU16& operator*=(AU16 const& Other) const;

    AU16& operator/=(AU16 const& Other) const;

    AU16& operator%=(AU16 const& Other) const;

    AU16& operator&=(AU16 const& Other) const;

    AU16& operator|=(AU16 const& Other) const;

    AU16& operator^=(AU16 const& Other) const;

    AU16& operator<<=(AU16 const& Other) const;

    AU16& operator>>=(AU16 const& Other) const;

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

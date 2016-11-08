#pragma once

#include <Anonymous/AObject.h>

namespace Anonymous {

class ASize : public ANumber
{
    A_OBJECT()
public:

    ASize();

    ASize(i8 Value);

    ASize(ASize const& Other);

    ASize& operator=(ASize const& Other);

    virtual ~ASize();

public:

    operator size();

public:

    bool operator <(ASize const& Other) const;

    bool operator <=(ASize const& Other) const;

    bool operator >(ASize const& Other) const;

    bool operator >=(ASize const& Other) const;

    bool operator ==(ASize const& Other) const;

    bool operator !=(ASize const& Other) const;

public:

    ASize& operator++();

    ASize& operator--();

    ASize operator++(int);

    ASize operator--(int);

public:

    bool operator!(ASize const& Other) const;

    bool operator&&(ASize const& Other) const;

    bool operator||(ASize const& Other) const;

public:

    ASize operator+() const;

    ASize operator-() const;

    ASize operator+(ASize const& Other) const;

    ASize operator-(ASize const& Other) const;

    ASize operator*(ASize const& Other) const;

    ASize operator/(ASize const& Other) const;

    ASize operator%(ASize const& Other) const;

    ASize operator~(ASize const& Other) const;

    ASize operator&(ASize const& Other) const;

    ASize operator|(ASize const& Other) const;

    ASize operator^(ASize const& Other) const;

    ASize operator<<(ASize const& Other) const;

    ASize operator>>(ASize const& Other) const;

public:

    ASize& operator+=(ASize const& Other) const;

    ASize& operator-=(ASize const& Other) const;

    ASize& operator*=(ASize const& Other) const;

    ASize& operator/=(ASize const& Other) const;

    ASize& operator%=(ASize const& Other) const;

    ASize& operator&=(ASize const& Other) const;

    ASize& operator|=(ASize const& Other) const;

    ASize& operator^=(ASize const& Other) const;

    ASize& operator<<=(ASize const& Other) const;

    ASize& operator>>=(ASize const& Other) const;
    
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

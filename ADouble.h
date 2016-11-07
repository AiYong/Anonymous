#pragma once

#include <Anonymous/ANumber.h>

namespace Anonymous {

class ADouble : public ANumber
{
    A_OBJECT()
public:

    static double MaxValue;

    static double MinValue;

    static double MinNormal;

    static i32 MaxExponet;

    static i32 MinExponet;

    static double POSITIVE_INFINATE;

    static double NEGATIVE_INFINATE;

    static double SNAN;

    static double QNAN;

    static i32 Digits; 

public:

    ADouble();

    ADouble(double dValue);

    ADouble(ADouble const& rOther);

    ADouble& operator=(ADouble const& rOther);

    virtual ~ADouble();

public:


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

public:


};

}

#pragma once

#include <Anonymous/ANumber.h>

namespace Anonymous {

class AI16 : public ANumber
{
    A_OBJECT()
public:

    AI16();

    ~AI16();

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

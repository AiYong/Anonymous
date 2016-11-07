#ifndef ASIZEINTEGER_H
#define ASIZEINTEGER_H

#include "ANumber.h"

class ASizeInteger : public ANumber
{
    A_OBJECT()
public:

       /**
     * @brief LongValue
     * @return
     */
    virtual i8 ToI8() const = 0;

    /**
     * @brief IntegerValue
     * @return
     */
    virtual i16 ToI16() const = 0;

    /**
     * @brief ShortValue
     * @return
     */
    virtual i32 ToI32() const = 0;

    /**
     *
     *
     */
    virtual i64 ToI64() const = 0;
    
    /**
     * @brief LongValue
     * @return
     */
    virtual u8 ToU8() const = 0;

    /**
     * @brief IntegerValue
     * @return
     */
    virtual u16 ToU16() const = 0;

    /**
     * @brief ShortValue
     * @return
     */
    virtual u32 ToU32() const = 0;

    /**
     *
     *
     */
    virtual u64 ToU64() const = 0;

    /**
     * @brief Float
     * @return
     */
    virtual float ToFloat() const = 0;

    /**
     * @brief Double
     * @return
     */
    virtual double ToDouble() const = 0;

    /**
     * @brief SizeInteger
     * @return
     */
    virtual size ToSize() = 0;

};

#endif // ASIZEINTEGER_H

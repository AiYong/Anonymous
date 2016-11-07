#pragma once 

#include <Anonymous/AObject.h>

namespace Anonymous {

/**
*@brief ANumber类
*   抽象类ANumber是基本类型的包裹类的基类，
*/
class ANumber : public AObject
{
    A_OBJECT()
public:

    virtual ~ANumber()
    {
    }

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

}

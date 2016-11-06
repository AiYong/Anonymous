#pragma once 

#include <Anonymous/AObject.h>

namespace Anonymous {

class AI8;
class AI16;
class AI32;
class AI64;
class AU8;
class AU16;
class AU32;
class AU64;
class AFloat;
class ADouble;
class ASize;

/**
*
*
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
    virtual AI8* ToI8() const = 0;

    /**
     * @brief IntegerValue
     * @return
     */
    virtual AI16* ToI16() const = 0;

    /**
     * @brief ShortValue
     * @return
     */
    virtual AI32* ToI32() const = 0;

    /**
     *
     *
     */
    virtual AI64* ToI64() const = 0;
    
    /**
     * @brief LongValue
     * @return
     */
    virtual AU8* To*8() const = 0;

    /**
     * @brief IntegerValue
     * @return
     */
    virtual AU16* ToU16() const = 0;

    /**
     * @brief ShortValue
     * @return
     */
    virtual AU32* ToU32() const = 0;

    /**
     *
     *
     */
    virtual AU64* ToU64() const = 0;

    /**
     * @brief Float
     * @return
     */
    virtual AFloat* ToFloat() const = 0;

    /**
     * @brief Double
     * @return
     */
    virtual ADouble* ToDouble() const = 0;

    /**
     * @brief SizeInteger
     * @return
     */
    virtual ASize* ToSize() = 0;

};

}

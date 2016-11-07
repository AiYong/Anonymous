#ifndef ASHORT_H
#define ASHORT_H

#include "ANumber.h"

class AShort : public ANumber
{
    A_OBJECT()
public:
    AShort();

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

private:

    uint16_t m_nValue;

};

#endif // ASHORT_H

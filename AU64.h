#ifndef AUNSIGNEDLONG_H
#define AUNSIGNEDLONG_H

#include "ANumber.h"

class AULong : public ANumber
{
public:

    AULong();

public:

    /**
     * @brief LongValue
     * @return
     */
    virtual ALong* LongValue() const = 0;

    /**
     * @brief IntegerValue
     * @return
     */
    virtual AInteger* IntegerValue() const = 0;

    /**
     * @brief ShortValue
     * @return
     */
    virtual AShort* ShortValue() const = 0;

    /**
     * @brief LongValue
     * @return
     */
    virtual AULong* ULongValue() const = 0;

    /**
     * @brief IntegerValue
     * @return
     */
    virtual AUInteger* UIntegerValue() const = 0;

    /**
     * @brief ShortValue
     * @return
     */
    virtual AUShort* UShortValue() const = 0;

    /**
     * @brief Float
     * @return
     */
    virtual AFloat* Float() const = 0;

    /**
     * @brief Double
     * @return
     */
    virtual ADouble* Double() const = 0;

    /**
     * @brief SizeInteger
     * @return
     */
    virtual ASizeInteger SizeInteger() = 0;
};

#endif // AUNSIGNEDLONG_H

#ifndef ARETURNVALUE_H
#define ARETURNVALUE_H

#include "AObject.h"
#include "AModifier.h"

class AReturnValue : public AObject
{
public:

    enum ReturnValueType
    {
        Value,
        Pointer,
        Reference
    };

    AReturnValue(AObject* ReturnValue,ValueType ValueType,int Modifier);

    AReturnValue(AReturnValue const& rOther);

    AReturnValue(AReturnValue &&rOther);

public:

    /**
     * @brief GetType
     * @return
     */
    ReturnValueType GetType() const;

    /**
     * @brief GetModifier
     * @return
     */
    int GetModifier() const;

    /**
     * @brief GetValue
     * @return
     */
    AObject* GetValue() const;

    /**
     * @brief GetValueType
     * @return
     */
    AClass* GetValueType() const;

private:

    AObject         *ReturnValue;
    int             Modifier;
    ReturnValueType ValueType;
};

#endif // ARETURNVALUE_H

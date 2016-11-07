#pragma once


#include <Anonymous/AObject.h>

namespace Anonymous {

/**
*
*/
class AReturnValue : public AObject
{
public:

    enum ReturnValueType
    {
        Value,
        Pointer,
        Reference
    };

    /**
     *
     */
    AReturnValue(AObject* ReturnValue,ReturnValueType ValueType,int Modifier);

    /**
     *
     */
    AReturnValue(AReturnValue const& rOther);

public:

    /**
     * @brief 返回返回值类型
     * @return
     */
    ReturnValueType GetType() const;

    /**
     * @brief 返回返回值修饰符
     * @return
     */
    int GetModifier() const;

    /**
     * @brief 返回返回值
     * @return
     */
    AObject* GetValue() const;

    /**
     * @brief 返回返回值类类型
     * @return
     */
    AClass* GetValueType() const;

private:

    AObject         *ReturnValue;
    i32             Modifier;
    ReturnValueType ValueType;
    
};

}

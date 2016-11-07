#pragma once

#include <initializer_list>

#include <Anonymous/AObject.h>
#include <Anonymous/AReturnValue.h>

namespace Anonymous {

/**
 * @brief 封装类的重载操作符函数
 */
class AOperator : public AObject
{
public:

    /**
    *@brief 重载操作符类型
    */
    enum OperatorType
    {
        CopyAssignment,
        MoveAssignment,
        AdditionAssignment,
        SubstractionAssignment,
        MultiplicationAssignment,
        DivisionAssignment,
        ModuloAssignment,
        BitwiseAndAssignment,
        BitwiseOrAssignment,
        BitwiseXORAssignment,
        BitwiseLeftShfitAssignment,
        BitwiseRightAssignment,
        PreIncrement,
        PreDecrement,
        PostIncrement,
        PostDecrement,
        UnaryPlus,
        UnartMinus,
        Addtion,
        Substraction,
        Multiplication,
        Division,
        Modulo,
        BitwiseNot,
        BitwiseAnd,
        BitwiseOr,
        BitwiseXOR,
        BitwiseLeftShift,
        BitwiseRightShift,
        Negation,
        And,
        Or,
        EqualTo,
        NotEqualTo,
        LessThan,
        GreaterThan,
        LessThanOrEqualTo,
        GreaterThanOrEqualTo,
        Subscript,
        Indirection,
        AddressOf,
        MemberOfPointer,
        PointerOfMemberOfObject,
        PointerOfMemberOfPointer,
        FuncationCall,
        Comma,
        UserDefineConversion
    };

    /**
     * @brief 返回封装的重载操作符类型
     * @return
     */
    virtual OperatorType GetType() const = 0;

    /**
     * @brief 调用重载操作符
     * @param Object        要调用的对象
     * @param ParamList     参数
     * @return
     */
    virtual AReturnValue Call(AObject *Object,std::initializer_list<AObject*> ParamList) = 0;
};

}

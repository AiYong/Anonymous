#ifndef AOPERATOR_H
#define AOPERATOR_H

#include <initializer_list>

#include "AObject.h"
#include "AReturnValue.h"

/**
 * @brief The AOperator class
 */
class AOperator : public AObject
{
public:

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
     * @brief GetType
     * @return
     */
    virtual OperatorType GetType() const = 0;

    /**
     * @brief Call
     * @param Object
     * @param ParamList
     * @return
     */
    virtual AReturnValue Call(AObject *Object,std::initializer_list<AObject*> ParamList) = 0;
};

#endif // AOPERATOR_H

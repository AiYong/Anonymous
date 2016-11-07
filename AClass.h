#pragma once 

#include <Anonymous/AObject.h>
#include <Anonymous/AField.h>
#include <Anonymous/AMethod.h>
#include <Anonymous/AOperator.h>
#include <Anonymous/ADestructor.h>
#include <Anonymous/AConstructor.h>

class AString;
class AClassLoader;


/**
 * @brief The AClass class
 */
class AClass : public AObject
{
    A_OBJECT()
public:

    typedef AClass*             AClassIterator;
    typedef AField*             AFieldIterator;
    typedef AMethod*            AMethodIterator;
    typedef AOperator*          AOperatorIterator;
    typedef AConstructor*       AConstructorIterator;
    typedef AAnnotation*        AAnnotationIterator;

    /**
     * @brief 加载指定名称的AClass
     * @param strName 类名称
     * @return
     */
    static AClass* LoadForName(AString const& strName);

    /**
     * @brief 返回类加载器
     * @return
     */
    static AClassLoader* GetClassLoader();

public:

    /**
     * @brief 返回类名称
     * 该名称不带命名空间
     * @return
     */
    virtual AString const& GetName() = 0;

    /**
     * @brief 返回类的限定名
     * 限定名称是指带命名空间的名称
     * @return
     */
    virtual AString const& GetCanoncalName() = 0;

public:

    /**
     * @brief 返回基类数量
     * @return
     */
    virtual size GetBaseCount() const = 0;

    /**
     * @brief 返回基类开始迭代器
     * @return
     */
    virtual AClassIterator GetBaseBegin() const = 0;

    /**
     * @brief 返回基类结束迭代器
     * @return
     */
    virtual AClassIterator GetBaseEnd() const = 0;

public:

    /**
     * @brief 返回类的字段数量
     * 返回值包括Public、Protected和Private字段
     * @return
     */
    virtual size GetDeclaredFieldCount() const = 0;

    /**
     * @brief 返回字段开始迭代器
     * @return
     */
    virtual AFieldIterator GetDeclaredFieldBegin() const = 0;

    /**
     * @brief 返回字段结束迭代器
     * @return
     */
    virtual AFieldIterator GetDeclaredFieldEnd() const = 0;

public:

    /**
     * @brief 测试指定构造函数是否存在。
     * @param ConstructType 构造函数类型。
     * @return 存在返回true，否则返回false。
     */
    virtual bool HasConstructor(AConstructor::ConstructorType ConstructType);

    /**
     * @brief 返回声明的构造函数数量
     * @return
     */
    virtual size GetDeclaredConstructorCount() const = 0;

    /**
     * @brief 返回指定类型的构造函数。
     * 对于UserDefinition来说，如果存在则返回第一个被查找到的构造函数，否则返回nullptr。
     * @param ConstructorType 构造函数类型
     * @return 存在返回指定构造函数的AConstructor,否则返回nullptr
     */
    virtual AConstructor* GetConstructor(AConstructor::ConstructorType ConstructorType) const = 0;

    /**
     * @brief 返回指定参数列表的构造函数。
     * @param ParamList 参数列表。
     * @return 存在返回相应的AConstructor,否则返回nullptr。
     */
    virtual AConstructor* GetContructor(std::initializer_list<AParameter*> ParamList) const = 0;

    /**
     * @brief
     * @return
     */
    virtual AConstructorIterator GetConstructorBegin() const;

    /**
     * @brief ConstructorEnd
     * @return
     */
    virtual AConstructorIterator GetConstructorEnd() const;

public:

    /**
     * @brief HasDestructor
     * @return
     */
    virtual bool HasDestructor() const = 0;

    /**
     * @brief GetDestructor
     * @return
     */
    virtual ADestructor* GetDestructor() const = 0;

public:

    /**
     * @brief HasOperator
     * @param OperatorType
     * @return
     */
    virtual bool HasOperator(AOperator::OperatorType OperatorType) const = 0;

    /**
     * @brief GetOperator
     * @param OperatorTYpe
     * @return
     */
    virtual AOperator* GetOperator(AOperator::OperatorType OperatorTYpe) const = 0;

    /**
     * @brief GetOperatorCount
     * @return
     */
    virtual size GetOperatorCount() const = 0;

    /**
     * @brief OperatorBegin
     * @return
     */
    virtual AOperatorIterator GetOperatorBegin() const = 0;

    /**
     * @brief OperatorEnd
     * @return
     */
    virtual AOperatorIterator GetOperatorEnd() const = 0;

public:

    /**
     * @brief 返回类方法数量
     * 该方法返回数量包含Public，Protected和Private
     * @return
     */
    virtual size GetDeclaredMethodCount() = 0;

    /**
     * @brief 返回指定名称和参数方法
     * @param strMethodName
     * @param lParameters
     * @return
     */
    virtual AMethod* GetDeclaredMethod(AString const& strMethodName,std::initializer_list<AParameter*> const& lParameters) = 0;

    /**
     * @brief 返回方法开始迭代器
     * @return
     */
    virtual AMethodIterator GetDeclaredMethodBegin() = 0;

    /**
     * @brief DeclaredMethodEnd
     * @return
     */
    virtual AMethodIterator GetDeclaredMethodEnd() = 0;

public:

    /**
     *
     */
    virtual bool Contain(AClass *pAnnotationClass) = 0;

    /**
     * @brief GetAnnotation
     * @param pAnnotationClass
     * @return
     */
    virtual AAnnotation* GetAnnotation(AClass *pAnnotationClass) = 0;

    /**
     * @brief AnnotationCount
     * @return
     */
    virtual size GetAnnotationCount() = 0;

    /**
     * @brief AnnotationBegin
     * @return
     */
    virtual AAnnotationIterator GetAnnotationBegin() = 0;

    /**
     * @brief AnnotationEnd
     * @return
     */
    virtual AAnnotationIterator GetAnnotationEnd() = 0;


public:

    virtual bool CanInstance() = 0;

public:

    /**
     * @brief IsDefaultConstructible
     * @return
     */
    virtual bool IsDefaultConstructible() const = 0;

    /**
     * @brief IsMoveConstructible
     * @return
     */
    virtual bool IsMoveConstructible() const = 0;

    /**
     * @brief IsCopyConstructible
     * @return
     */
    virtual bool IsCopyConstructible() const = 0;

    /**
     * @brief IsMoveAssignable
     * @return
     */
    virtual bool IsMoveAssignable() const = 0;

    /**
     * @brief IsCopyAssignable
     * @return
     */
    virtual bool IsCopyAssignable() const = 0;

    /**
     * @brief IsDestructible
     * @return
     */
    virtual bool IsDestructible() const = 0;


public:

    /**
     * @brief NewInstance
     * @return
     */
    virtual AObject* NewInstance() = 0;


};

#endif // ACLASS_H

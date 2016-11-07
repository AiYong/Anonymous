#pragma once

#include <initializer_list>

#include <Anonymous/AObject.h>
#include <Anonymous/AReturnValue.h>

namespace Anonymous {

class AString;
class AClass;
class AParameter;
class AAnnotation;


class AMethod : public AObject
{
    A_OBJECT()
public:

    typedef AParameter*  AParameterIterator;
    typedef AAnnotation* AAnnotationIterator;

public:

    /**
     * @brief 析构函数
     */
    virtual ~AMethod()
    {
    }

public:

    /**
     * @brief 返回方法名称
     * @return
     */
    AString const& GetName() const = 0;

    /**
     * @brief 返回方法签名
     * @return
     */
    AString const& GetSignatrue() const = 0;

    /**
     * @brief 返回返回值类型
     * @return
     */
    virtual AClass* GetReturnType() const = 0;

    /**
     * @brief GetParameterCount
     * @return
     */
    virtual size GetParameterCount() const = 0;

    /**
     * @brief ParameterBegin
     * @return
     */
    virtual AParameterIterator GetParameterBegin() const = 0;

    /**
     * @brief ParameterEnd
     * @return
     */
    virtual AParameterIterator GetParameterEnd() const = 0;


public:

    /**
     * @brief 测试是否被指定注解类注解
     */
    virtual bool Contain(AClass *pAnnotationClass) = 0;

    /**
     * @brief GetAnnotation
     * @return
     */
    virtual size GetAnnotationCount() const = 0;

    /**
     * @brief GetAnnotation
     * @param pAnnotationClass
     * @return
     */
    virtual AAnnotation* GetAnnotation(AClass *pAnnotationClass) const = 0;

    /**
     * @brief AnnotationBegin
     * @return
     */
    virtual AAnnotationIterator GetAnnotationBegin() const = 0;

    /**
     * @brief AnnotationEnd
     * @return
     */
    virtual AAnnotationIterator GetAnnotationEnd() const = 0;

public:

    /**
     * @brief Call
     * @param Object
     * @param ParamList
     * @return
     */
    virtual AReturnValue Call(AObject *Object,std::initializer_list<AObject*> ParamList) = 0;

public:

    /**
     * @brief 返回方法的访问属性
     * @return
     */
    virtual int GetModifier() const = 0;

};

}

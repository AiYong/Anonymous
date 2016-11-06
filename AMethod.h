#ifndef AMETHOD_H
#define AMETHOD_H

#include <initializer_list>

#include "AObject.h"
#include "AModifier.h"
#include "AReturnValue.h"

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
     * @brief ~Method
     */
    virtual ~Method()
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
    virtual size_t GetParameterCount() const = 0;

    /**
     * @brief ParameterBegin
     * @return
     */
    virtual AParameterIterator ParameterBegin() const = 0;

    /**
     * @brief ParameterEnd
     * @return
     */
    virtual AParameterIterator ParameterEnd() const = 0;


public:

    /**
     * @brief GetAnnotation
     * @return
     */
    virtual size_t GetAnnotationCount() const = 0;

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
    virtual AAnnotationIterator AnnotationBegin() const = 0;

    /**
     * @brief AnnotationEnd
     * @return
     */
    virtual AAnnotationIterator AnnotationEnd() const = 0;

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

#endif // AMETHOD_H

#ifndef AFIELD_H
#define AFIELD_H

#include "AObject.h"
#include "AString.h"
#include "AModifier.h"


class AClass;
class AAnnotation;


/**
 * @brief The AField class
 */
class AField : public AObject
{
    A_OBJECT()
public:

    typedef AAnnotation* AnnotationIterator;

    /**
     * @brief 字段类型。
     */
    enum FieldType
    {
        ftVariable,
        ftPointer,
        ftReference,
    };

    /**
     * @brief 析构函数。
     */
    virtual ~AField()
    {
    }

public:

    /**
     * @brief 返回字段的类类型。
     * @return
     */
    virtual AClass* GetType() = 0;

    /**
     * @brief 返回字段的名称。
     * @return
     */
    virtual AString const& GetName() const = 0;

    /**
     * @brief 返回字段的类型。
     * @return
     */
    virtual FieldType GetFieldType() const = 0;

    /**
     * @brief 返回字段修饰类型。
     * @return
     */
    virtual int GetModifiers() const = 0;


public:

    /**
     * @brief 返回字段注解数量。
     * @return
     */
    virtual size_t GetAnnotationCount() = 0;

    /**
     * @brief 返回指定类类型的注解。
     * @param pAnnotationClass  注解类型。
     * @return 指定类型注解存在则返回注解，否则返回nullptr。
     */
    virtual AAnnotation* GetAnnotation(AClass *pAnnotationClass) = 0;

    /**
     * @brief 返回注解开始迭代器
     * @return
     */
    virtual AnnotationIterator AnnotationBegin() = 0;

    /**
     * @brief 返回注解结束迭代器
     * @return
     */
    virtual AnnotationIterator AnnotationEnd() = 0;


public:

    /**
     * @brief 测试字段是否可修改
     * @return
     */
    virtual bool CanModifiy() = 0;

    /**
     * @brief 返回指定对象的字段
     * @param pObj
     * @return
     */
    virtual AObject* GetValue(AObject* pObj) = 0;

    /**
     * @brief 设置指定对象的字段
     * @param pTarget
     * @param pValue
     */
    virtual void SetValue(AObject* pTarget,AObject *pValue) = 0;

};

#endif // AFIELD_H

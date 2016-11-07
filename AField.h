#pragma once

#include <Anonymouse/AObject.h>

namespace Anonymous {

class AClass;
class AString;
class AAnnotation;

/**
 * @brief Field类
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
    virtual i32 GetModifiers() const = 0;


public:

    /**
     * @brief 测试类的字段是否被指定注解类注解
     */
    virtual bool Contain(AClass *pAnnotationClass) = 0;

    /**
     * @brief 返回字段注解数量。
     * @return
     */
    virtual size GetAnnotationCount() = 0;

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
    virtual AnnotationIterator GetAnnotationBegin() = 0;

    /**
     * @brief 返回注解结束迭代器
     * @return
     */
    virtual AnnotationIterator GetAnnotationEnd() = 0;


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


template<typename ValueT>
bool GetFieldValue(AObject *Object,AField *Field,ValueT &Value)
{
    return false;
}

template<typename ObjectT,ValueT>
bool SetFieldValue(ObjectT *Object，AField *Field ,ValueT const& Value )
{
    return false;
}

}

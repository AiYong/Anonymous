#pragma once

#include <Anonymous/AObject.h>
#include <Anonymous/AString.h>

namespace Anonymous {

class AClass;

/**
 * @brief The AParameter class
 */
class AParameter : public AObject
{
    A_OBJECT()
public:

    /**
     * @brief 构造函数
     * @param Name
     * @param Class
     * @param Modifiers
     */
    AParameter(AString const& Name,AClass *Class,i32 Modifiers);

    /**
     * @brief ~AParameter
     */
    ~AParameter();

public:

    /**
     * @brief GetName
     * @return
     */
    AString const& GetName() const;

    /**
     * @brief GetType
     * @return
     */
     AClass* GetType() const;

    /**
     * @brief GetModifiers
     * @return
     */
    i32 GetModifiers() const;

private：

    AString Name;
    AClass  *Class;
    i32     Modifiers;
};

}

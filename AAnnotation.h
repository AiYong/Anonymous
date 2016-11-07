#pragma once

#include <Anonymous/AObject.h>
#include <Anonymous/AString.h>

namespace Anonymous {

/**
* @brief 注解类的基类
* 所有注解类都要继承于该类
*/
class AAnnotation : public AObject
{
    A_ANNOTATION()
public:

    virtual ~AAnnotation()
    {
    }

public:

    virtual AString const& GetName() const = 0;
};

}


#pragma once

#include <Anonymous/AObject.h>
#include <Anonymous/AString.h>

namespace Anonymous {

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


#pragma once

#include <Anonymous/AObject.h>

class AString;

class ABoolean : public AObject 
{
    A_OBJECT()
public:

    static bool Parse(char8 const* BoolString);

    static bool Parse(char16 const* BoolString);

    static bool Parse(char32 const* BoolString);

    static bool Parse(AString const& BoolString);

public:

    ABoolean(bool Value);

    virtual ~ABoolean();

public:

    bool GetValue() const;

    void SetValue(bool Value);

    AString ToString() const;

private:

    bool Value;
    
}
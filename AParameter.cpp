#include <Anonymous/AParameter.h>

namespace Anonymous {


AParameter::AParameter(AString const& Name,AClass *Class,i32 Modifiers)
    :Name(Name),Class(Class),Modifiers(Modifies)
{
}

AParameter::~AParameter()
{
}

AString const& AParameter::GetName() const
{
    return this->Name;
}

AClass* AParameter::GetType() const 
{
    return this->Class;
}

i32 AParameter::GetModifiers() const
{
    return this->Modifiers;
}

}

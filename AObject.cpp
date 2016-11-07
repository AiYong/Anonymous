#include "AObject.h"

namespace Anonymous {

AObject::AObject()
{
}

AObject::AObject(AObject const&)
{
}


AObject::AObject(AObject&&)
{
}


AObject& AObject::operator=(AObject const&)
{
    return (*this);
}


AObject& AObject::operator=(AObject&&)
{
    return (*this);
}

AObject::~AObject()
{
}


}


#ifndef ADESTRUCTOR_H
#define ADESTRUCTOR_H

#include "AObject.h"

class ADestructor : public AObject
{
    A_OBJECT()
public:

    /**
     * @brief ADestructor
     */
    ~ADestructor()
    {
    }

public:

    /**
     * @brief Call
     * @param Object
     */
    virtual void Call(AObject *Object) = 0;

};

#endif // ADESTRUCTOR_H

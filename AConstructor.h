#ifndef ACONSTRUCTOR_H
#define ACONSTRUCTOR_H

#include <initializer_list>

#include "AObject.h"

class AConstructor : public AObject
{
    A_OBJECT()
public:

    ~AConstructor()
    {
    }

public:

    enum ConstructorType {
        Defualt,
        Copy,
        Move,
        UserDefinition
    };

public:

    /**
     * @brief GetType
     * @return
     */
    virtual ConstructorType GetType() const;

    /**
     * @brief Call
     * @return
     */
    virtual AObject* Call(std::initializer_list<AObject*> lParams) = 0;

};



class ACopyConstructor : public AObject
{
    A_OBJECT()
public:

    ~ACopyConstructor()
    {
    }

public:

    /**
     * @brief Call
     * @param rOjb
     * @return
     */
    virtual AObject* Call(AObject const& rOjb) = 0;
};


class AMoveConstructor : public AObject
{
    A_OBJECT()
public:

    ~AMoveConstructor()
    {
    }

public:

    /**
     * @brief Call
     * @param rObj
     * @return
     */
    virtual AObject* Call(AObject &&rObj) = 0;

};

#endif // ACONSTRUCTOR_H

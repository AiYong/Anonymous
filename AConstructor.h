#pragma once

#include <initializer_list>

#include <Anonymous/AObject.h>

namespace Anonymous {

/**
* @brief 封装类的默认构造函数
*/
class ADefaultConstructor : public AObject
{
    A_OBJECT()
public:

    ~ADefaultConstructor()
    {
    }

public:

    /**
     * @brief Call
     * @return
     */
    virtual AObject* Call() = 0;

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

}

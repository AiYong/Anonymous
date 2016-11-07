#ifndef AREFCOUNT_H
#define AREFCOUNT_H

#include "AObject.h"





class ASharedCountBase
{
public:

    ASharedCountBase():UseCount(1)
    {        
    }

    virtual ~ASharedCountBase()
    {        
    }

public:
    void AddRef()
    {
        
    }
    void Release()
    {
        if(true)
        {
            Dispose();
        }
    }

protected:
    virtual void Dispose() = 0;
private:
    int UseCount;
};

class APSharedCount : public ASharedCountBase
{
public:

}

/**
*
*/
class ASharedCount
{
public:

    template<typename T>
    ASharedCount(T *P);

    template<typename T,typename D>
    ASharedCount(T *p,D d);

    ~ASharedCount();

public:
    int UseCount() const;
private:
    ASharedCountBase *Shared;
};
#endif // AREFCOUNT_H

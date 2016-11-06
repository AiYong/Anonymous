#ifndef AREFCOUNT_H
#define AREFCOUNT_H

#include "AObject.h"


class ASharedCount : public AObject
{
    A_OBJECT()
public:

   void AddRef() const;

   void Release() const;

   int RefCount;
};

#endif // AREFCOUNT_H

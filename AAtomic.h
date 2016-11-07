#pragma once

#include <Anonymous/Atomic/AAtomic.h>

namespace Anonymous {

template<typename T>
class AAtomicOperation;

template<>
class AAtomicOperation<int>
{
public:

    static void Store(int *TargetPtr,int *ValuePtr,int MemoryOrder)
    {

    }

    static void Store(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int Load(int *TargetPtr,int MemoryOrder)
    {

    }

    static void Load(int *TargetPtr,int *RetPtr,int MemoryOrder)
    {

    }
    
    static int Exchange(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static void Exchange(int *TargetPtr,int *ValuePtr,int *RetPtr,int MemoryOrder)
    {

    }

    static bool CompareAndExchange(int *TargetPtr,int *ExpectedPtr,int DesiredValue,bool Weak,int Success,int Failure)
    {
    
    }

    static bool CompareAndExchange(int *TargetPtr,int *ExpectedPtr,int *DesiredValuePtr,bool Weak,int Success,int Failure)
    {

    }

    static int FetchAdd(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int AddFetch(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int FetchSub(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int SubFetch(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int FetchAnd(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int AndFetch(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int FetchOR(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int OrFetch(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int FetchXOR(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int XORFetch(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int FetchNAND(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static int NANDFetch(int *TargetPtr,int Value,int MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};


enum AMemoryOrder
{
    MemoryOrderRelaxed,
    MemoryOrderConsume,
    MemoryOrderAcquire,
    MemoryOrderRelease,
    MemoryOrderAcqRel,
    MemoryOrderSeqCst
};

#define A_OBJECT() 

template<typename T>
class AAtomic;

class AAtomicFlag : public AObject
{
public:
    typedef unsigned char ValueType;
public:


private: 

    ValueType Value;

};


template<typename T>
class AAtomic : public AObject;
{
    A_OBJECT()
public:
    typedef T ValueType;
public:
    AAtomic() = default;

    constexpr AAtomic( Value);

    AAtomic(AAtomic const& Other);

public:

    ValueType operator=(ValueType Value);

    ValueType operator=(ValueType Value) volatile;

    AAtomic& operator=(AAtomic const& Other) = delete;

    AAtomic& operator=(AAtomic const& Other) volatile = delete;

public:

    bool IsLockFree() const noexcept;

    bool IsLockFree() const volatile noexcept;

public:

    void Store(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept;

    void Store(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    ValueType Load(AMemoryOrder MemoryOrder = MemoryOrderSeqCst) const noexcept;

    ValueType Load(AMemoryOrder MemoryOrder = MemoryOrderSeqCst) const volatile noexcept;

public:

    operator ValueType() const noexcept;

    operator ValueType() const volatile noexcept;

public:

    ValueType Exchange(ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept;

    ValueType Exchange(ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Fialure) noexcept;

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Fialure) volatile noexcept;

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept;

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept;

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Fialure) noexcept;

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Fialure) volatile noexcept;

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept;

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    ValueType FetchAdd(ValueType Value,AMemoryOrder = MemoryOrderSeqCst) noexcept;

    ValueType FetchAdd(ValueType Value,AMemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    ValueType FetchSub(ValueType Value,AMemoryOrder = MemoryOrderSeqCst) noexcept;

    ValueType FetchSub(ValueType Value,AMemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    ValueType FetchAnd(ValueType Value,AMemoryOrder = MemoryOrderSeqCst) noexcept;

    ValueType FetchAnd(ValueType Value,AMemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    ValueType FetchOR(ValueType Value,AMemoryOrder = MemoryOrderSeqCst) noexcept;

    ValueType FetchOR(ValueType Value,AMemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    ValueType FetchXOR(ValueType Value,AMemoryOrder = MemoryOrderSeqCst) noexcept;

    ValueType FetchXOR(ValueType Value,AMemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    ValueType operator++() noexcept;
    ValueType operator++() volatile noexcept;;

    ValueType operator++( int ) noexcept;
    ValueType operator++( int ) volatile noexcept;


    ValueType operator--() noexcept;
    ValueType operator--() volatile noexcept;

    ValueType operator--( int ) noexcept;
    ValueType operator--( int ) volatile noexcept;

public:

    ValueType operator+=( ValueType arg ) noexcept;
    ValueType operator+=( ValueType arg ) volatile noexcept;

    ValueType operator-=( ValueType arg );
    ValueType operator-=( ValueType arg ) volatile;

    ValueType operator&=( ValueType arg ) noexcept;
    ValueType operator&=( ValueType arg ) volatile noexcept;

    ValueType operator|=( ValueType arg ) noexcept;
    ValueType operator|=( ValueType arg ) volatile noexcept;

    ValueType operator^=( ValueType arg ) noexcept;
    ValueType operator^=( ValueType arg ) volatile noexcept;

private:

    static constexpr int _assignment_ = sizeof(ValueType) > alignof(ValueType) ? : sizeof(ValueType : alignof(ValueType);
    alignas(_assignment_) ValueType Value;

};



template<typename T>
class AAtomicPointer : public AObject
{
    A_OBJECT()
public:
    typedef T* ValueType;
public:
    AAtomicPointer() = default;

    constexpr AAtomicPointer(ValueType Value);

    AAtomicPointer(AAtomic const& Other);

public:

    ValueType operator=(ValueType Value);

    ValueType operator=(ValueType Value) volatile;

    AAtomic& operator=(AAtomic const& Other) = delete;

    AAtomic& operator=(AAtomic const& Other) volatile = delete;

public:

    bool IsLockFree() const noexcept;

    bool IsLockFree() const volatile noexcept;

public:

    void Store(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept;

    void Store(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    ValueType Load(AMemoryOrder MemoryOrder = MemoryOrderSeqCst) const noexcept;

    ValueType Load(AMemoryOrder MemoryOrder = MemoryOrderSeqCst) const volatile noexcept;

public:

    operator ValueType() const noexcept;

    operator ValueType() const volatile noexcept;

public:

    ValueType Exchange(ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept;

    ValueType Exchange(ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Fialure) noexcept;

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Fialure) volatile noexcept;

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept;

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept;

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Fialure) noexcept;

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Fialure) volatile noexcept;

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept;

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    ValueType FetchAdd(std::ptrdiff_t Value,AMemoryOrder = MemoryOrderSeqCst) noexcept;

    ValueType FetchAdd(std::ptrdiff_t Value,AMemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:

    ValueType FetchSub(std::ptrdiff_t Value,AMemoryOrder = MemoryOrderSeqCst) noexcept;

    ValueType FetchSub(std::ptrdiff_t Value,AMemoryOrder = MemoryOrderSeqCst) volatile noexcept;

public:


    ValueType operator++() noexcept;
    ValueType operator++() volatile noexcept;

    ValueType operator++( int ) noexcept;
    ValueType operator++( int ) volatile noexcept;

    ValueType operator--() noexcept;
    ValueType operator--() volatile noexcept;

    ValueType operator--( int ) noexcept;
    ValueType operator--( int ) volatile noexcept;

public:

    ValueType operator+=( std::ptrdiff_t arg ) noexcept;
    ValueType operator+=( std::ptrdiff_t arg ) volatile noexcept;

    ValueType operator-=( std::ptrdiff_t arg ) noexcept;
    ValueType operator-=( std::ptrdiff_t arg ) volatile noexcept;

private:

    ValueType Value;

};

}
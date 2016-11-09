#pragma once
#include <Anonymous/AObject.h>
#include <Anonymous/Atomic/AAtomicOperation.h>

namespace Anonymous {
namespace Atomic {
namespace Detail{

template<typename T>
class AAtomic : public AObject
{
    A_OBJECT()
private:
    typedef T ValueType;
    typedef AAtomicOperation<ValueType> Operation;
public:

    AAtomic() = default;

    constexpr AAtomic(ValueType Value)
        :Value(Value)
    {  
    }

    AAtomic(AAtomic const& Other) = delete;

public:

    ValueType operator=(ValueType Value)
    {
        Store(Value);
        return Value;
    }

    ValueType operator=(ValueType Value) volatile
    {
        Store(Value);
        return Value;
    }

    AAtomic& operator=(AAtomic const& Other) = delete;

    AAtomic& operator=(AAtomic const& Other) volatile = delete;

public:

    bool IsLockFree() const noexcept
    {
        return Operation::IsLockFree();
    }

    bool IsLockFree() const volatile noexcept
    {
        return Operation::IsLockFree();
    }

public:

    void Store(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept
    {
        Operation::Store(&(this->Value),Value,MemoryOrder);
    }

    void Store(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept
    {
        Operation::Store(&(this->Value),Value,MemoryOrder);
    }

public:

    ValueType Load(AMemoryOrder MemoryOrder = MemoryOrderSeqCst) const noexcept
    {
        return Operation::Load(&(this->Value),MemoryOrder);
    }

    ValueType Load(AMemoryOrder MemoryOrder = MemoryOrderSeqCst) const volatile noexcept
    {
        return Operation::Load(&(this->Value),MemoryOrder);
    }

public:

    operator ValueType() const noexcept
    {
        return Load();
    }

    operator ValueType() const volatile noexcept
    {
        return Load();
    }

public:

    ValueType Exchange(ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept
    {
        return Operation::Exchange(&(this->Value),DesiredValue,MemoryOrder);
    }

    ValueType Exchange(ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept
    {
        return Operation::Exchange(&(this->Value),DesiredValue,MemoryOrder);
    }

public:

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Failure) noexcept
    {
        return Operation::CompareExchangeWeak(&(this->Value),&ExpectedValue,DesiredValue,Success,Failure);
    }

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Failure) volatile noexcept
    {
        return Operation::CompareExchangeWeak(&(this->Value),&ExpectedValue,DesiredValue,Success,Failure);
    }

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept
    {
        return Operation::CompareExchangeWeak(&(this->Value),&ExpectedValue,DesiredValue,MemoryOrder,MemoryOrder);
    }

    bool CompareExchangeWeak(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept
    {
        return Operation::CompareExchangeWeak(&(this->Value),&ExpectedValue,DesiredValue,MemoryOrder,MemoryOrder);
    }

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Failure) noexcept
    {
        return Operation::CompareExchangeStrong(&(this->Value),&ExpectedValue,DesiredValue,Success,Failure);
    }

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder Success,AMemoryOrder Failure) volatile noexcept
    {
        return Operation::CompareExchangeStrong(&(this->Value),&ExpectedValue,DesiredValue,Success,Failure);
    }

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept
    {
        return Operation::CompareExchangeStrong(&(this->Value),&ExpectedValue,DesiredValue,MemoryOrder,MemoryOrder);
    }

    bool CompareExchangeStrong(ValueType& ExpectedValue,ValueType DesiredValue,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept
    {
        return Operation::CompareExchangeStrong(&(this->Value),&ExpectedValue,DesiredValue,MemoryOrder,MemoryOrder);
    }

public:

    ValueType FetchAdd(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept
    {
        return Operation::FetchAdd(&(this->Value),Value,MemoryOrder);
    }

    ValueType FetchAdd(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept
    {
        return Operation::FetchAdd(&(this->Value),Value,MemoryOrder);
    }

public:

    ValueType FetchSub(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept
    {
        return Operation::FetchSub(&(this->Value),Value,MemoryOrder);
    }

    ValueType FetchSub(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept
    {
        return Operation::FetchSub(&(this->Value),Value,MemoryOrder);
    }

public:

    ValueType FetchAnd(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept
    {
        return Operation::FetchAnd(&(this->Value),Value,MemoryOrder);
    }

    ValueType FetchAnd(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept
    {
        return Operation::FetchAnd(&(this->Value),Value,MemoryOrder);
    }

public:

    ValueType FetchOR(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept
    {
        return Operation::FetchOR(&(this->Value),Value,MemoryOrder);
    }

    ValueType FetchOR(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept
    {
        return Operation::FetchOR(&(this->Value),Value,MemoryOrder);
    }

public:

    ValueType FetchXOR(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) noexcept
    {
        return Operation::FetchXOR(&(this->Value),Value,MemoryOrder);
    }

    ValueType FetchXOR(ValueType Value,AMemoryOrder MemoryOrder = MemoryOrderSeqCst) volatile noexcept
    {
        return Operation::FetchXOR(&(this->Value),Value,MemoryOrder);
    }

public:

    ValueType operator++() noexcept
    {
        return FetchAdd(T(1)) + T(1);
    }

    ValueType operator++() volatile noexcept
    {
        return FetchAdd(T(1)) + T(1);
    }

    ValueType operator++( int ) noexcept
    {
        return FetchAdd(T(1));
    }

    ValueType operator++( int ) volatile noexcept
    {
        return FetchAdd(T(1));
    }

    ValueType operator--() noexcept
    {
        return FetchSub(T(1)) - T(1);
    }

    ValueType operator--() volatile noexcept
    {
        return FetchSub(T(1)) - T(1);
    }

    ValueType operator--( int ) noexcept
    {
        return FetchSub(T(1));
    }

    ValueType operator--( int ) volatile noexcept
    {
        return FetchSub(T(1));
    }

public:

    ValueType operator+=( ValueType Value ) noexcept
    {
        return FetchAdd(Value) + Value;
    }

    ValueType operator+=( ValueType Value ) volatile noexcept
    {
        return FetchAdd(Value) + Value;
    }

    ValueType operator-=( ValueType Value )
    {
        return FetchSub(Value) - Value;
    }

    ValueType operator-=( ValueType Value ) volatile
    {
        return FetchSub(Value) - Value;
    }

    ValueType operator&=( ValueType Value ) noexcept
    {
        return FetchAnd(Value) & Value;
    }

    ValueType operator&=( ValueType Value ) volatile noexcept
    {
        return FetchAnd(Value) & Value;
    }

    ValueType operator|=( ValueType Value ) noexcept
    {
        return FetchOR(Value) | Value;
    }

    ValueType operator|=( ValueType Value ) volatile noexcept
    {
        return FetchOR(Value) | Value;
    }

    ValueType operator^=( ValueType Value ) noexcept
    {
        return FetchXOR(Value) ^ Value;
    }

    ValueType operator^=( ValueType Value ) volatile noexcept
    {
        return FetchXOR(Value) ^ Value;
    }

private:

    static constexpr int _assignment_ = sizeof(ValueType) > alignof(ValueType) ? : sizeof(ValueType : alignof(ValueType);
    alignas(_assignment_) ValueType Value;

};


}//namespace Detail
}//namespace Atomic
}//namespace Anonymous
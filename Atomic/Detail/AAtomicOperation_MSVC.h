#pragma once

#include <Anonymous/APlatform.h>
#include <Anonymous/Atomic/Detail/AAtomicOperationFwd.h>

template<>
class AAtomicOperation<i8>
{
public:

    static void Store(i8 *TargetPtr,i8 *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 Load(i8 *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(i8 *TargetPtr,i8 *RetPtr,i32 MemoryOrder)
    {

    }
    
    static i8 Exchange(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static void Exchange(i8 *TargetPtr,i8 *ValuePtr,i8 *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(i8 *TargetPtr,i8 *ExpectedPtr,i8 DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(i8 *TargetPtr,i8 *ExpectedPtr,i8 *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static i8 FetchAdd(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 AddFetch(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 FetchSub(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 SubFetch(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 FetchAnd(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 AndFetch(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 FetchOR(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 ORFetch(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 FetchXOR(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 XORFetch(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 FetchNAND(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static i8 NANDFetch(i8 *TargetPtr,i8 Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};


template<>
class AAtomicOperation<i16>
{
public:

    static void Store(i16 *TargetPtr,i16 *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 Load(i16 *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(i16 *TargetPtr,i16 *RetPtr,i32 MemoryOrder)
    {

    }
    
    static i16 Exchange(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static void Exchange(i16 *TargetPtr,i16 *ValuePtr,i16 *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(i16 *TargetPtr,i16 *ExpectedPtr,i16 DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(i16 *TargetPtr,i16 *ExpectedPtr,i16 *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static i16 FetchAdd(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 AddFetch(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 FetchSub(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 SubFetch(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 FetchAnd(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 AndFetch(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 FetchOR(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 ORFetch(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 FetchXOR(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 XORFetch(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 FetchNAND(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static i16 NANDFetch(i16 *TargetPtr,i16 Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};


template<>
class AAtomicOperation<i32>
{
public:

    static void Store(i32 *TargetPtr,i32 *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 Load(i32 *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(i32 *TargetPtr,i32 *RetPtr,i32 MemoryOrder)
    {

    }
    
    static i32 Exchange(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static void Exchange(i32 *TargetPtr,i32 *ValuePtr,i32 *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(i32 *TargetPtr,i32 *ExpectedPtr,i32 DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(i32 *TargetPtr,i32 *ExpectedPtr,i32 *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static i32 FetchAdd(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 AddFetch(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 FetchSub(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 SubFetch(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 FetchAnd(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 AndFetch(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 FetchOR(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 ORFetch(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 FetchXOR(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 XORFetch(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 FetchNAND(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static i32 NANDFetch(i32 *TargetPtr,i32 Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};

template<>
class AAtomicOperation<i64>
{
public:

    static void Store(i64 *TargetPtr,i64 *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 Load(i64 *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(i64 *TargetPtr,i64 *RetPtr,i32 MemoryOrder)
    {

    }
    
    static i64 Exchange(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static void Exchange(i64 *TargetPtr,i64 *ValuePtr,i64 *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(i64 *TargetPtr,i64 *ExpectedPtr,i64 DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(i64 *TargetPtr,i64 *ExpectedPtr,i64 *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static i64 FetchAdd(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 AddFetch(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 FetchSub(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 SubFetch(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 FetchAnd(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 AndFetch(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 FetchOR(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 ORFetch(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 FetchXOR(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 XORFetch(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 FetchNAND(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static i64 NANDFetch(i64 *TargetPtr,i64 Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};

template<>
class AAtomicOperation<u8>
{
public:

    static void Store(u8 *TargetPtr,u8 *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 Load(u8 *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(u8 *TargetPtr,u8 *RetPtr,i32 MemoryOrder)
    {

    }
    
    static u8 Exchange(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static void Exchange(u8 *TargetPtr,u8 *ValuePtr,u8 *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(u8 *TargetPtr,u8 *ExpectedPtr,u8 DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(u8 *TargetPtr,u8 *ExpectedPtr,u8 *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static u8 FetchAdd(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 AddFetch(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 FetchSub(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 SubFetch(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 FetchAnd(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 AndFetch(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 FetchOR(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 ORFetch(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 FetchXOR(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 XORFetch(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 FetchNAND(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static u8 NANDFetch(u8 *TargetPtr,u8 Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};


template<>
class AAtomicOperation<u16>
{
public:

    static void Store(u16 *TargetPtr,u16 *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 Load(u16 *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(u16 *TargetPtr,u16 *RetPtr,i32 MemoryOrder)
    {

    }
    
    static u16 Exchange(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static void Exchange(u16 *TargetPtr,u16 *ValuePtr,u16 *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(u16 *TargetPtr,u16 *ExpectedPtr,u16 DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(u16 *TargetPtr,u16 *ExpectedPtr,u16 *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static u16 FetchAdd(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 AddFetch(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 FetchSub(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 SubFetch(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 FetchAnd(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 AndFetch(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 FetchOR(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 ORFetch(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 FetchXOR(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 XORFetch(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 FetchNAND(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static u16 NANDFetch(u16 *TargetPtr,u16 Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};


template<>
class AAtomicOperation<u32>
{
public:

    static void Store(u32 *TargetPtr,u32 *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 Load(u32 *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(u32 *TargetPtr,u32 *RetPtr,i32 MemoryOrder)
    {

    }
    
    static u32 Exchange(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static void Exchange(u32 *TargetPtr,u32 *ValuePtr,u32 *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(u32 *TargetPtr,u32 *ExpectedPtr,u32 DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(u32 *TargetPtr,u32 *ExpectedPtr,u32 *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static u32 FetchAdd(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 AddFetch(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 FetchSub(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 SubFetch(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 FetchAnd(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 AndFetch(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 FetchOR(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 ORFetch(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 FetchXOR(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 XORFetch(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 FetchNAND(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static u32 NANDFetch(u32 *TargetPtr,u32 Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};


template<>
class AAtomicOperation<u64>
{
public:

    static void Store(u64 *TargetPtr,u64 *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 Load(u64 *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(u64 *TargetPtr,u64 *RetPtr,i32 MemoryOrder)
    {

    }
    
    static u64 Exchange(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static void Exchange(u64 *TargetPtr,u64 *ValuePtr,u64 *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(u64 *TargetPtr,u64 *ExpectedPtr,u64 DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(u64 *TargetPtr,u64 *ExpectedPtr,u64 *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static u64 FetchAdd(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 AddFetch(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 FetchSub(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 SubFetch(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 FetchAnd(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 AndFetch(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 FetchOR(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 ORFetch(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 FetchXOR(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 XORFetch(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 FetchNAND(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static u64 NANDFetch(u64 *TargetPtr,u64 Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};

template<>
class AAtomicOperation<char16>
{
public:

    static void Store(char16 *TargetPtr,char16 *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 Load(char16 *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(char16 *TargetPtr,char16 *RetPtr,i32 MemoryOrder)
    {

    }
    
    static char16 Exchange(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static void Exchange(char16 *TargetPtr,char16 *ValuePtr,char16 *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(char16 *TargetPtr,char16 *ExpectedPtr,char16 DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(char16 *TargetPtr,char16 *ExpectedPtr,char16 *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static char16 FetchAdd(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 AddFetch(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 FetchSub(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 SubFetch(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 FetchAnd(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 AndFetch(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 FetchOR(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 ORFetch(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 FetchXOR(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 XORFetch(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 FetchNAND(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static char16 NANDFetch(char16 *TargetPtr,char16 Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};

template<>
class AAtomicOperation<char32>
{
public:

    static void Store(char32 *TargetPtr,char32 *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 Load(char32 *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(char32 *TargetPtr,char32 *RetPtr,i32 MemoryOrder)
    {

    }
    
    static char32 Exchange(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static void Exchange(char32 *TargetPtr,char32 *ValuePtr,char32 *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(char32 *TargetPtr,char32 *ExpectedPtr,char32 DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(char32 *TargetPtr,char32 *ExpectedPtr,char32 *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static char32 FetchAdd(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 AddFetch(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 FetchSub(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 SubFetch(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 FetchAnd(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 AndFetch(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 FetchOR(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 ORFetch(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 FetchXOR(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 XORFetch(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 FetchNAND(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static char32 NANDFetch(char32 *TargetPtr,char32 Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};

template<>
class AAtomicOperation<wchar>
{
public:

    static void Store(wchar *TargetPtr,wchar *ValuePtr,i32 MemoryOrder)
    {

    }

    static void Store(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar Load(wchar *TargetPtr,i32 MemoryOrder)
    {

    }

    static void Load(wchar *TargetPtr,wchar *RetPtr,i32 MemoryOrder)
    {

    }
    
    static wchar Exchange(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static void Exchange(wchar *TargetPtr,wchar *ValuePtr,wchar *RetPtr,i32 MemoryOrder)
    {

    }

    static bool CompareAndExchange(wchar *TargetPtr,wchar *ExpectedPtr,wchar DesiredValue,bool Weak,i32 Success,i32 Failure)
    {
    
    }

    static bool CompareAndExchange(wchar *TargetPtr,wchar *ExpectedPtr,wchar *DesiredValuePtr,bool Weak,i32 Success,i32 Failure)
    {

    }

    static wchar FetchAdd(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar AddFetch(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar FetchSub(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar SubFetch(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar FetchAnd(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar AndFetch(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar FetchOR(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar ORFetch(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar FetchXOR(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar XORFetch(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar FetchNAND(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static wchar NANDFetch(wchar *TargetPtr,wchar Value,i32 MemoryOrder)
    {

    }

    static bool IsLockFree() 
    {
        
    } 
    
};
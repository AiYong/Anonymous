#ifndef AMODIFIER_H
#define AMODIFIER_H

/**
 * @brief The AModifier enum
 */
enum AModifier
{
    mPublic          = 1,
    mProtected       = 2,
    mPrivate         = 4,
    mFinal           = 8,
    mVirtual         = 16,
    mOverride        = 32,
    mMethodConst     = 64,
    mNoExcept        = 128,
    mInline          = 256,
    mStatic          = 512,
    mVolatile        = 1024,
    mMutable         = 2048,
    mTopLevelConst   = 4096,
    mLowLevelConst   = 8192
};

#endif // AMODIFIER_H

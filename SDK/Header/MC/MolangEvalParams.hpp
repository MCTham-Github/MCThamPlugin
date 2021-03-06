// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct MolangEvalParams {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGEVALPARAMS
public:
    struct MolangEvalParams& operator=(struct MolangEvalParams const&) = delete;
    MolangEvalParams(struct MolangEvalParams const&) = delete;
    MolangEvalParams() = delete;
#endif

public:
    MCAPI class Actor* getActorFromArg(struct MolangScriptArg const&) const;
    MCAPI class Actor* getActorPtrFromPushedArray(unsigned __int64, unsigned __int64, bool&) const;
    MCAPI class Actor* popActor();
    MCAPI float popFloat();
    MCAPI unsigned __int64 popHash();
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(class HashedString const&);
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(enum MolangVariableIndex);
    MCAPI bool popPublicAccessMode();
    MCAPI void popRenderParamsCopyAndPtr();
    MCAPI void pushLoopScope(unsigned __int64, unsigned __int64);
    MCAPI void pushRenderParams(class RenderParams const&);
    MCAPI void pushReturnValue();
    MCAPI void pushValue(float);
    MCAPI class RenderParams& renderParams();
    MCAPI class RenderParams const& renderParams() const;
    MCAPI void restoreAndPopStackState();
    MCAPI ~MolangEvalParams();

protected:

private:
    MCAPI static class Bedrock::Threading::ThreadLocalObject<struct MolangEvalParams, class std::allocator<struct MolangEvalParams> > mThreadLocalMolangEvalParams;

};
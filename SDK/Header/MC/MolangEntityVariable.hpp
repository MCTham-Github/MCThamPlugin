// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct MolangEntityVariable {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGENTITYVARIABLE
public:
    struct MolangEntityVariable& operator=(struct MolangEntityVariable const&) = delete;
    MolangEntityVariable(struct MolangEntityVariable const&) = delete;
    MolangEntityVariable() = delete;
#endif

public:
    MCAPI MolangEntityVariable(class HashedString const&);
    MCAPI ~MolangEntityVariable();

protected:

private:

};
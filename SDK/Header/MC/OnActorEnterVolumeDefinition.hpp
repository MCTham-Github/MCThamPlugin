// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct OnActorEnterVolumeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONACTORENTERVOLUMEDEFINITION
public:
    struct OnActorEnterVolumeDefinition& operator=(struct OnActorEnterVolumeDefinition const&) = delete;
    OnActorEnterVolumeDefinition(struct OnActorEnterVolumeDefinition const&) = delete;
    OnActorEnterVolumeDefinition() = delete;
#endif

public:
    MCAPI void initialize(class EntityContext&, class OnActorEnterVolumeComponent&) const;

protected:

private:

};
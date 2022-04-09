// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PartiallyExposedBlobFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTIALLYEXPOSEDBLOBFEATURE
public:
    class PartiallyExposedBlobFeature& operator=(class PartiallyExposedBlobFeature const&) = delete;
    PartiallyExposedBlobFeature(class PartiallyExposedBlobFeature const&) = delete;
    PartiallyExposedBlobFeature() = delete;
#endif

public:
    /*0*/ virtual ~PartiallyExposedBlobFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

protected:

private:
    MCAPI static bool isWaterOrAir(class IBlockWorldGenAPI const&, class BlockPos const&);

};
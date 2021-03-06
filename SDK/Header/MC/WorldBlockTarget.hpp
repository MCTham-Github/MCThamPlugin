// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDBLOCKTARGET
public:
    class WorldBlockTarget& operator=(class WorldBlockTarget const&) = delete;
    WorldBlockTarget(class WorldBlockTarget const&) = delete;
    WorldBlockTarget() = delete;
#endif

public:
    /*0*/ virtual ~WorldBlockTarget();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual class LevelChunk* getChunk(class ChunkPos const&);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual class Block const& getExtraBlock(class BlockPos const&) const;
    /*6*/ virtual bool hasBiomeTag(unsigned __int64, class BlockPos const&) const;
    /*7*/ virtual bool setBlock(class BlockPos const&, class Block const&, int);
    /*8*/ virtual bool setBlockSimple(class BlockPos const&, class Block const&);
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual bool placeStructure(class BlockPos const&, class StructureTemplate&, class StructureSettings&);
    /*11*/ virtual bool mayPlace(class BlockPos const&, class Block const&) const;
    /*12*/ virtual bool canSurvive(class BlockPos const&, class Block const&) const;
    /*13*/ virtual short getMaxHeight() const;
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&) const;
    /*16*/ virtual short getHeightmap(int, int);
    /*17*/ virtual bool isLegacyLevel();
    /*18*/ virtual class Biome const* getBiome(class BlockPos const&) const;
    /*19*/ virtual bool isInBounds(class Pos const&) const;
    /*20*/ virtual short getLocalWaterLevel(class BlockPos const&) const;
    /*21*/ virtual class LevelData const& getLevelData() const;
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void disableBlockSimple();
    /*
    inline bool apply() const{
        bool (WorldBlockTarget::*rv)() const;
        *((void**)&rv) = dlsym("?apply@WorldBlockTarget@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canGetChunk() const{
        bool (WorldBlockTarget::*rv)() const;
        *((void**)&rv) = dlsym("?canGetChunk@WorldBlockTarget@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~WorldBlockTarget(){
         (WorldBlockTarget::*rv)();
        *((void**)&rv) = dlsym("??1WorldBlockTarget@@UEAA@XZ");
        return (this->*rv)();
    }
    inline struct WorldGenContext const& getContext(){
        struct WorldGenContext const& (WorldBlockTarget::*rv)();
        *((void**)&rv) = dlsym("?getContext@WorldBlockTarget@@UEAAAEBUWorldGenContext@@XZ");
        return (this->*rv)();
    }
    inline short getMinHeight() const{
        short (WorldBlockTarget::*rv)() const;
        *((void**)&rv) = dlsym("?getMinHeight@WorldBlockTarget@@UEBAFXZ");
        return (this->*rv)();
    }
    inline class Block const& getBlockNoBoundsCheck(class BlockPos const& a0) const{
        class Block const& (WorldBlockTarget::*rv)(class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getBlockNoBoundsCheck@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline class Block const& getBlock(class BlockPos const& a0) const{
        class Block const& (WorldBlockTarget::*rv)(class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getBlock@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    */
    MCAPI WorldBlockTarget(class BlockSource&, struct WorldGenContext const&);

protected:

private:

};
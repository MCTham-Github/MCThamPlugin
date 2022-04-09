// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace BiomeDecorationSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI void consolidateDecorationFeatures(class BiomeRegistry&);
    MCAPI void decorate(class LevelChunk&, class BlockSource&, class Random&, std::vector<class Biome const* >&, std::string const&, class IPreliminarySurfaceProvider const&);
    MCAPI bool decorateBiome(class LevelChunk&, class BlockSource&, class Random&, class gsl::span<struct BiomeDecorationFeature, -1>, std::string const&, class Biome const*, class IPreliminarySurfaceProvider const&);
    MCAPI void decorateLargeFeature(class Biome&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&, std::string const&);
    MCAPI bool decorateLargeFeature(class LevelChunk&, class BlockVolumeTarget&, class Random&, class gsl::span<struct BiomeDecorationFeature, -1>, class ChunkPos const&, std::string const&);

};
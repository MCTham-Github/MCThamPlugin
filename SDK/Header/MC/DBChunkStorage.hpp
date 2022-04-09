// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"
#include "ConsoleChunkBlender.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DBChunkStorage : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBCHUNKSTORAGE
public:
    class DBChunkStorage& operator=(class DBChunkStorage const&) = delete;
    DBChunkStorage(class DBChunkStorage const&) = delete;
    DBChunkStorage() = delete;
#endif

public:
    /*0*/ virtual ~DBChunkStorage();
    /*1*/ virtual void shutdown();
    /*2*/ virtual bool isShutdownDone();
    /*3*/ virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);
    /*4*/ virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);
    /*5*/ virtual bool isChunkKnown(class ChunkPos const&);
    /*8*/ virtual bool postProcess(class ChunkViewSource&);
    /*9*/ virtual void checkAndReplaceChunk(class ChunkViewSource&, class LevelChunk&);
    /*10*/ virtual void loadChunk(class LevelChunk&, bool);
    /*12*/ virtual bool saveLiveChunk(class LevelChunk&);
    /*13*/ virtual void hintDiscardBatchBegin();
    /*14*/ virtual void hintDiscardBatchEnd();
    /*15*/ virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /*17*/ virtual void flushPendingWrites();
    /*18*/ virtual bool isWithinWorldLimit(class ChunkPos const&) const;
    /*21*/ virtual void clearDeletedEntities();
    /*23*/ virtual class LevelChunkBlendingAttenuator getHeightAttenuatorForLevelChunk(class ChunkPos const&, class BiomeRegistry const&);
    MCAPI DBChunkStorage(std::unique_ptr<class ChunkSource>, class DBStorage&, class Scheduler&);
    MCAPI static enum ConsoleChunkBlender::BlenderMode _getBlenderMode(class LevelChunk const&, class Experiments const&);

protected:

private:
    MCAPI bool _checkSubChunksUseAbsoluteIndices(class DBChunkStorageKey, class LevelChunk const&, bool&) const;
    MCAPI bool _hasChunk(class DBChunkStorageKey const&);
    MCAPI bool _hasChunkUncached(class DBChunkStorageKey const&);
    MCAPI void _loadAndBlendFromDB(class LevelChunk&, class LevelChunk&, class ChunkViewSource&);
    MCAPI bool _loadChunkFromDB(class LevelChunk&, class LevelChunk&, class ChunkViewSource&);
    MCAPI void _serializeChunk(class LevelChunk&, class LevelStorageWriteBatch&, bool);
    MCAPI void _writeBatch();
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class LevelStorageWriteBatch, class std::allocator<class LevelStorageWriteBatch> > threadBatch;
    MCAPI static class Bedrock::Threading::ThreadLocalObject<std::string, class std::allocator<std::string > > threadBuffer;

};
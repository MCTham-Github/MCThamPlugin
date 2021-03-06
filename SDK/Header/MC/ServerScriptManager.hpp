// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ServerScriptManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSCRIPTMANAGER
public:
    class ServerScriptManager& operator=(class ServerScriptManager const&) = delete;
    ServerScriptManager(class ServerScriptManager const&) = delete;
    ServerScriptManager() = delete;
#endif

public:
    /*0*/ virtual ~ServerScriptManager();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual enum EventResult onServerUpdateStart(class ServerInstance&);
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual enum EventResult onServerThreadStarted(class ServerInstance&);
    /*10*/ virtual enum EventResult onServerThreadStopped(class ServerInstance&);
    /*
    inline enum EventResult onServerLevelInitialized(class ServerInstance& a0, class Level& a1){
        enum EventResult (ServerScriptManager::*rv)(class ServerInstance&, class Level&);
        *((void**)&rv) = dlsym("?onServerLevelInitialized@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@AEAVLevel@@@Z");
        return (this->*rv)(std::forward<class ServerInstance&>(a0), std::forward<class Level&>(a1));
    }
    inline  ~ServerScriptManager(){
         (ServerScriptManager::*rv)();
        *((void**)&rv) = dlsym("??1ServerScriptManager@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ServerScriptManager(class std::optional<struct ScriptSettings>&&);
    MCAPI void onMainThreadStartLeaveGame();

protected:

private:
    MCAPI void _registerEventHandlers(class Level&) const;
    MCAPI void _unregisterEventHandlers(class Level&) const;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptLevelTickingAreasComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTLEVELTICKINGAREASCOMPONENT
public:
    class ScriptLevelTickingAreasComponent& operator=(class ScriptLevelTickingAreasComponent const&) = delete;
    ScriptLevelTickingAreasComponent(class ScriptLevelTickingAreasComponent const&) = delete;
    ScriptLevelTickingAreasComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptLevelTickingAreasComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, class ScriptApi::ScriptObjectHandle&) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, bool&) const;
    /*
    inline bool applyComponentTo(class ScriptApi::ScriptVersionInfo const& a0, class ScriptEngine& a1, class ScriptServerContext& a2, class Level& a3, class ScriptApi::ScriptObjectHandle const& a4) const{
        bool (ScriptLevelTickingAreasComponent::*rv)(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, class ScriptApi::ScriptObjectHandle const&) const;
        *((void**)&rv) = dlsym("?applyComponentTo@ScriptLevelTickingAreasComponent@@UEBA_NAEBVScriptVersionInfo@ScriptApi@@AEAVScriptEngine@@AEAVScriptServerContext@@AEAVLevel@@AEBVScriptObjectHandle@3@@Z");
        return (this->*rv)(std::forward<class ScriptApi::ScriptVersionInfo const&>(a0), std::forward<class ScriptEngine&>(a1), std::forward<class ScriptServerContext&>(a2), std::forward<class Level&>(a3), std::forward<class ScriptApi::ScriptObjectHandle const&>(a4));
    }
    inline bool hasComponent(class ScriptApi::ScriptVersionInfo const& a0, class ScriptEngine& a1, class ScriptServerContext& a2, class Actor& a3, bool& a4) const{
        bool (ScriptLevelTickingAreasComponent::*rv)(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, bool&) const;
        *((void**)&rv) = dlsym("?hasComponent@ScriptLevelTickingAreasComponent@@UEBA_NAEBVScriptVersionInfo@ScriptApi@@AEAVScriptEngine@@AEAVScriptServerContext@@AEAVActor@@AEA_N@Z");
        return (this->*rv)(std::forward<class ScriptApi::ScriptVersionInfo const&>(a0), std::forward<class ScriptEngine&>(a1), std::forward<class ScriptServerContext&>(a2), std::forward<class Actor&>(a3), std::forward<bool&>(a4));
    }
    */

protected:

private:
    MCAPI static class HashedString const mHash;

};
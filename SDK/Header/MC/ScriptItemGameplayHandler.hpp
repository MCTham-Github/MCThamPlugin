// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptItemGameplayHandler {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMGAMEPLAYHANDLER
public:
    class ScriptItemGameplayHandler& operator=(class ScriptItemGameplayHandler const&) = delete;
    ScriptItemGameplayHandler(class ScriptItemGameplayHandler const&) = delete;
    ScriptItemGameplayHandler() = delete;
#endif

public:
    /*0*/ virtual ~ScriptItemGameplayHandler();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ItemDefinitionEventTriggeredEvent&);
    /*4*/ virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ItemUseOnEvent&);
    /*5*/ virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ItemUseEvent&);

protected:

private:
    MCAPI bool _handleItemDefinitionEventTriggered(struct ItemDefinitionEventTriggeredEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>);
    MCAPI bool _handleItemUseEvent(struct ItemUseEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>);
    MCAPI bool _handleItemUseOnEvent(struct ItemUseOnEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>);

};
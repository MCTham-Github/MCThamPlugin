// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptMovementSkipComponentFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMOVEMENTSKIPCOMPONENTFACTORY
public:
    class ScriptMovementSkipComponentFactory& operator=(class ScriptMovementSkipComponentFactory const&) = delete;
    ScriptMovementSkipComponentFactory(class ScriptMovementSkipComponentFactory const&) = delete;
    ScriptMovementSkipComponentFactory() = delete;
#endif

public:
    /*0*/ virtual ~ScriptMovementSkipComponentFactory();
    /*1*/ virtual class Scripting::StrongTypedObjectHandle<class ScriptActorComponent> createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    /*2*/ virtual bool hasComponent(class WeakEntityRef) const;

protected:

private:

};
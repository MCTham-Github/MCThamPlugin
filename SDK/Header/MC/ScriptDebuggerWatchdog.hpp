// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptDebuggerWatchdog {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGERWATCHDOG
public:
    class ScriptDebuggerWatchdog& operator=(class ScriptDebuggerWatchdog const&) = delete;
    ScriptDebuggerWatchdog(class ScriptDebuggerWatchdog const&) = delete;
    ScriptDebuggerWatchdog() = delete;
#endif

public:
    /*0*/ virtual ~ScriptDebuggerWatchdog();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void startListenTimeout();
    /*3*/ virtual bool listenTimeoutExpired() const;
    /*
    inline bool requireClose() const{
        bool (ScriptDebuggerWatchdog::*rv)() const;
        *((void**)&rv) = dlsym("?requireClose@ScriptDebuggerWatchdog@@UEBA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};
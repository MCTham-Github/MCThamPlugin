// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EnchantingInputContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTINGINPUTCONTAINERVALIDATION
public:
    class EnchantingInputContainerValidation& operator=(class EnchantingInputContainerValidation const&) = delete;
    EnchantingInputContainerValidation(class EnchantingInputContainerValidation const&) = delete;
    EnchantingInputContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~EnchantingInputContainerValidation();
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual bool isItemAllowedToAdd(class ItemStack const&) const;
    /*5*/ virtual void __unk_vfn_5();
    /*8*/ virtual int getContainerOffset(class ContainerScreenContext const&) const;
    /*
    inline int getAvailableSetCount(int a0, class ItemStackBase const& a1) const{
        int (EnchantingInputContainerValidation::*rv)(int, class ItemStackBase const&) const;
        *((void**)&rv) = dlsym("?getAvailableSetCount@EnchantingInputContainerValidation@@UEBAHHAEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStackBase const&>(a1));
    }
    */

protected:

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BiomeRegistry {

#define AFTER_EXTRA
// Add Member There
public:
struct BiomeParent {
    BiomeParent() = delete;
    BiomeParent(BiomeParent const&) = delete;
    BiomeParent(BiomeParent const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEREGISTRY
public:
    class BiomeRegistry& operator=(class BiomeRegistry const&) = delete;
    BiomeRegistry(class BiomeRegistry const&) = delete;
#endif

public:
    /*0*/ virtual ~BiomeRegistry();
    /*
    inline class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const{
        class StackRefResultT<struct EntityRegistryConstRefTraits> (BiomeRegistry::*rv)() const;
        *((void**)&rv) = dlsym("?getEntityRegistry@BiomeRegistry@@UEBA?AV?$StackRefResultT@UEntityRegistryConstRefTraits@@@@XZ");
        return (this->*rv)();
    }
    inline class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry(){
        class StackRefResultT<struct EntityRegistryRefTraits> (BiomeRegistry::*rv)();
        *((void**)&rv) = dlsym("?getEntityRegistry@BiomeRegistry@@UEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI BiomeRegistry();
    MCAPI void forEachBiome(class std::function<void (class Biome& )>) const;
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType> > const& getTagRegistry() const;
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType> >& getTagRegistry();
    MCAPI void initServerFromPacks(class ResourcePackManager&, class IWorldRegistriesProvider&);
    MCAPI bool isRegistrationFinished() const;
    MCAPI class Biome* lookupById(int) const;
    MCAPI class Biome* lookupByName(std::string const&) const;
    MCAPI class Biome& registerBiome(std::string const&);
    MCAPI void registrationFinished();

protected:

private:
    MCAPI bool _addToInheritanceTree(class InheritanceTree<struct BiomeRegistry::BiomeParent>&, std::string const&, class Json::Value&&, class SemVersion const&);
    MCAPI class InheritanceTree<struct BiomeRegistry::BiomeParent> _buildInheritanceTree(class ResourcePackManager&);
    MCAPI void _initTagRegistry();
    MCAPI bool _loadSingleBiome(class ResourcePackManager&, class InheritanceTree<struct BiomeRegistry::BiomeParent>&, std::string const&);
    MCAPI void _mergeDataInheritance(class Json::Value&, class SemVersion&, class InheritanceTree<struct BiomeRegistry::BiomeParent>&, struct BiomeRegistry::BiomeParent const&);

};
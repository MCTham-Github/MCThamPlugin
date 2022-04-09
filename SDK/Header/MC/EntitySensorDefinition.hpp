// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EntitySensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSENSORDEFINITION
public:
    class EntitySensorDefinition& operator=(class EntitySensorDefinition const&) = delete;
    EntitySensorDefinition(class EntitySensorDefinition const&) = delete;
#endif

public:
    MCAPI EntitySensorDefinition();
    MCAPI void initialize(class EntityContext&, class EntitySensorComponent&);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EntitySensorDefinition> >&);

protected:

private:

};
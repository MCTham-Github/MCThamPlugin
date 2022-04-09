// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "TagMemoryChunk.hpp"

#undef BEFORE_EXTRA

class IntArrayTag : public Tag {

#define AFTER_EXTRA
// Add Member There
    TagMemoryChunk val;

public:
    LIAPI TagMemoryChunk& value();
    LIAPI IntArrayTag& operator=(TagMemoryChunk const& val);
    LIAPI static std::unique_ptr<IntArrayTag> create();
    LIAPI static std::unique_ptr<IntArrayTag> create(TagMemoryChunk const& val);
    LIAPI static std::unique_ptr<IntArrayTag> create(int data[], size_t size);
    LIAPI bool set(TagMemoryChunk const& val);
    LIAPI TagMemoryChunk get();

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTARRAYTAG
public:
    class IntArrayTag& operator=(class IntArrayTag const&) = delete;
    IntArrayTag(class IntArrayTag const&) = delete;
#endif

public:
    /*0*/ virtual ~IntArrayTag();
    /*1*/ virtual void deleteChildren();
    /*2*/ virtual void write(class IDataOutput&) const;
    /*3*/ virtual void load(class IDataInput&);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual enum Tag::Type getId() const;
    /*6*/ virtual bool equals(class Tag const&) const;
    /*9*/ virtual std::unique_ptr<class Tag> copy() const;
    /*10*/ virtual unsigned __int64 hash() const;
    MCAPI IntArrayTag();

protected:

private:

};
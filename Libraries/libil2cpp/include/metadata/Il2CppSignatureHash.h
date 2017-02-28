#pragma once

#include "utils/dynamic_array.h"

struct Il2CppType;

namespace il2cpp
{
namespace metadata
{

struct Il2CppSignatureHash
{
public:
	size_t operator( ) (const dynamic_array<const Il2CppType*>& signature) const;
	static size_t Hash (const dynamic_array<const Il2CppType*>& signature);
};

} /* namespace metadata */
} /* namespace il2cpp */

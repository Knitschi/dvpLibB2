#pragma once
#include "dvpLibB2VersionMacros.h"

#include <memory>

#include CPF_VERSIONED_INCLUDE(dvpLibC, ValueType.h)
#include CPF_VERSIONED_INCLUDE(dvpLibC, ComplexType.h)

#include CPF_VERSIONED_INCLUDE(dvpLibB2, dvpLibB2_1_0_0_export.h)

CPF_VERSIONED_NAMESPACE(dvpLibB2)
{
	DVPLIBB2_1_0_0_EXPORT void b2UseValueType(dvpLibC::ValueType value);
	DVPLIBB2_1_0_0_EXPORT dvpLibC::ValueType b2ReturnValueType();

	DVPLIBB2_1_0_0_EXPORT void b2UseComplexType(dvpLibC::ComplexType* value);
	DVPLIBB2_1_0_0_EXPORT dvpLibC::ComplexType* b2ReturnComplexType();

	DVPLIBB2_1_0_0_EXPORT void b2SetComplexType(std::unique_ptr<dvpLibC::ComplexType> value);
	DVPLIBB2_1_0_0_EXPORT std::unique_ptr<dvpLibC::ComplexType> b2CreateComplexType();
}

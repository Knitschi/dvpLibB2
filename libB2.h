#pragma once

#include <memory>

#include <dvpLibC_1_0_0/ValueType.h>
#include <dvpLibC_1_0_0/ComplexType.h>

#include <dvpLibB2_1_0_0/dvpLibB2_export.h>

namespace dvpLibB2_1_0_0
{
	DVPLIBB2_EXPORT void b2UseValueType(dvpLibC_1_0_0::ValueType value);
	DVPLIBB2_EXPORT dvpLibC_1_0_0::ValueType b2ReturnValueType();

	DVPLIBB2_EXPORT void b2UseComplexType(dvpLibC_1_0_0::ComplexType* value);
	DVPLIBB2_EXPORT dvpLibC_1_0_0::ComplexType* b2ReturnComplexType();

	DVPLIBB2_EXPORT void b2SetComplexType(std::unique_ptr<dvpLibC_1_0_0::ComplexType> value);
	DVPLIBB2_EXPORT std::unique_ptr<dvpLibC_1_0_0::ComplexType> b2CreateComplexType();
}

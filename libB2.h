#pragma once

#include <memory>


#undef dvpLibCVer
#define dvpLibCVer dvpLibC_1_1_0
#include CPF_VERSIONED_INCLUDE(dvpLibCVer, ValueType.h)
#include CPF_VERSIONED_INCLUDE(dvpLibCVer, ComplexType.h)

#undef dvpLibB2Ver
#define dvpLibB2Ver dvpLibB2_1_0_0
#include CPF_VERSIONED_INCLUDE(dvpLibB2Ver, dvpLibB2_1_0_0_export.h)

CPF_VERSIONED_NAMESPACE(dvpLibB2Ver)
{
	DVPLIBB2_1_0_0_EXPORT void b2UseValueType(dvpLibC_1_1_0::ValueType value);
	DVPLIBB2_1_0_0_EXPORT dvpLibC_1_1_0::ValueType b2ReturnValueType();

	DVPLIBB2_1_0_0_EXPORT void b2UseComplexType(dvpLibC_1_1_0::ComplexType* value);
	DVPLIBB2_1_0_0_EXPORT dvpLibC_1_1_0::ComplexType* b2ReturnComplexType();

	DVPLIBB2_1_0_0_EXPORT void b2SetComplexType(std::unique_ptr<dvpLibC_1_1_0::ComplexType> value);
	DVPLIBB2_1_0_0_EXPORT std::unique_ptr<dvpLibC_1_1_0::ComplexType> b2CreateComplexType();
}

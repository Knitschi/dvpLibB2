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
	DVPLIBB2_1_0_0_EXPORT void b2UseValueType(dvpLibCVer::ValueType value);
	DVPLIBB2_1_0_0_EXPORT dvpLibCVer::ValueType b2ReturnValueType();

	DVPLIBB2_1_0_0_EXPORT void b2UseComplexType(dvpLibCVer::ComplexType* value);
	DVPLIBB2_1_0_0_EXPORT dvpLibCVer::ComplexType* b2ReturnComplexType();

	DVPLIBB2_1_0_0_EXPORT void b2SetComplexType(std::unique_ptr<dvpLibCVer::ComplexType> value);
	DVPLIBB2_1_0_0_EXPORT std::unique_ptr<dvpLibCVer::ComplexType> b2CreateComplexType();
}

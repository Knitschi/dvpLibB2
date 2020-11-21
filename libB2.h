#pragma once

#include <memory>

#include <dvpLibC/ValueType.h>
#include <dvpLibC/ComplexType.h>

#include <dvpLibB2/dvpLibB2_export.h>

namespace dvpLibB2
{
	DVPLIBB2_EXPORT void b2UseValueType(dvpLibC::ValueType value);
	DVPLIBB2_EXPORT dvpLibC::ValueType b2ReturnValueType();

	DVPLIBB2_EXPORT void b2UseComplexType(dvpLibC::ComplexType* value);
	DVPLIBB2_EXPORT dvpLibC::ComplexType* b2ReturnComplexType();

	DVPLIBB2_EXPORT void b2SetComplexType(std::unique_ptr<dvpLibC::ComplexType> value);
	DVPLIBB2_EXPORT std::unique_ptr<dvpLibC::ComplexType> b2CreateComplexType();
}

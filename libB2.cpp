
#define dvpLibB2Ver dvpLibB2_1_0_0
#include CPF_VERSIONED_INCLUDE(dvpLibB2Ver, libB2.h)

#include <iostream>

CPF_VERSIONED_NAMESPACE(dvpLibB2Ver)
{

	void b2UseValueType(dvpLibC_1_1_0::ValueType value)
	{
		std::cout << "Called dpvLibB2::b2UseValueType() with argument " << value.foo << value.bar << "\n";
	}

	dvpLibC_1_1_0::ValueType b2ReturnValueType()
	{
		return dvpLibC_1_1_0::ValueType{ 3, 4 };
	}

	void b2UseComplexType(dvpLibC_1_1_0::ComplexType* value)
	{
		std::cout << "Called dpvLibB2::b2UseComplexType() with argument " << value->getFoo() << "\n";
	}

	std::unique_ptr<dvpLibC_1_1_0::ComplexType> globalComplexType = nullptr;

	dvpLibC_1_1_0::ComplexType* b2ReturnComplexType()
	{
		if (!globalComplexType)
		{
			globalComplexType = std::make_unique<dvpLibC_1_1_0::ComplexType>();
		}
		return globalComplexType.get();
	}

	void b2SetComplexType(std::unique_ptr<dvpLibC_1_1_0::ComplexType> value)
	{
		globalComplexType = std::move(value);
	}

	std::unique_ptr<dvpLibC_1_1_0::ComplexType> b2CreateComplexType()
	{
		return std::make_unique<dvpLibC_1_1_0::ComplexType>();
	}

}

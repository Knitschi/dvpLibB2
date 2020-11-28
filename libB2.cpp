
#define dvpLibB2Ver dvpLibB2_1_0_0
#include CPF_VERSIONED_INCLUDE(dvpLibB2Ver, libB2.h)

#include <iostream>

CPF_VERSIONED_NAMESPACE(dvpLibB2Ver)
{

	void b2UseValueType(dvpLibCVer::ValueType value)
	{
		std::cout << "Called dpvLibB2::b2UseValueType() with argument " << value.foo << value.bar << "\n";
	}

	dvpLibCVer::ValueType b2ReturnValueType()
	{
		return dvpLibCVer::ValueType{ 3, 4 };
	}

	void b2UseComplexType(dvpLibCVer::ComplexType* value)
	{
		std::cout << "Called dpvLibB2::b2UseComplexType() with argument " << value->getFoo() << "\n";
	}

	std::unique_ptr<dvpLibCVer::ComplexType> globalComplexType = nullptr;

	dvpLibCVer::ComplexType* b2ReturnComplexType()
	{
		if (!globalComplexType)
		{
			globalComplexType = std::make_unique<dvpLibCVer::ComplexType>();
		}
		return globalComplexType.get();
	}

	void b2SetComplexType(std::unique_ptr<dvpLibCVer::ComplexType> value)
	{
		globalComplexType = std::move(value);
	}

	std::unique_ptr<dvpLibCVer::ComplexType> b2CreateComplexType()
	{
		return std::make_unique<dvpLibCVer::ComplexType>();
	}

}

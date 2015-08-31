#include "Attribute.h"

namespace fm {

namespace core {

Attribute::Attribute()
	: fName(),
	  fValue(0.)
{

}

Attribute::Attribute(std::string name, double value)
	: fName(name),
	  fValue(value)
{

}

Attribute::Attribute(const Attribute& rhs)
	: fName(rhs.fName),
	  fValue(rhs.fValue)
{

}


Attribute::~Attribute()
{

}

Attribute& Attribute::operator=(const Attribute& rhs)
{
	if (this != &rhs)
	{
		fName = rhs.fName;
		fValue = rhs.fValue;
	}

	return *this;
}

void Attribute::SetName(std::string name)
{
	fName = name;
}

std::string Attribute::GetName()
{
	return fName;
}

void Attribute::SetValue(double value)
{
	fValue = value;
}

double Attribute::GetValue()
{
	return fValue;
}

} /* namespace core */

} /* namespace fm */

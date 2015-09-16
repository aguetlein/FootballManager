#include "Attributes.h"

#include <stdexcept>

namespace fm {

namespace core {

Attributes::Attributes()
	: fName()
{
	fName.push_back("Geschwindigkeit");
	fName.push_back("Sprungkraft");
	fName.push_back("Schußkraft");
	fName.push_back("Ballkontrolle");
	fName.push_back("Übersicht");
	fName.push_back("Zweikampfstärke");
	fName.push_back("Ausdauer");
}

Attributes::~Attributes()
{
	fName.clear();
}

std::string Attributes::GetName(int index)
{
	if (index < 0 || index >= fName.size())
		throw std::invalid_argument("<Attributes::GetName> index out of bounds!");

	return fName[index];
}

int Attributes::GetNAttributes()
{
	return fName.size();
}

} /* namespace core */

} /* namespace fm */

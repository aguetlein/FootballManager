#include "PlayerAttributes.h"

#include "Attributes.h"

#include <stdexcept>

namespace fm {
namespace core {

PlayerAttributes::PlayerAttributes()
	: fAttributes(Attributes::nAttributes, 0.)
{

}

PlayerAttributes::PlayerAttributes(const PlayerAttributes& rhs)
	: fAttributes(rhs.fAttributes)
{

}

PlayerAttributes::~PlayerAttributes()
{
	fAttributes.clear();
}

PlayerAttributes& PlayerAttributes::operator=(const PlayerAttributes& rhs)
{
	if (this != &rhs)
	{
		fAttributes = rhs.fAttributes;
	}

	return *this;
}

double PlayerAttributes::GetAttribute(int index)
{
	if (index < 0 || index >= fAttributes.size())
		throw std::invalid_argument("<PlayerAttributes::GetAttribute>: index out of bounds");

	return fAttributes[index];
}

void PlayerAttributes::SetAttribute(int index, double value)
{
	if (index < 0 || index >= fAttributes.size())
		throw std::invalid_argument("<PlayerAttributes::SetAttribute>: index out of bounds");

	fAttributes[index] = value;
}


} /* namespace core */
} /* namespace fm */

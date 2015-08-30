/*!
 * @class PlayerInfo
 *
 * @date 20.07.2015
 * @author Achim Gütlein
 */

#include "PlayerInfo.h"

#include <exception>

namespace fm {

PlayerInfo::PlayerInfo()
	: fName(),
	  fAge(0)
{
	Initialize();
}

PlayerInfo::PlayerInfo(std::string name, int age)
	: fName(name),
	  fAge(age)
{
	Initialize();
}

PlayerInfo::PlayerInfo(const PlayerInfo& rhs)
	: fName(rhs.fName),
	  fAge(rhs.fName),
	  fAttributes(rhs.fAttributes)
{

}

PlayerInfo::~PlayerInfo()
{
	fAttributes.clear();
}

PlayerInfo& PlayerInfo::operator=(const PlayerInfo& rhs)
{
	if (this != &rhs)
	{
		fName = rhs.fName;
		fAge = rhs.fAge;
		fAttributes = rhs.fAttributes;
	}

	return *this;
}

Attribute& PlayerInfo::GetAttribute(int index)
{
	if (index < 0 || index > (int) fAttributes.size())
	{
		throw std::bad_alloc("<PlayerInfo::GetAttribute> Invalid index");
	}

	return fAttributes[index];
}

void PlayerInfo::Initialize()
{
	fAttributes.clear();

	fAttributes.push_back(Attribute("Geschwindigkeit", 0.));
	fAttributes.push_back(Attribute("Kopfballstärke", 0.));
	fAttributes.push_back(Attribute("Schußkraft", 0.));
	fAttributes.push_back(Attribute("Präzision", 0.));
	fAttributes.push_back(Attribute("Ballkontrolle", 0.));
	fAttributes.push_back(Attribute("Schußkraft", 0.));
	fAttributes.push_back(Attribute("Zweikampfstärke", 0.));

}

} /* namespace fm */

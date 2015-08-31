/*!
 * @class PlayerInfo
 *
 * @date 20.07.2015
 * @author Achim Gütlein
 */

#include "PlayerInfo.h"

#include <exception>
#include <stdexcept>

namespace fm {

namespace core {

PlayerInfo::PlayerInfo()
	: fFirstName(),
	  fLastName(),
	  fAge(0)
{
	Initialize();
}

PlayerInfo::PlayerInfo(std::string firstName, std::string lastName, int age)
	: fFirstName(firstName),
	  fLastName(lastName),
	  fAge(age)
{
	Initialize();
}

PlayerInfo::PlayerInfo(const PlayerInfo& rhs)
	: fFirstName(rhs.fFirstName),
	  fLastName(rhs.fLastName),
	  fAge(rhs.fAge),
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
		fFirstName = rhs.fFirstName;
		fLastName = rhs.fLastName;
		fAge = rhs.fAge;
		fAttributes = rhs.fAttributes;
	}

	return *this;
}

void PlayerInfo::setFirstName(std::string firstName)
{
	fFirstName = firstName;
}

void PlayerInfo::setLastName(std::string lastName)
{
	fLastName = lastName;
}

void PlayerInfo::setName(std::string firstName, std::string lastName)
{
	fFirstName = firstName;
	fLastName = lastName;
}

std::string PlayerInfo::getName(bool fullName)
{
	std::string name;
	if (fullName) name = fFirstName;
	else
	{
		name = fFirstName.substr(0, 1);
		name += ".";
	}
	name += " ";
	name += fLastName;

	return name;
}

std::string PlayerInfo::getFirstName()
{
	return fFirstName;
}

std::string PlayerInfo::getLastName()
{
	return fLastName;
}

void PlayerInfo::setAge(int age)
{
	fAge = age;
}

int PlayerInfo::getAge()
{
	return fAge;
}

Attribute& PlayerInfo::GetAttribute(int index)
{
	if (index < 0 || index > (int) fAttributes.size())
	{
		throw std::invalid_argument("<PlayerInfo::GetAttribute> Invalid index");
	}

	return fAttributes[index];
}

void PlayerInfo::Initialize()
{
	fAttributes.clear();

	fAttributes.push_back(Attribute("Geschwindigkeit", 0.));
	fAttributes.push_back(Attribute("Sprungkraft", 0.));
	fAttributes.push_back(Attribute("Schußkraft", 0.));
	fAttributes.push_back(Attribute("Ballkontrolle", 0.));
	fAttributes.push_back(Attribute("Übersicht", 0.));
	fAttributes.push_back(Attribute("Zweikampfstärke", 0.));
	fAttributes.push_back(Attribute("Ausdauer", 0.));
}

} /* namespace core */

} /* namespace fm */

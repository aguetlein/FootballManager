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

}

PlayerInfo::PlayerInfo(std::string firstName, std::string lastName, int age)
	: fFirstName(firstName),
	  fLastName(lastName),
	  fAge(age)
{

}

PlayerInfo::PlayerInfo(const PlayerInfo& rhs)
	: fFirstName(rhs.fFirstName),
	  fLastName(rhs.fLastName),
	  fAge(rhs.fAge)
{

}

PlayerInfo::~PlayerInfo()
{

}

PlayerInfo& PlayerInfo::operator=(const PlayerInfo& rhs)
{
	if (this != &rhs)
	{
		fFirstName = rhs.fFirstName;
		fLastName = rhs.fLastName;
		fAge = rhs.fAge;
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

} /* namespace core */

} /* namespace fm */

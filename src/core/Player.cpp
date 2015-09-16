#include "Player.h"

#include "Attributes.h"

namespace fm {
namespace core {

Player::Player()
	: PlayerInfo(),
	  PlayerAttributes(),
	  PlayerRole(),
	  fOffence(0.),
	  fDefence(0.)
{

}

Player::Player(std::string firstName, std::string lastName, int age)
	: PlayerInfo(firstName, lastName, age),
	  PlayerAttributes(),
	  PlayerRole(),
	  fOffence(0.),
	  fDefence(0.)
{

}

Player::Player(const Player& rhs)
	: PlayerInfo(rhs),
	  PlayerAttributes(rhs),
	  PlayerRole(rhs),
	  fOffence(rhs.fOffence),
	  fDefence(rhs.fDefence)
{
	UpdateStrength();
}

Player::~Player()
{

}

Player& Player::operator=(const Player& rhs)
{
	if (this != &rhs)
	{
		PlayerInfo::operator =(rhs);
		PlayerAttributes::operator =(rhs);
		PlayerRole::operator =(rhs);
	}

	return *this;
}

double Player::GetOffenceStrength(bool update)
{
	if (update) UpdateStrength();

	return fOffence;
}

double Player::GetDefenceStrength(bool update)
{
	if (update) UpdateStrength();

	return fDefence;
}

void Player::UpdateStrength()
{
	fOffence = 0.;
	fDefence = 0.;

	for (int i=0; i<Attributes::nAttributes; i++)
	{
		fOffence += GetCurrentRole().GetRelOffenceWeight(i) * GetAttribute(i);
		fDefence += GetCurrentRole().GetRelDefenceWeight(i) * GetAttribute(i);
	}
}

} /* namespace core */
} /* namespace fm */

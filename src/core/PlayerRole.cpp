#include "PlayerRole.h"

namespace fm {
namespace core {

PlayerRole::PlayerRole()
	: fBasicRole(),
	  fCurrentRole()
{

}

PlayerRole::PlayerRole(const PlayerRole& rhs)
	: fBasicRole(rhs.fBasicRole),
	  fCurrentRole(rhs.fCurrentRole)
{

}

PlayerRole::~PlayerRole()
{

}

PlayerRole& PlayerRole::operator=(const PlayerRole& rhs)
{
	if (this != &rhs)
	{
		fBasicRole = rhs.fBasicRole;
		fCurrentRole = rhs.fCurrentRole;
	}

	return *this;
}

void PlayerRole::SetCurrentRole(Role currentRole)
{
	fCurrentRole = currentRole;
}

Role PlayerRole::GetCurrentRole()
{
	return fCurrentRole;
}

void PlayerRole::SetBasicRole(Role basicRole)
{
	fBasicRole = basicRole;
}

Role PlayerRole::GetBasicRole()
{
	return fBasicRole;
}

} /* namespace core */
} /* namespace fm */

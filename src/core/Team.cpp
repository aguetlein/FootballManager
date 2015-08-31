#include "Team.h"

namespace fm {

namespace core {

Team::Team()
	: fPlayer(),
	  fField(11, -1),
	  fRole(11, -1),
	  fSubstitutes(7, -1)
{

}

Team::Team(const Team& rhs)
	: fPlayer(rhs.fPlayer),
	  fField(rhs.fField),
	  fRole(rhs.fRole),
	  fSubstitutes(rhs.fSubstitutes),
	  fReserve(rhs.fReserve)
{

}

Team::~Team()
{
	fPlayer.clear();
	fField.clear();
	fRole.clear();
	fSubstitutes.clear();
	fReserve.clear();
}

Team& Team::operator=(const Team& rhs)
{
	if (this != &rhs)
	{
		fPlayer = rhs.fPlayer;
		fField = rhs.fField;
		fRole = rhs.fRole;
		fSubstitutes = rhs.fSubstitutes;
		fReserve = rhs.fReserve;
	}

	return *this;
}

double Team::getAverageOffence()
{
	return 0.8;
}

double Team::getAverageDeffence()
{
	return 0.8;
}

} /* namespace core */

} /* namespace fm */

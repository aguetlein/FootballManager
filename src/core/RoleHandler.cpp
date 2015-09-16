#include "RoleHandler.h"

#include "Attributes.h"

namespace fm {
namespace core {

RoleHandler::RoleHandler()
	: fRoles()
{

}

RoleHandler::~RoleHandler()
{
	fRoles.clear();
}

void RoleHandler::Initialize()
{
	fRoles.push_back(Role("Torwart", "TW", Attributes::nAttributes));
	fRoles.back().SetWeight(Attributes::kControll, 1., 1.);
	fRoles.back().SetWeight(Attributes::kJumping, 1., 1.);
	fRoles.back().SetWeight(Attributes::kOverview, 1., 1.);
	fRoles.back().SetWeight(Attributes::kShot, 1., 1.);
	fRoles.back().SetWeight(Attributes::kSpeed, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStamina, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStrength, 1., 1.);

	fRoles.push_back(Role("Innenverteidiger", "IV", Attributes::nAttributes));
	fRoles.back().SetWeight(Attributes::kControll, 1., 1.);
	fRoles.back().SetWeight(Attributes::kJumping, 1., 1.);
	fRoles.back().SetWeight(Attributes::kOverview, 1., 1.);
	fRoles.back().SetWeight(Attributes::kShot, 1., 1.);
	fRoles.back().SetWeight(Attributes::kSpeed, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStamina, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStrength, 1., 1.);

	fRoles.push_back(Role("Linksverteidiger", "LV", Attributes::nAttributes));
	fRoles.back().SetWeight(Attributes::kControll, 1., 1.);
	fRoles.back().SetWeight(Attributes::kJumping, 1., 1.);
	fRoles.back().SetWeight(Attributes::kOverview, 1., 1.);
	fRoles.back().SetWeight(Attributes::kShot, 1., 1.);
	fRoles.back().SetWeight(Attributes::kSpeed, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStamina, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStrength, 1., 1.);

	fRoles.push_back(Role("Rechtsverteidiger", "RV", Attributes::nAttributes));
	fRoles.back().SetWeight(Attributes::kControll, 1., 1.);
	fRoles.back().SetWeight(Attributes::kJumping, 1., 1.);
	fRoles.back().SetWeight(Attributes::kOverview, 1., 1.);
	fRoles.back().SetWeight(Attributes::kShot, 1., 1.);
	fRoles.back().SetWeight(Attributes::kSpeed, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStamina, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStrength, 1., 1.);

	fRoles.push_back(Role("Defensives Mittelfeld", "DM", Attributes::nAttributes));
	fRoles.back().SetWeight(Attributes::kControll, 1., 1.);
	fRoles.back().SetWeight(Attributes::kJumping, 1., 1.);
	fRoles.back().SetWeight(Attributes::kOverview, 1., 1.);
	fRoles.back().SetWeight(Attributes::kShot, 1., 1.);
	fRoles.back().SetWeight(Attributes::kSpeed, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStamina, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStrength, 1., 1.);

	fRoles.push_back(Role("Offensives Mittelfeld", "OM", Attributes::nAttributes));
	fRoles.back().SetWeight(Attributes::kControll, 1., 1.);
	fRoles.back().SetWeight(Attributes::kJumping, 1., 1.);
	fRoles.back().SetWeight(Attributes::kOverview, 1., 1.);
	fRoles.back().SetWeight(Attributes::kShot, 1., 1.);
	fRoles.back().SetWeight(Attributes::kSpeed, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStamina, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStrength, 1., 1.);

	fRoles.push_back(Role("Linker Flügel", "LF", Attributes::nAttributes));
	fRoles.back().SetWeight(Attributes::kControll, 1., 1.);
	fRoles.back().SetWeight(Attributes::kJumping, 1., 1.);
	fRoles.back().SetWeight(Attributes::kOverview, 1., 1.);
	fRoles.back().SetWeight(Attributes::kShot, 1., 1.);
	fRoles.back().SetWeight(Attributes::kSpeed, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStamina, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStrength, 1., 1.);

	fRoles.push_back(Role("Rechter Flügel", "RF", Attributes::nAttributes));
	fRoles.back().SetWeight(Attributes::kControll, 1., 1.);
	fRoles.back().SetWeight(Attributes::kJumping, 1., 1.);
	fRoles.back().SetWeight(Attributes::kOverview, 1., 1.);
	fRoles.back().SetWeight(Attributes::kShot, 1., 1.);
	fRoles.back().SetWeight(Attributes::kSpeed, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStamina, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStrength, 1., 1.);

	fRoles.push_back(Role("Mittelstürmer", "St", Attributes::nAttributes));
	fRoles.back().SetWeight(Attributes::kControll, 1., 1.);
	fRoles.back().SetWeight(Attributes::kJumping, 1., 1.);
	fRoles.back().SetWeight(Attributes::kOverview, 1., 1.);
	fRoles.back().SetWeight(Attributes::kShot, 1., 1.);
	fRoles.back().SetWeight(Attributes::kSpeed, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStamina, 1., 1.);
	fRoles.back().SetWeight(Attributes::kStrength, 1., 1.);

}

} /* namespace core */
} /* namespace fm */

#include "PlayerGenerator.h"

namespace fm {

namespace core {

PlayerGenerator::PlayerGenerator()
{
	Initialize();
}

Player* PlayerGenerator::GeneratePlayer()
{
	Player* player = new Player;

	player->setFirstName(fFirstNames[fRnd->Uniform(0, fFirstNames.size())]);
	player->setLastName(fLastNames[fRnd->Uniform(0, fLastNames.size())]);
	player->setAge(fRnd->Uniform(17, 33));



	return player;
}

PlayerGenerator::~PlayerGenerator()
{
	fFirstNames.clear();
	fLastNames.clear();
}

void PlayerGenerator::Initialize()
{
	fFirstNames.push_back("Lukas");
	fFirstNames.push_back("Tim");
	fFirstNames.push_back("Jan");
	fFirstNames.push_back("Finn");
	fFirstNames.push_back("Leon");
	fFirstNames.push_back("Niklas");
	fFirstNames.push_back("Tom");
	fFirstNames.push_back("Jonas");
	fFirstNames.push_back("Jannik");

	fLastNames.push_back("Müller");
	fLastNames.push_back("Schmidt");
	fLastNames.push_back("Schneider");
	fLastNames.push_back("Fischer");
	fLastNames.push_back("Weber");
	fLastNames.push_back("Mayer");
	fLastNames.push_back("Wagner");
	fLastNames.push_back("Becker");
	fLastNames.push_back("Schulz");
	fLastNames.push_back("Hoffmann");
}

} /* namespace core */

} /* namespace fm */

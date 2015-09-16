/*!
 * @class fm::core::Player
 *
 * @date 04.09.2015
 * @author Achim Gütlein
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "PlayerInfo.h"
#include "PlayerAttributes.h"
#include "PlayerRole.h"

#include <string>

namespace fm {
namespace core {

class Player: public PlayerInfo,
			  public PlayerAttributes,
			  public PlayerRole
{
	public:
		Player();
		Player(std::string firstName, std::string lastName, int age);
		Player(const Player& rhs);
		virtual ~Player();

		Player& operator=(const Player& rhs);

		double GetOffenceStrength(bool update = false);
		double GetDefenceStrength(bool update = false);

		void UpdateStrength();

	protected:
		double fOffence;
		double fDefence;

};

} /* namespace core */
} /* namespace fm */
#endif /* PLAYER_H_ */

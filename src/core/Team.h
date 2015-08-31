/*!
 * @class Team
 *
 * @date 31.08.2015
 * @author Achim Gütlein
 */

#ifndef TEAM_H_
#define TEAM_H_

#include "PlayerInfo.h"

#include <map>
#include <vector>

namespace fm {

namespace core {

class Team
{
	public:
		Team();
		Team(const Team& rhs);
		virtual ~Team();

		Team& operator= (const Team& rhs);

		double getAverageOffence();
		double getAverageDeffence();

	protected:
		std::map<int, PlayerInfo*> fPlayer;
		std::vector<int> fField;
		std::vector<int> fRole;
		std::vector<int> fSubstitutes;
		std::vector<int> fReserve;
};

} /* namespace core */

} /* namespace fm */

#endif /* TEAM_H_ */

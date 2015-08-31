/*!
 * @class fm::core::MatchEngine
 *
 * @date 31.08.2015
 * @author Achim Gütlein
 */

#ifndef MATCHENGINE_H_
#define MATCHENGINE_H_

#include "Team.h"

namespace fm {

namespace core {

class MatchEngine
{
	public:
		MatchEngine();
		virtual ~MatchEngine();

		void run();

		void setHomeTeam(Team* homeTeam);
		void setAwayTeam(Team* awayTeam);

	protected:
		Team* fHome;
		Team* fAway;
};

} /* namespace core */

} /* namespace fm */

#endif /* MATCHENGINE_H_ */

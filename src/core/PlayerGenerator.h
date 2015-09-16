/*!
 * @class PlayerGenerator
 *
 * @date 20.07.2015
 * @author Achim Gütlein
 */

#ifndef FM_PLAYERGENERATOR_H_
#define FM_PLAYERGENERATOR_H_

#include <string>
#include <vector>

#include "Player.h"
#include "RandomGenerator.h"

namespace fm {

namespace core {

class PlayerGenerator
{
	public:
		PlayerGenerator();
		PlayerGenerator(RandomGenerator* rnd);
		virtual ~PlayerGenerator();

		Player* GeneratePlayer();

		void SetRandomGenerator(RandomGenerator* rnd);

	protected:
		void Initialize();

		std::vector<std::string> fFirstNames;
		std::vector<std::string> fLastNames;

		RandomGenerator* fRnd;
};

} /* namespace sore */
} /* namespace fm */
#endif /* FM_PLAYERGENERATOR_H_ */

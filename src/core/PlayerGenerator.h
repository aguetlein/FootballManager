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

namespace fm {

class PlayerGenerator
{
	public:
		PlayerGenerator();
		virtual ~PlayerGenerator();

		PlayerInfo* GeneratePlayer();

	protected:
		void Initialize();

		std::vector<std::string> fFirstNames;
		std::vector<std::string> fLastNames;
};

} /* namespace fm */
#endif /* FM_PLAYERGENERATOR_H_ */

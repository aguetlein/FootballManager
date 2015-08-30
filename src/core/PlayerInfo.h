/*!
 * @class fm::PlayerInfo
 *
 * @date 20.07.2015
 * @author Achim Gütlein
 */

#ifndef FM_PLAYERINFO_H_
#define FM_PLAYERINFO_H_

#include <string>
#include <vector>

#include "Attribute.h"

namespace fm {

class PlayerInfo
{
	public:
		PlayerInfo();
		PlayerInfo(std::string name, int age);
		PlayerInfo(const PlayerInfo& rhs);
		virtual ~PlayerInfo();

		PlayerInfo& operator=(const PlayerInfo& rhs);

		Attribute& GetAttribute(int index);

	protected:
		void Initialize();

		std::string fName;
		int fAge;

		std::vector<Attribute> fAttributes;
};

} /* namespace fm */
#endif /* FM_PLAYERINFO_H_ */

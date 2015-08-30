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
		PlayerInfo(std::string firstName, std::string lastName, int age);
		PlayerInfo(const PlayerInfo& rhs);
		virtual ~PlayerInfo();

		PlayerInfo& operator=(const PlayerInfo& rhs);

		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setName(std::string firstName, std::string lastName);

		std::string getName(bool fullName = true);
		std::string getFirstName();
		std::string getLastName();

		void setAge(int age);
		int getAge();

		Attribute& GetAttribute(int index);

		enum Attributes
		{
			kSpeed,
			kJumping,
			kShot,
			kControll,
			kOverview,
			kStrength,
			kStamina
		};

	protected:
		void Initialize();

		std::string fFirstName;
		std::string fLastName;
		int fAge;

		std::vector<Attribute> fAttributes;
};

} /* namespace fm */
#endif /* FM_PLAYERINFO_H_ */

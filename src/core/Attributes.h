/*!
 * @class fm::core::Attribute
 *
 * @date 20.07.2015
 * @author Achim Gütlein
 */

#ifndef FM_ATTRIBUTES_H_
#define FM_ATTRIBUTES_H_

#include <string>
#include <vector>

namespace fm {

namespace core {

class Attributes
{
	public:
		Attributes();
		virtual ~Attributes();

		std::string GetName(int index);

		int GetNAttributes();

		enum AttNames
		{
			kSpeed,
			kJumping,
			kShot,
			kControll,
			kOverview,
			kStrength,
			kStamina
		};

		static const int nAttributes = 7;

	protected:
		std::vector<std::string> fName;
};

} /* namespace core */

} /* namespace fm */
#endif /* FM_ATTRIBUTES_H_ */

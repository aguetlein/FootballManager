/*!
 * @class fm::core::Attribute
 *
 * @date 20.07.2015
 * @author Achim Gütlein
 */

#ifndef FM_ATTRIBUTE_H_
#define FM_ATTRIBUTE_H_

#include <string>

namespace fm {

namespace core {

class Attribute
{
	public:
		Attribute();
		Attribute(std::string name, double value);
		Attribute(const Attribute& rhs);
		virtual ~Attribute();

		Attribute& operator=(const Attribute& rhs);

		void SetName(std::string name);
		std::string GetName();

		void SetValue(double value);
		double GetValue();

	protected:
		std::string fName;
		double fValue;
};

} /* namespace core */

} /* namespace fm */
#endif /* FM_ATTRIBUTE_H_ */

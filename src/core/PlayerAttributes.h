/*
 * PlayerAttributes.h
 *
 *  Created on: 04.09.2015
 *      Author: achim
 */

#ifndef PLAYERATTRIBUTES_H_
#define PLAYERATTRIBUTES_H_

#include <vector>

namespace fm {
namespace core {

class PlayerAttributes
{
	public:
		PlayerAttributes();
		PlayerAttributes(const PlayerAttributes& rhs);
		virtual ~PlayerAttributes();

		PlayerAttributes& operator=(const PlayerAttributes& rhs);

		void SetAttribute(int index, double value);
		double GetAttribute(int index);

	protected:
		std::vector<double> fAttributes;
};

} /* namespace core */
} /* namespace fm */
#endif /* PLAYERATTRIBUTES_H_ */

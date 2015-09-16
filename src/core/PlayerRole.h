/*!
 * @class fm::core::PlayerRole
 *
 * @date 04.09.2015
 * @author Achim Gütlein
 */

#ifndef PLAYERROLE_H_
#define PLAYERROLE_H_

#include "Role.h"

namespace fm {
namespace core {

class PlayerRole
{
	public:
		PlayerRole();
		PlayerRole(const PlayerRole& rhs);
		virtual ~PlayerRole();

		PlayerRole& operator=(const PlayerRole& rhs);

		void SetCurrentRole(Role currentRole);
		Role GetCurrentRole();

		void SetBasicRole(Role basicRole);
		Role GetBasicRole();

	protected:
		Role fBasicRole;
		Role fCurrentRole;
};

} /* namespace core */
} /* namespace fm */
#endif /* PLAYERROLE_H_ */

/*!
 * @class fm::core::RoleHandler
 *
 * @date 04.09.2015
 * @author Achim Gütlein
 */

#ifndef ROLEHANDLER_H_
#define ROLEHANDLER_H_

#include "Role.h"

#include <string>
#include <vector>

namespace fm {
namespace core {

class RoleHandler
{
	public:
		RoleHandler();
		virtual ~RoleHandler();

		enum Roles
		{
			kGoalie,
			kCD,
			kLD,
			kRD,
			kDM,
			kOM,
			kLW,
			kRW,
			kStr,
		};

	protected:
		void Initialize();

		std::vector<Role> fRoles;
};

} /* namespace core */
} /* namespace fm */
#endif /* ROLEHANDLER_H_ */

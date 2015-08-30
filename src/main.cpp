/*!
 * @mainpage
 *
 * Football Manager
 *
 * @date 20.07.2015
 * @author Achim Gütlein
 */

#include <iostream>

#include <exception>

#include "../config.h"

int main()
{
	try
	{
		std::cout << "   --------------------------------" << std::endl;
		std::cout << "   |       FOOTBALL MANAGER       |" << std::endl;
		std::cout << "   |                              |" << std::endl;
		std::cout << "   | version " << VERSION << "              |" << std::endl;
		std::cout << "   | (c) Achim Gütlein 2015       |" << std::endl;
		std::cout << "   --------------------------------" << std::endl;


	}
	catch (std::bad_alloc& e)
	{
		std::cerr << "Caught exception: " << std::endl;
		std::cerr << e.what() << std::endl;

		return 1;
	};

	return 0;
}



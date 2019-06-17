
#include <iostream>
#include "easyfind.hpp"

int		main(void)
{
	int		container[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		container1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		found;
	
	found = easyfind(container, 8);
	if (found != -1)
		std::cout << "Element found in container " << std::endl;
	else
		std::cout << "Element not found in container !" << std::endl;
		
	found = easyfind(container, 9);
	if (found != -1)
		std::cout << "Element found in container " << std::endl;
	else
		std::cout << "Element not found in container !" << std::endl;
		
	found = easyfind(container1, 0);
	if (found != -1)
		std::cout << "Element found in container " << std::endl;
	else
		std::cout << "Element not found in container !" << std::endl;
	return (0);
}
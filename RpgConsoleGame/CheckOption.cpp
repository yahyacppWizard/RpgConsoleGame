#include "Header.h"
#include <iostream>
int checkOption(int& option) {
	if (option == 1)
		useSword();
	else if (option == 2)
		usePickaxe();
	else if (option == 3)
		useApple();
	else
	std::cout << "Incorrect input!" << std::endl << std::endl;
	return -1;

		

}
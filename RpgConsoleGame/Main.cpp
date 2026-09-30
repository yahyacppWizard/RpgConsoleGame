#include "Header.h"
#include <iostream>
int main()
{
    while (true)
    {
        std::cout << "Pick something to do: " << std::endl << std::endl;

        std::cout << "1. Use sword" << std::endl;
        std::cout << "2. Use pickaxe" << std::endl;
        std::cout << "3. Use apple" << std::endl;

        int option;

        std::cin >> option;

        checkOption(option);

    }

    std::cin.get();
}

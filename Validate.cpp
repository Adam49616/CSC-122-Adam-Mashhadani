#include <iostream>
#include "validate.h"

int getValidatedInput(int lower, int upper,
    std::string prompt,
    std::string errorMsg)
{
    int value;

    std::cout << prompt << std::endl;
    std::cin >> value;

    while (value < lower || value > upper)
    {
        std::cout << errorMsg << std::endl;
        std::cout << prompt << std::endl;
        std::cin >> value;
    }

    return value;
}
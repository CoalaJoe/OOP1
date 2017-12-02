#include <iostream>
#include <gmpxx.h>


int main()
{
    std::string one;
    std::string two;

    std::cout << "Geben Sie den 1. Teilstring ein: ";
    std::getline(std::cin, one);

    std::cout << "Geben Sie den 2. Teilstring ein: ";
    std::getline(std::cin, two);

    std::cout << "Der Zusammengesetzte String lautet: ";
    std::cout << one + two;

    return 0;
}

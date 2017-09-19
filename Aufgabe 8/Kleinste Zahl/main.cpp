#include <iostream>

/**
 * This function returns the smallest number of the 3 given.
 *
 * @param int num1
 * @param int num2
 * @param int num3
 * @return int
 */
int getSmallestNumber(int num1, int num2, int num3);

int main()
{
    int num1{0},
        num2{0},
        num3{0};

    std::cout << "Geben Sie 3 Zahlen ein:" << std::endl;

    std::cout << "Die 1. Zahl: ";
    std::cin >> num1;
    std::cout << "Die 2. Zahl: ";
    std::cin >> num2;
    std::cout << "Die 3. Zahl: ";
    std::cin >> num3;

    std::cout << "Die kleinste Zahl ist " << getSmallestNumber(num1, num2, num3);

    return 0;
}

int getSmallestNumber(int num1, int num2, int num3)
{
    if (num1 > num2) {
        if (num2 > num3) {
            return num3;
        } else {
            return num2;
        }
    } else {
        if (num1 > num3) {
            return num3;
        } else {
            return num1;
        }
    }
}


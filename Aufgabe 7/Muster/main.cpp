#include <iostream>

int main()
{
    for (int i = 1; i <= 4; ++i) {
        for (int a = 1; a <= i; ++a) {
            std::cout << "+";
        }
        std::cout << "\n";
    }

    return 0;
}
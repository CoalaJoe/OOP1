#include <iostream>

int main()
{
    for (int a = 1; a <= 10; ++a) {
        for (int i = 1; i <= 10; ++i) {
            std::cout << a * i << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}
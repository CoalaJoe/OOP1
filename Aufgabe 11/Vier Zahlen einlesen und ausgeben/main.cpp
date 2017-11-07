#include <iostream>

int main()
{
    float zahlen[4];

    for (int i = 0; i < 4; ++i) {
        std::cout << "\nz[" << i << "] = ";
        std::cin >> zahlen[i];
    }

    for (int i = 3; i >= 0; --i) {
        std::cout << zahlen[i] << "\t";
    }

    return 0;
}

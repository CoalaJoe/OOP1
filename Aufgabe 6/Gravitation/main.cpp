#include <iostream>
#include <cmath>

int main()
{
    const long double f = 6.673 * pow(10, -11);

    float m1 = 0;
    float m2 = 0;
    float r  = 0;

    std::cout << "Masse Objekt 1: ";
    std::cin >> m1;
    std::cout << "Masse Objekt 2: ";
    std::cin >> m2;
    std::cout << "Abstand: ";
    std::cin >> r;

    auto gravityforce = static_cast<float>(f * (m1 * m2 / pow(r, 2)));

    std::cout << "FG sollte: " << gravityforce << " sein.";

    return 0;
}
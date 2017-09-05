#include <cmath>
#include <iostream>

int main()
{
    const float g      = 9.807;
    float       height = 0.0;

    std::cout << "Willkommen beim Mobiliar Falldauerrechner.\n\n";
    std::cout << "Geben Sie die Höhe in Metern an: ";
    std::cin >> height;

    float time = std::sqrt(2 * height / g);

    printf("Der Fall dauerte also %.2f Sekunden.", time);

    return 0;
}
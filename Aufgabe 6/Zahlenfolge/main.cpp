#include <iostream>

int main()
{
    float start(0);
    float end(20);
    float step(0);

    std::cout << "Startwert: ";
    std::cin >> start;

    std::cout << "Endwert: ";
    std::cin >> end;

    std::cout << "Schrittweite: ";
    std::cin >> step;

    float position = start;
    while (position <= end) {
        std::cout << position << "\t";
        position += step;
    }

    return 0;
}
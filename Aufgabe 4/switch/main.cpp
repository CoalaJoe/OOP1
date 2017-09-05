#include <iostream>

int main()
{
    int input = 0;

    std::cout << "Geben sie eine beliebige Zahl ein:";
    std::cin >> input;

    switch (input % 2) {
        case 0:
            std::cout << "Die Zahl " << input << " ist gerade!";
            break;
        default:
            std::cout << "Die Zahl " << input << " ist ungerade!";
            switch (static_cast<int>(input > 0)) {
                case 1:
                    std::cout << "Die Zahl " << input << " ist grösser als 0!";
                default:
                    break;
            }
            break;
    }

    return 0;
}
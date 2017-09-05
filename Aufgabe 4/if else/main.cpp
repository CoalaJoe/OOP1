#include <iostream>

int main(int argc, char **argv)
{
    int input = 0;

    std::cout << "Geben sie eine beliebige Zahl ein: ";
    std::cin >> input;

    if (input % 2 == 0) {
        std::cout << "Die Zahl " << input << " ist gerade!\n";
    } else {
        std::cout << "Die Zahl " << input << " ist ungerade!\n";
        if (input > 0) {
            std::cout << "Die Zahl " << input << " ist grösser als 0!\n";
        }
    }

    return 0;
}
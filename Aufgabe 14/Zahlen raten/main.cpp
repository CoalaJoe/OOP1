#include<iostream>
#include<random>

int main()
{
    int  tries = 6;
    int  num   = 0;
    int  input = 0;
    bool again = false;

    do {
        num = (rand() % 101);
        for (int i = 0; i < tries; ++i) {
            std::cout << "Geben Sie die " << i + 1 << ". Zahl ein: ";
            std::cin >> input;
            if (input != num) {
                if (input > num) {
                    std::cout << "Die gesuchte Zahl ist kleiner.\n";
                } else {
                    std::cout << "Die gesuchte Zahl ist grösser.\n";
                }
            } else {
                std::cout << "Gratulation! Sie haben die Zahl " << num << " im " << i + 1 << ". Versuch erraten.\n";
                break;
            }
        }
        do {
            std::cout << "Möchtest du nochmal Spielen? (0 = Nein, 1 = Ja): ";
            std::cin >> input;
        } while (input != 0 && input != 1);
        again = (bool) input;
    } while (again);
}

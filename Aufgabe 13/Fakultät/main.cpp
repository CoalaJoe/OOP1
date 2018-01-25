#include<iostream>

int main()
{
    int eingabe(0);
    int result(1);
    std::cout << "Bitte geben Sie eine Zahl ein: ";
    std::cin >> eingabe;

    for (int i = 0; i < eingabe; ++i) {
        result *= (i + 1);
    }

    std::cout << eingabe << " != " << result;
}

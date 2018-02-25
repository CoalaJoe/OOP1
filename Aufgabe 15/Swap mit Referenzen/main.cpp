#include<iostream>

void swapReferences(double &a, double &b);

int main()
{
    double a = 0,
           b = 0;

    std::cout << "1. Wert eingeben: ";
    std::cin >> a;
    std::cout << "2. Wert eingeben: ";
    std::cin >> b;

    std::cout << "1. Wert vor dem Funktionsaufruf: " << a << "\n";
    std::cout << "2. Wert vor dem Funktionsaufruf: " << b << "\n";

    swapReferences(a, b);

    std::cout << "1. Wert vor dem Funktionsaufruf: " << a << "\n";
    std::cout << "2. Wert vor dem Funktionsaufruf: " << b << "\n";

    return 0;
}

void swapReferences(double &a, double &b)
{
    double c = a;
    a = b;
    b = c;
}

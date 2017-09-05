#include <iostream>

int main()
{
    float  base     = 3.45;
    int    exponent = 6;
    double result   = base;

    std::cout << "Basis = " << base << "\n";
    std::cout << "Exponent = " << exponent << "\n";

    for (int i = 1; i < exponent; ++i) {
        result *= base;
    }

    /** While example
    int i = 1;
    while (i < exponent) {
        result *= base;
        ++i;
    }
    */

    /** Do-While example
    do {
        result *= base;
        ++i;
    } while (i < exponent);
    */

    std::cout << base << " ^" << exponent << " = " << result;

    return 0;
}

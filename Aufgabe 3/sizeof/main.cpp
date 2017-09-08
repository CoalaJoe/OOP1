#include <iostream>

int main()
{
    double var_double = 32423.234;
    long double var_long_double = 2423423423423.234234;
    char var_char = 'x';
    std::string var_string = "Here we goo..";

    std::cout << sizeof(int) << "\n";
    std::cout << sizeof(long int) << "\n";
    std::cout << sizeof(float) << "\n";
    std::cout << sizeof(var_double) << "\n";
    std::cout << sizeof(var_long_double) << "\n";
    std::cout << sizeof(var_char) << "\n";
    std::cout << sizeof(var_string) << "\n";

    return 0;
}
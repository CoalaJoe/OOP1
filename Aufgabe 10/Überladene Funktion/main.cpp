#include <iostream>

void printer(char a);
void printer(int a);
void printer(double a);

int main()
{
    char   a = 'a';
    int    b = 0;
    double c = 0;

    printer(a);
    printer(b);
    printer(c);

    return 0;
}

void printer(char a) {
    std::cout << "Es wurde eine char Variable eingegeben" << std::endl;
}

void printer(double a)
{
    std::cout << "Es wurde eine double Variable eingegeben" << std::endl;
}

void printer(int a)
{
    std::cout << "Es wurde eine int Variable eingegeben" << std::endl;
}
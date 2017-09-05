#include <iostream>

int main()
{
    double x = 0;
    double a = 4;
    double b = 6;

    x = a + b;
    printf("%.2lf + %.2lf = %.2lf\n", a, b, x);

    x = a * b;
    printf("%.2lf * %.2lf = %.2lf\n", a, b, x);

    x = a / b;
    printf("%.2lf / %.2lf = %.2lf\n", a, b, x);

    x = a - b;
    printf("%.2lf - %.2lf = %.2lf\n", a, b, x);

    return 0;
}
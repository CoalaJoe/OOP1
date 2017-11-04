#include <iostream>

static int a(0);

int anzahl()
{
    return ++a;
}

int main()
{
    for (int i(0); i < 10; ++i) {
        std::cout << anzahl();
    }

    return 0;
}
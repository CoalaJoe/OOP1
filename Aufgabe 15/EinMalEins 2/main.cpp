#include<iostream>

void printValues(int **values);

int main()
{
    int **a,
        i = 0,
        j = 0;

    a = new int *[10];

    for (; i < 10; ++i) {
        a[i] = new int[10];
        j = 0;
        for (; j < 10; ++j) {
            a[i][j] = (i + 1) * (j + 1);
        }
    }

    printValues(a);

    return 0;
}

void printValues(int **values)
{
    int i = 0,
        j = 0;

    for (; i < 10; ++i) {
        j = 0;
        for (; j < 10; ++j) {
            std::cout << values[i][j] << "\t";
        }
        std::cout << "\n";
    }
}


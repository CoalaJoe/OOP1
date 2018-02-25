#include<iostream>

void printValues(int values[10][10]);

int main()
{
    int values[10][10];
    int i = 0,
        j = 0;

    for (; i < 10; ++i) {
        j = 0;
        for (; j < 10; ++j) {
            values[i][j] = (i + 1) * (j + 1);
        }
    }

    printValues(values);

    return 0;
}

void printValues(int values[10][10])
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

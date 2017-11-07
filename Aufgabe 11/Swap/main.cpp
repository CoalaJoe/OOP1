#include <iostream>

void swap(int (&nums)[2]) {
    std::reverse(std::begin(nums), std::end(nums));
}

int main()
{
    int a[2] = {0, 0};

    std::cout << "Eingabe der Werte: \n";
    for (int i = 0; i < (sizeof(a) / sizeof(*a)); ++i) {
        std::cout << "a[" << i << "] = ";
        std::cin >> a[i];
    }

    swap(a);

    std::cout << "\nDie Werte nach Aufruf der Funktion:\n";
    for (int i = 0; i < (sizeof(a) / sizeof(*a)); ++i) {
        std::cout << "a[" << i << "] = " << a[i] << "\n";
    }
}
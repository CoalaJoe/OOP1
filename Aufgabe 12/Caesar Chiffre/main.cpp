#include <iostream>

char *encrypt(char c[250], int key);

char *decrypt(char c[250], int key);

int main()
{
    int(key);
    char input[250];

    std::cout << "Schlüssel eingeben: ";
    std::cin >> key;

    std::cout << "Wort eingeben: ";
    std::cin.ignore();
    std::cin.getline(input, 250);

    std::cout << "Schlüssel lautet: " << key << "\n";
    std::cout << "Der verschlüsselte Text lautet: " << encrypt(input, key) << "\n";
    std::cout << "Der entschlüsselte Text lautet: " << decrypt(input, key) << "\n";

    return 0;
}

char *encrypt(char c[250], int key)
{
    for (int i = 0; i < 250; ++i) {
        if (c[i] == '\0') {
            break;
        }
        c[i] = char(int(c[i]) + key);
    }

    return c;
}

char *decrypt(char c[250], int key)
{
    for (int i = 0; i < 250; ++i) {
        if (c[i] == '\0') {
            break;
        }
        c[i] = char(int(c[i]) - key);
    }

    return c;
}

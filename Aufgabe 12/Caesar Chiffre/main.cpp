#include <iostream>

char *encrypt(char c[250], int key);

char *decrypt(char c[250], int key);


const int UPPER_START = 65;
const int UPPER_STOP  = 90;

const int LOWER_START = 97;
const int LOWER_STOP  = 122;

const int CHAR_RANGE = 26;

/**
 * A = 65, Z = 90
 * a = 97, z = 122
 *
 * @return
 */
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

char getNextChar(char c, int key)
{
    bool isChar = false;
    auto ascii  = (int) c;

    if (ascii <= LOWER_STOP && ascii >= LOWER_START) {
        isChar = true;
        std::cout << ascii << "\n";
        if ((ascii + key) > LOWER_STOP) {
            ascii = ascii - CHAR_RANGE;
        } else if ((ascii + key) < LOWER_START) {
            ascii = ascii + CHAR_RANGE;
        }
    }

    if (ascii <= UPPER_STOP && ascii >= UPPER_START) {
        isChar = true;
        if ((ascii + key) > UPPER_STOP) {
            ascii = ascii - CHAR_RANGE;
        } else if ((ascii + key) < UPPER_START) {
            ascii = ascii + CHAR_RANGE;
        }
    }

    if (isChar) {
        ascii += key;
    }

    return (char) ascii;
}

char *encrypt(char c[250], int key)
{
    for (int i = 0; i < 250; ++i) {
        if (c[i] == '\0') {
            break;
        }
        c[i] = getNextChar(c[i], key);
    }

    return c;
}

char *decrypt(char c[250], int key)
{
    for (int i = 0; i < 250; ++i) {
        if (c[i] == '\0') {
            break;
        }
        c[i] = getNextChar(c[i], -key);
    }

    return c;
}

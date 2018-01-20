#include <iostream>

char *encrypt(char c[250], int key);

char *decrypt(char c[250], int key);


const int UPPER_START = 65; // ASCII Zahl für A
const int UPPER_STOP  = 90; // ASCII Zahl für Z

const int LOWER_START = 97; // ASCII Zahl für a
const int LOWER_STOP  = 122; // ASCII Zahl für z

const int CHAR_RANGE = 26; // Das Alphabet hat 26 Buchstaben.

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

    // Eingabe des Schlüssels
    std::cout << "Schlüssel eingeben: ";
    std::cin >> key;

    // Eingabe des Wortes
    std::cout << "Wort eingeben: ";
    std::cin.ignore();
    std::cin.getline(input, 250);

    // Ausgabe des Schlüssels
    std::cout << "Schlüssel lautet: " << key << "\n";
    // Das verschlüsselte Wort
    std::cout << "Der verschlüsselte Text lautet: " << encrypt(input, key) << "\n";
    // Das wieder entschlüsselte Wort
    std::cout << "Der entschlüsselte Text lautet: " << decrypt(input, key) << "\n";

    return 0;
}

/**
 *
 * @param char c
 * @param int key
 * @return
 */
char getNextChar(char c, int key)
{
    bool isChar = false; // Wird geändert, falls das Wort einen Buchstaben a-z oder A-Z beinhaltet
    auto ascii  = (int) c; // ASCII Zahl des Buchstaben

    if (ascii <= LOWER_STOP && ascii >= LOWER_START) { // Wenn Buchstabe ein kleiner Buchstabe ist.
        isChar = true; // Merke dass es ein Buchstabe war.
        std::cout << ascii << "\n";
        if ((ascii + key) > LOWER_STOP) { // Wenn Buchstabe über `z` rüber geht.
            ascii = ascii - CHAR_RANGE; // Fang wieder bei `a` an. In dem man -26 rechnet.
        } else if ((ascii + key) < LOWER_START) { // Wenn der Buchstabe unter `a` geht.
            ascii = ascii + CHAR_RANGE; // Zähle von `z` weiter. In dem man +26 rechnet.
        }
    }

    if (ascii <= UPPER_STOP && ascii >= UPPER_START) { // Wenn Buchstabe ein grosser Buchstabe ist.
        isChar = true; // Merke dass es ein Buchstabe war.
        if ((ascii + key) > UPPER_STOP) { // Wenn Buchstabe über `Z` rüber geht.
            ascii = ascii - CHAR_RANGE; // Fang wieder bei `A` an. In dem man -26 rechnet.
        } else if ((ascii + key) < UPPER_START) { // Wenn der Buchstabe unter `A` geht.
            ascii = ascii + CHAR_RANGE; // Zähle von `Z` weiter. In dem man +26 rechnet.
        }
    }

    if (isChar) { // Wenn es effektiv ein Buchstabe war. Verschlüssle/Entschlüssle ihn mit dem Schlüssel.
        ascii += key;
    }

    return (char) ascii; // Konvertier die ASCII Zahl wieder in einen Buchstaben.
}

/**
 * Verschlüsseln des Wortes.
 *
 * @param char[] c
 * @param int key
 * @return
 */
char *encrypt(char c[250], int key)
{
    for (int i = 0; i < 250; ++i) { // So oft ausführen, wie Buchstaben in dem Array sind.
        if (c[i] == '\0') { // Keine Buchstaben mehr.
            break; // Mit der Schleife aufhören.
        }
        c[i] = getNextChar(c[i], key); // Ersetze den Buchstaben in dem Array, mit dem verschlüsselten.
    }

    return c;
}

/**
 * Entschlüsseln des Wortes.
 *
 * @param char[] c
 * @param int key
 * @return
 */
char *decrypt(char c[250], int key)
{
    for (int i = 0; i < 250; ++i) { // So oft ausführen, wie Buchstaben in dem Array sind.
        if (c[i] == '\0') { // Keine Buchstaben mehr.
            break; // Mit der Schleife aufhören.
        }
        c[i] = getNextChar(c[i], -key); // Ersetze den Buchstaben in dem Array, mit dem entschlüsselten.
    }

    return c;
}

#include <iostream>

int main()
{
    // Vorhersage: Das Ergebnis sollte 80 sein.
    // 48?

    int a = 12;
    a += ++a + a++;
    a = a + a;
    std::cout << a << "\n";

    // Stimmt

    /*
     * Begründung:
     * ++ pre- und post-increment, erhöhen den Wert im Speicher von a.
     * Davon sind ist a 2 Mal, 2 Mal betroffen.
     */

    return 0;
}
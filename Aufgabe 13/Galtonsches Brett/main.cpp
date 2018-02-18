#include<iostream>
#include<random>

int main()
{
    int boxes[6];
    int depth = 5;
    int balls = 100;
    int boxId = 0;

    // Array-Werte auf 0 setzen.
    for (int &box : boxes) {
        box = 0;
    }

    for (int i = 0; i < balls; ++i) {
        boxId = 0;
        for (int j = 0; j < depth; ++j) {
            // random ist eine Funktion welche nur in POSIX-Systemen zur verfügung steht.
            // Wenn du Windows verwenden willst, ohne eine Kompatibilitätsschicht wie CYGWIN, ändere dies einfach zu rand.
            boxId += static_cast<int>(random() % 2);
        }
        ++(boxes[boxId]);
    }

    for (int i = 0; i < 6; ++i) {
        std::cout << "Box " << i + 1 << ": " << boxes[i] << "\n";
    }
}

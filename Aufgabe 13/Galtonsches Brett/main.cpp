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
            boxId += (rand() % 2);
        }
        ++(boxes[boxId]);
    }

    for (int i = 0; i < 6; ++i) {
        std::cout << "Box " << i + 1 << ": " << boxes[i] << "\n";
    }
}

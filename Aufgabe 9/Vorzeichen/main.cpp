#include <iostream>

/**
 * Checks num and return either -1, 0 or 1.
 *
 * @param int num
 * @return
 */
int checkNum(int num);

/**
 * Prints out a string to the console, asking for a number.
 */
void askForNum();

/**
 * Gets a number from the console input.
 *
 * @return
 */
int getNum();

/**
 * Returns the results.
 *
 * @param num
 */
void printResults(int num);

int main()
{
    askForNum();
    printResults(checkNum(getNum()));

    return 0;
}

void askForNum()
{
    std::cout << "Geben Sie eine Zahl an: ";
}

int getNum()
{
    int num{0};
    std::cin >> num;

    return num;
}

void printResults(int num)
{
    if (num == 0) {
        std::cout << "Die Zahl ist neutral.\n";
        std::cout << 0;
    } else if (num == 1) {
        std::cout << "Die zahl ist positiv.\n";
        std::cout << 1;
    } else if (num == -1) {
        std::cout << "Die zahl ist negativ.\n";
        std::cout << -1;
    } else {
        throw "Function cant print result, due to unnormalized data.";
    }
}

int checkNum(int num)
{
    if (num == 0) {

        return 0;
    } else if (num < 0) {

        return -1;
    } else {

        return 1;
    }
}

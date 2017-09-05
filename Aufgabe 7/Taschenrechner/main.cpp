#include <iostream>
#include <stdexcept>

int main()
{
    float operand1(0), operand2(0), result(0);
    char oper, validOperators[] = {'+', '-', '*', '/'};
    bool validityFlag = false;
    bool firstRun = true;

    std::cout << "Operand 1: ";
    std::cin >> operand1;

    std::cout << "Operand 2: ";
    std::cin >> operand2;

    std::cout << "Operator (+,-,*,/): ";

    firstRun = true;
    while (!validityFlag && std::cin.get(oper)) {
        validityFlag = false;
        for (char comp : validOperators) {
            if (comp == oper) {
                validityFlag = true;
                continue;
            }
        }

        if (!validityFlag && !firstRun) {
            std::cout << oper << " ist kein valider Operator!";
        }
        firstRun = false;
    };

    switch (oper) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            result = operand1 / operand2;
        default:
            std::invalid_argument("Operator was not found!");
            break;
    }

    std::cout << "Result = " << result;


    return 0;
}
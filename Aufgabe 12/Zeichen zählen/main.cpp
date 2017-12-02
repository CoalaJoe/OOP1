#include <iostream>

int countShit(const char string[250]){
    for (int i = 0; i < 250; ++i) {
        if (string[i] == '\0') {
            return i;
        }
    }
    return 250;
}

int main()
{
    std::string tmp;
    char test[250];
    
    std::cout << "Geben Sie einen String ein: ";
    std::cin.get(test, 250);

    std::cout << "Der String enthält " << countShit(test) << " Zeichen!\n";

    return 0;
}
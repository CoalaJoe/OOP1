#include<iostream>

int main()
{
    double debt         = 0;
    double originalDebt = 0;
    double interest     = 0;
    double amortisation = 0;
    int    duration     = 0;

    double totalInterest = 0;
    double tmpInterest   = 0;

    std::cout << "Kreditbetrag in SFr: ";
    std::cin >> debt;
    originalDebt = debt;

    std::cout << "Laufzeit in Jahren: ";
    std::cin >> duration;

    std::cout << "Zins pro Jahr in %: ";
    std::cin >> interest;

    std::cout << "Rückzahlung pro Jahr in SFr: ";
    std::cin >> amortisation;

    for (int i = 0; i < duration; ++i) {
        tmpInterest = (debt / 100 * interest);
        std::cout << "Schuldbetrag " << i + 1 << ". Jahr: " << debt << " SFr. Ergibt: " << tmpInterest << " SFr Zins.\n";
        debt -= amortisation;
        totalInterest += tmpInterest;
    }

    std::cout << "Der totale Zins über die gesamte Laufzeit beträgt: " << totalInterest << "\n";
    std::cout << "Der totale Rückzahlungsbetrag des Kunden beträgt: " << originalDebt + totalInterest << "\n";

    return 0;
}

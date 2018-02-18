#include<iostream>

void readValues(double creditData[3]);

void calculateCreditDetails(double creditData[3], int duration);

int main()
{
    int    duration = 0;
    double creditData[3];

    /**
     * 0: Debt
     * 1: Interest
     * 2: Amortisation
     */
    readValues(creditData);

    std::cout << "Laufzeit in Jahren: ";
    std::cin >> duration;

    calculateCreditDetails(creditData, duration);

    return 0;
}

void readValues(double creditData[3])
{
    std::cout << "Kreditbetrag in SFr: ";
    std::cin >> creditData[0];

    std::cout << "Zins pro Jahr in %: ";
    std::cin >> creditData[1];

    std::cout << "Rückzahlung pro Jahr in SFr: ";
    std::cin >> creditData[2];
}

void calculateCreditDetails(double creditData[3], int duration)
{
    double totalInterest = 0;
    double tmpInterest   = 0;
    double originalDebt = creditData[0];

    for (int i = 0; i < duration; ++i) {
        tmpInterest = (creditData[0] / 100 * creditData[1]);
        std::cout << "Schuldbetrag " << i + 1 << ". Jahr: " << creditData[0] << " SFr. Ergibt: " << tmpInterest
                  << " SFr Zins.\n";
        creditData[0] -= creditData[2];
        totalInterest += tmpInterest;
    }

    std::cout << "Der totale Zins über die gesamte Laufzeit beträgt: " << totalInterest << "\n";
    std::cout << "Der totale Rückzahlungsbetrag des Kunden beträgt: " << originalDebt + totalInterest << "\n";
}

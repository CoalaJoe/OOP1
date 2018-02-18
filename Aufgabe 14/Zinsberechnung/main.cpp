#include<iostream>

int readValue(const char *text, int defaultValue);

double readValue(const char *text, double defaultValue);

int main()
{
    double totalInterest = 0;
    double tmpInterest   = 0;

    double debt         = readValue("Kreditbetrag in SFr: ", 0.);
    double originalDebt = debt;
    int    duration     = readValue("Laufzeit in Jahren: ", 0);
    double interest     = readValue("Zins pro Jahr in %: ", 0.);
    double amortisation = readValue("Rückzahlung pro Jahr in SFr: ", 0.);

    for (int i = 0; i < duration; ++i) {
        tmpInterest = (debt / 100 * interest);
        std::cout << "Schuldbetrag " << i + 1 << ". Jahr: " << debt << " SFr. Ergibt: " << tmpInterest
                  << " SFr Zins.\n";
        debt -= amortisation;
        totalInterest += tmpInterest;
    }

    std::cout << "Der totale Zins über die gesamte Laufzeit beträgt: " << totalInterest << "\n";
    std::cout << "Der totale Rückzahlungsbetrag des Kunden beträgt: " << originalDebt + totalInterest << "\n";

    return 0;
}

int readValue(const char *text, int defaultValue)
{
    std::cout << text;
    int tmp = defaultValue;
    std::cin >> tmp;

    return tmp;
}

double readValue(const char *text, double defaultValue)
{
    std::cout << text;
    double tmp = defaultValue;
    std::cin >> tmp;

    return tmp;
}

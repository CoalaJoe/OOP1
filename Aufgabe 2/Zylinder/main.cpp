#include <iostream>
#include <list>

int main()
{
    const double      pi        = 3.1415926535897;
    double            max       = 0;
    double            radius    = 0;
    double            height    = 0;
    double            volume    = 0;
    std::list<double> cylinders = {};
    std::string       answer;

    bool another_cylinder = true;

    std::cout << "Berechnen Sie das Volumen eines Zylinders und den Druchschnitt mehrerer Zylinder.\n";

    while (another_cylinder) {
        std::cout << "Radius: ";
        std::cin >> radius;
        std::cout << "Höhe: ";
        std::cin >> height;
        volume = ((radius * radius) * pi * height);

        printf("Das Volumen des Zylinders ist: %.2lf\n", volume);
        max += volume;

        cylinders.push_back(volume);

        std::cout << "Möchten Sie einen weiteren Zylinder berechnen? [yes/no]";
        std::cin >> answer;

        // Eingabe in grossbuchstaben verändern.
        std::transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
        another_cylinder = (answer == "Y" || answer == "YES");
    }

    std::cout << "Das duchschnittliche Volumen beträgt: " << (max / cylinders.size());

    return 0;
}
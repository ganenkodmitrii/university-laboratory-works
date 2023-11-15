//Ganenco Dmitri Lab 2.15
#include <iostream>
#include <math.h>

int main() {
    int numar;

    std::cout << "Introduceti un numar intreg nenegativ: ";
    std::cin >> numar;

    if (numar >= 0) {
        double radacina = sqrt(static_cast<double>(numar));
        std::cout << "Numarul citit este: " << numar << std::endl;
        std::cout << "Radacina patrata din numar este: " << radacina << std::endl;
    } else {
        std::cout << "Introduceti un numar intreg nenegativ valid." << std::endl;
    }

    return 0;
}

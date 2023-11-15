//Ganenco Dmitri Lab 2.1
#include <iostream>
#include <cmath>

int main() {
    float x, y;

    std::cout << "Introduceti valoarea lui x: ";
    std::cin >> x;

    y = 3.5 * std::pow(x, 3) - 3.5 * std::pow(x, 2) + 3.5 * x - 3.5;

    std::cout << "Valoarea lui x este: " << x << std::endl;
    std::cout << "Valoarea lui y este: " << y << std::endl;

    return 0;
}

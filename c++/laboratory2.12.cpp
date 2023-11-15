//Ganenco Dmitri Lab 2.12
#include <iostream>
#include <math.h>

int main() {
    double x;

    std::cout << "Introduceti valoarea lui x (tip double): ";
    std::cin >> x;

    double expr1 = 5 * std::pow(x, 2) + 4.5 * x;
    double expr2 = 5 * std::pow(x, 2) + 4.5 * x + 3.5;
    double expr3 = (5 * std::pow(x, 2) + 4.5 * x - 1.5) / (5 * std::pow(x, 2) + 4.5 * x + 1.5);

    std::cout << "Valoarea lui x este: " << x << std::endl;
    std::cout << "5x^2 + 4.5x este: " << expr1 << std::endl;
    std::cout << "5x^2 + 4.5x + 3.5 este: " << expr2 << std::endl;
    std::cout << "(5x^2 + 4.5x - 1.5) / (5x^2 + 4.5x + 1.5) este: " << expr3 << std::endl;

    return 0;
}

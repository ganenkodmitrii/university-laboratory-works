//Ganenco Dmitri Lab 2.2
#include <iostream>

int main() {
    int x, p;

    std::cout << "Introduceti valoarea lui x (tip int): ";
    std::cin >> x;

    p = 3 * x * x + 7 * x + 17;

    std::cout << "Valoarea lui x este: " << x << std::endl;
    std::cout << "Valoarea lui p este: " << p << std::endl;

    return 0;
}

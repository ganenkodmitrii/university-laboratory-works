//Ganenco Dmitri Lab 2.19
#include <iostream>

int main() {
    double x;

    std::cout << "Introduceti valoarea lui x (tip double): ";
    std::cin >> x;

    double z = (x < 0) ? (4 * x * x + 9 * x - 2000) :
               (x == 0) ? 2000 :
                          (4 * x * x - 2000);

    std::cout << "Valoarea lui x este: " << x << std::endl;
    std::cout << "Valoarea lui z este: " << z << std::endl;

    return 0;
}

//Ganenco Dmitri Lab 2.6
#include <iostream>
#include <iomanip>
#include <math.h>
int main() {
    int num1, num2;

    std::cout << "Introduceti primul numar intreg: ";
    std::cin >> num1;

    std::cout << "Introduceti al doilea numar intreg: ";
    std::cin >> num2;

    double geometric_mean = sqrt(static_cast<double>(num1) * num2);

    std::cout << "Numerele citite sunt: " << num1 << " si " << num2 << std::endl;
    std::cout << "Media geometrica este: " << std::fixed << std::setprecision(2) << geometric_mean << std::endl;

    return 0;
}

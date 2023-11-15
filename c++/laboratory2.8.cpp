//Ganenco Dmitri Lab 2.8
#include <iostream>

int main() {
    int n;
    double r;

    std::cout << "Introduceti valoarea lui n (tip int): ";
    std::cin >> n;

    std::cout << "Introduceti valoarea lui r (tip double): ";
    std::cin >> r;

    int result = (r > n) ? 0 : -1;

    std::cout << "Rezultatul este: " << result << std::endl;

    return 0;
}

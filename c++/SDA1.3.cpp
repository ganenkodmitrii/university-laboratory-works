#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return static_cast<unsigned long long>(n) * factorial(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Enter the number n to calculate the factorial: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is defined only for non-negative integers." << std::endl;
    } else {
        unsigned long long result = factorial(n);
        std::cout << n << "! = " << result << std::endl;
    }

    return 0;
}


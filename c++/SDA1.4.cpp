#include <iostream>
#include <vector>

int fibonacciRecursiv(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursiv(n - 1) + fibonacciRecursiv(n - 2);
}

// Iterative
int fibonacciIterativ(int n) {
    if (n <= 1) {
        return n;
    }
    int prev = 0, current = 1;
    for (int i = 2; i <= n; ++i) {
        int next = prev + current;
        prev = current;
        current = next;
    }
    return current;
}

int main() {
    int n;
    std::cout << "Introduceti numarul n pentru calculul sirului lui Fibonacci: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Numarul n trebuie sa fie nenegativ." << std::endl;
    } else {
        std::cout << "Sirul lui Fibonacci pentru primii " << n << " termeni este:" << std::endl;
        for (int i = 0; i < n; ++i) {
            int termRecursiv = fibonacciRecursiv(i);
            int termIterativ = fibonacciIterativ(i);
            std::cout << "F(" << i << ") = " << termRecursiv << " (Recursiv), " << termIterativ << " (Iterativ), " << std::endl;
        }
    }

    return 0;
}


#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int n = 20;  
	int tab[n];


    std::srand(static_cast<unsigned>(std::time(NULL)));
    int size = rand() % n + 1;  
    for (int i = 0; i < size; ++i) {
        tab[i] = rand() % 101 - 50;  
    }

 
    std::cout << "Source array: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    
    int start = 0;
    while (start < size) {
       
        while (start < size && tab[start] <= 0) {
            ++start;
        }

        int end = start + 1;
        while (end < size && tab[end] > 0) {
            ++end;
        }


        if (end - start >= 2) {
            std::swap(tab[start], tab[end - 1]);
        }

      
        start = end;
    }

    std::cout << "Result:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


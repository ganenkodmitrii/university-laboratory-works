#include <iostream>

int main() {
    const int rows = 10;
    const int cols = 10;
    int matrix[rows][cols];

  
    std::cout << "Add el " << rows << "x" << cols << ":\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "A[" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

  
    std::cout << "matrix A[" << rows << "x" << cols << "]:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    
     int maxElement = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }
    std::cout << "The biggest element.: " << maxElement << std::endl;

    
     for (int j = 0; j < cols; j++) {
        int oddCount = 0;
        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] % 2 != 0) {
                oddCount++;
            }
        }
        std::cout << "Number of odd numbers in a column " << j << ": " << oddCount << std::endl;
    }
    int diagonalSum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i > j) {
                diagonalSum += matrix[i][j];
            }
        }
    }
    std::cout << "Sum of elements below the minor diagonal: " << diagonalSum << std::endl;

    
    return 0;
}


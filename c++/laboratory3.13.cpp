//Ganenco Dmitri Lab 3.13
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    const int maxSize = 100; 
    double x[maxSize]; 
    int n; 
    double sum = 0;
    double product = 1;
    
    // Citirea numarului de elemente din vector
    cout << "Introduce?i numarul de elemente din vector: ";
    cin >> n;
    
    // Citirea elementelor vectorului
    cout << "Introduce?i elementele vectorului: ";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        sum += x[i];
        product *= x[i];
    }
    
    // Calculul mediei aritmetice
    double mean = sum / n;
    
    // Calculul mediei geometrice
    double geometricMean = pow(product, 1.0 / n);
    
    // Calculul abaterii patratice
    double sumSquaredDeviations = 0;
    for (int i = 0; i < n; i++) {
        sumSquaredDeviations += pow(x[i] - mean, 2);
    }
    double standardDeviation = sqrt(sumSquaredDeviations / n);
    
   
    cout << "Media aritmetica: " << mean << endl;
    cout << "Media geometrica: " << geometricMean << endl;
    cout << "Abaterea patratica: " << standardDeviation << endl;
    
    return 0;
}

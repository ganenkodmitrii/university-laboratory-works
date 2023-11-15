//Ganenco Dmitri Lab 3.3
#include <iostream>
using namespace std;

int main() {
    double a, b;
    
    // Citirea valorii a
    cout << "Introduceti valoarea lui a: ";
    if (scanf("%lf", &a) != 1) {
        cout << "Valoare invalida pentru a." << endl;
        return 1;
    }

    // Citirea valorii b
    cout << "Introduceti valoarea lui b: ";
    if (scanf("%lf", &b) != 1) {
        cout << "Valoare invalida pentru b." << endl;
        return 1;
    }

    if (a != 0) {
        double x = -b / a;
        cout << "Solutia ecuatiei " << a << "x + " << b << " = 0 este x = " << x << endl;
    } else if (b != 0) {
        cout << "Ecuatia nu are solutie reala." << endl;
    } else {
        cout << "Ecuatia are o infinitate de solutii." << endl;
    }

    return 0;
}

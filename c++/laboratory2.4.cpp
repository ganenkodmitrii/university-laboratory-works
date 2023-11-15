//Ganenco Dmitri Lab 2.4
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x, c0, c1, c2, c3, c4;

    cout << "Introduceti valoarea lui x: ";
    cin >> x;

    cout << "Introduceti coeficientii c0, c1, c2, c3, c4 (in ordine): ";
    cin >> c0 >> c1 >> c2 >> c3 >> c4;

    double q = c4 * pow(x, 4) + c3 * pow(x, 3) + c2 * pow(x, 2) + c1 * x + c0;

    cout << "Valoarea lui x: " << x << endl;
    cout << "Valoarea polinomului q pentru x = " << x << " este: " << q << endl;

    return 0;
}

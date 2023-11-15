//Ganenco Dmitri Lab 3.2
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double x;
    cout << "Introduceti o valoare pentru x: ";
    cin >> x;

    double y;

    if (x < 0) {
        y = 4 * pow(x, 5) + 5 * pow(x, 4) - 2 * x + 7;
    } else if (x == 0) {
        y = 2008;
    } else {
        y = 5 * pow(x, 4) - 2 * x + 7;
    }

    cout << "Valoarea lui y este: " << y << endl;

    return 0;
}

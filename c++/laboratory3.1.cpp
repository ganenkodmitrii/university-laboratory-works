//Ganenco Dmitri Lab 3.1
#include <iostream>
using namespace std;

int main() {
    float x;
    cout << "Introduceti o valoare pentru x: ";
    cin >> x;

    float y;

    if (x >= 0) {
        y = 5 * x * x + 3 * x - 1;
    } else {
        y = 3 * x - 1;
    }

    cout << "Valoarea lui y este: " << y << endl;

    return 0;
}

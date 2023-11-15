//Ganenco Dmitri Lab 3.6
#include <iostream>
using namespace std;

int main() {
    int x = 1;

    while (x <= 10) {
        double p = 3.3 * x * x + 7.7 * x - 10;
        cout << "Pentru x = " << x << ", p = " << p << endl;
        x++;
    }

    return 0;
}

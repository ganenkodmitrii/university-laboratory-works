//Ganenco Dmitri ind.lab.2. N8
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 4;
    double b = 8;
   
    double x, y;
    cout << "Add x: ";
    cin >> x;
    cout << "Add y: ";
    cin >> y;

    double t1 = (1 / (b * b)) * ((log(y / x) + (a * x / y)));
    double t2 = -(x / a) * tan(a * x / 2) + (2 / (a * a)) * log(sin(a * x / 2));

    cout << "Valoarea lui t1 este: " << t1 << endl;
    cout << "Valoarea lui t2 este: " << t2 << endl;

    return 0;
}

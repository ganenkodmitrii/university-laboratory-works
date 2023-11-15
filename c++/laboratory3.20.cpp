//Ganenco Dmitri Lab 3.20
#include <iostream>

using namespace std;

int main() {
    int numarZi;
    
  
    cout << "Introduce?i un numar intreg din intervalul [1; 7]: ";
    cin >> numarZi;
    

    switch (numarZi) {
        case 1:
            cout << "Luni" << endl;
            break;
        case 2:
            cout << "Mar?i" << endl;
            break;
        case 3:
            cout << "Miercuri" << endl;
            break;
        case 4:
            cout << "Joi" << endl;
            break;
        case 5:
            cout << "Vineri" << endl;
            break;
        case 6:
            cout << "Sambata" << endl;
            break;
        case 7:
            cout << "Duminica" << endl;
            break;
        default:
            cout << "Numarul introdus nu este valid. Introduce?i un numar din intervalul [1; 7]." << endl;
    }
    
    return 0;
}

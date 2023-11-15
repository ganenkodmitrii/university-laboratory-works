//Ganenco Dmitri Lab 3.18
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a, b, c;
    
    cout << "Introduce?i lungimea laturii a: ";
    cin >> a;
    
    cout << "Introduce?i lungimea laturii b: ";
    cin >> b;
    
    cout << "Introduce?i lungimea laturii c: ";
    cin >> c;
    
   
    if (a + b > c && a + c > b && b + c > a) {
   
        double s = (a + b + c) / 2;
        

        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        
        cout << "Aria triunghiului este: " << area << endl;
    } else {
        cout << "Triunghiul cu aceste laturi nu exista." << endl;
    }
    
    return 0;
}

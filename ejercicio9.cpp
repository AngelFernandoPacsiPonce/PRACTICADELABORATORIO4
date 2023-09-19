
/*
Encontrar el triplete pitagórico para el cual a + b + c = 1000 
implica encontrar tres números naturales a, b y c que satisfacen la condición a² + b² = c² y a + b + c = 1000.
*/

#include <iostream>
using namespace std;

int main() {
    for (int a = 1; a < 1000; a++) {
        for (int b = a + 1; b < 1000; b++) {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                cout << a * b * c << endl;
                return 0;
            }
        }
    }
    return 0;
}
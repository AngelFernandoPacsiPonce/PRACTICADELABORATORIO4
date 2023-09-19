/*
La suma de los números primos inferiores a 10 es 2+3+5+7=17.

Encuentra la suma de todos los números primos menores de dos millones.

*/

#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long suma = 0;
    int limite = 2000000;

    for (int i = 2; i < limite; i++) {
        if (esPrimo(i)) {
            suma += i;
        }
    }

    cout << "La suma de todos los números primos menores de dos millones es: " << suma << endl;

    return 0;
}

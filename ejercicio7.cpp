/*
Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto número primo es 13.

¿Cuál es el número primo 10 001?
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
    int contador = 0;
    int numero = 2;
    
    while (contador < 10001) {
        if (esPrimo(numero)) {
            contador++;
        }
        
        numero++;
    }
    
    cout << "El 10,001º número primo es: " << numero-1 << endl;
    
    return 0;
}
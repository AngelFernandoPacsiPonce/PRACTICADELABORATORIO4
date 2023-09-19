/*
Los factores primos de 13195 son 5, 7, 13 y 29.

¿Cuál es el factor primo mayor del número 600851475143?
*/

#include <iostream>
using namespace std;

int main (){

    long long numero = 600851475143LL;
    long long primogrande = 0;

    for (long long i = 2; i <= numero; i++) {
        while (numero % i == 0) {
            primogrande = i;
            numero /= i;
        }
    }

    cout << "El factor primo más grande de 600851475143 es: " << primogrande << endl;



    return 0;
}
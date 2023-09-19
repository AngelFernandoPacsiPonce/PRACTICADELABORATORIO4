/*
Cada nuevo término en la secuencia de Fibonacci se genera sumando los dos términos anteriores. Al comenzar con 1 y 2,
 los primeros 10
términos serán:

1,2,3,5,8,13,21,34,55,89,...

Considerando los términos de la secuencia de Fibonacci cuyos valores no exceden los cuatro millones, 
encuentre la suma de los valores pares
términos.
*/

#include <iostream>
using namespace std;

int main(){

    int suma = 0;
    int fibo1 = 1;
    int fibo2 = 2;
    int limite = 4000000;

    while (fibo1 <= limite) {
        if (fibo1 % 2 == 0) {
            suma += fibo1;
        }

        int siguiente = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = siguiente;
    }

    cout << "Considerando los terminos de la secuencia de Fibonacci cuyos valores no exceden los cuatro millones,"<<endl<<" la suma de los valores pares es: " << suma << endl;



    return 0;
}
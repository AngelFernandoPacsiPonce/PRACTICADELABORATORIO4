/*

2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin dejar resto.

¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?
*/

#include <iostream>
using namespace std;

long long calcularMCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


long long calcularMCM(long long a, long long b) {
    return (a * b) / calcularMCD(a, b);
}

int main() {
    long long resultado = 1;

    for (int i = 2; i <= 20; i++) {
        resultado = calcularMCM(resultado, i);
    }

    cout << "El numero positivo más pequeño divisible por todos los números del 1 al 20 es: " << resultado << endl;

    return 0;
}

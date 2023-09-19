/*
Un número palindrómico se lee igual en ambos sentidos. El palíndromo más grande elaborado a partir del producto 
de dos números de 2 dígitos es
9009 = 91 x 99.

Encuentra el palíndromo más grande formado a partir del producto de dos números de 3 dígitos.
*/

#include <iostream>
using namespace std;
bool esPalindromo(int numero) {
    int original = numero;
    int inverso = 0;
    while (numero > 0) {
        int digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero /= 10;
    }
    return original == inverso;
}

int encontrarPalindromoMasGrande() {
    int palindromoMasGrande = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int producto = i * j;
            if (esPalindromo(producto) && producto > palindromoMasGrande) {
                palindromoMasGrande = producto;
            }
        }
    }
    return palindromoMasGrande;
}

int main() {
    int palindromo = encontrarPalindromoMasGrande();
    cout << "El palindromo mas grande formado por el producto de dos numeros de 3 digitos es: " << palindromo << endl;

    return 0;
}

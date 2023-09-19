/*


*/

#include <iostream>
using namespace std;

int main() {
    int n = 100; 
    int sumaCuadrados = 0;
    int suma = 0;

    for (int i = 1; i <= n; i++) {
        sumaCuadrados += i * i;
        suma += i;
    }

    int cuadradoDeLaSuma = suma * suma;
    int diferencia = cuadradoDeLaSuma - sumaCuadrados;

    cout << "La diferencia entre el cuadrado de la suma y la suma de los cuadrados"<< endl<< "de los primeros cien numeros naturales es: " << diferencia << endl;

    return 0;
}

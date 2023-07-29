/*Programa: factorial (recursivo)
    Canaza Chagua Yoel Nhelio
*/ 
#include <iostream>

using namespace std;

int factorialRecursivo(int n) {
    if (n > 0) {
        return n * factorialRecursivo(n - 1);
    } else {
        return 1;
    }
}

int main() {

    int numero;
    cout << "FACTORIAL \n";
    cout << "Ingrese un numero: "; cin >> numero;

    if(numero >= 0) {
        cout << "El factorial de ese numero es: " << factorialRecursivo(numero) << "\n";
    } else {
        cout << "ERROR: ingrese un numero >= 0 \n";
    }

    return 0;
}
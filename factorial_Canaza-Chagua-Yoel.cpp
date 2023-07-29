/*Programa: factorial
    Canaza Chagua Yoel Nhelio
*/ 
#include <iostream>

using namespace std;

int main() {

    int numero;
    cout << "FACTORIAL \n";
    cout << "Ingrese un numero: "; cin >> numero;

    int factorial = 1;

    for(int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    if (numero >= 0) {
        cout << factorial << "\n";
    } else {
        cout << "ERROR: ingrese un numero >= 0 \n";
    }
    

    return 0;
}
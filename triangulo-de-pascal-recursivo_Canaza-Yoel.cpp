/*Programa: Triángulo de Pascal (recursivo)
    Canaza Chagua Yoel Nhelio
*/ 
#include <iostream>

using namespace std;

unsigned long long int factorialRecursivo(int n) {
    if (n > 0) {
        return n * factorialRecursivo(n - 1);
    } else {
        return 1;
    }
}


unsigned long long int terminosPascal(int m, int n) { // MÉTODO DEL COEFICIENTE BINOMIAL
    return (factorialRecursivo(m)) / (factorialRecursivo(n) * factorialRecursivo(m - n));
}


/*
    
    METODO RECURSIVO:
    
*/

unsigned long long int pascalRecursivo(int m, int n) {
    if (n == 0 || m == n) {
        return 1;
    } else {
        return pascalRecursivo(m - 1, n) + pascalRecursivo(m - 1, n - 1);
    }
}

int main() {

    int term;

    cout << "TRIANGULO DE PASCAL " << endl;
    cout << "Ingrese el numero de filas: "; cin >> term;

    int sangria = term * 2;

    for(int i = 0; i < term; i++) {
        for(int k = 0; k <= sangria; k++) {
            cout << "  ";
        }

        for(int j = 0; j <= i; j++) {
            cout << pascalRecursivo(i, j) << "      ";
        }

        cout << "\n";
        sangria -= 2;
    }

    return 0;
}
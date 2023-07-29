//Programa sumatoria de i numeros. Canaza Chagua Yoel Nhelio
#include <iostream>

using namespace std;

int sumatoriaUnos(int i, int n) {
    if(i <= n) {
        return 1 + sumatoriaUnos(i + 1, n);
    } else {
        return 0;
    }
}

int main() {

    int i, n;

    cout << "SUMATORIA n NUMEROS 1 \n \n";

    cout << "Ingrese el primer valor del indice de la sumatoria (i): "; cin >> i;
    cout << "Ingrese el último valor del indice (n): "; cin >> n;
    
    cout << "El resultado de la sumatoria es: " << sumatoriaUnos(i, n) << "\n";

    return 0;
}
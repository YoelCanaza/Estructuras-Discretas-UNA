//Programa sumatoria n numeros i. Canaza Chagua Yoel Nhelio
#include <iostream>

using namespace std;

int sumatoriaI(int i, int n) {
    if(i <= n) {
        return i + sumatoriaI(i + 1, n);
    } else {
        return 0;
    }
}

int main() {

    int i, n;

    cout << "SUMATORIA DE i NUMEROS \n \n";
    
    cout << "Ingrese el primer valor del indice de la sumatoria (i): "; cin >> i;
    cout << "Ingrese el último valor del indice (n): "; cin >> n;

    cout << "El resultado de la sumatoria es: " << sumatoriaI(i, n) << "\n";

    return 0;
}
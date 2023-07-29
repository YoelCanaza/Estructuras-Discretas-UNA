/*Programa: fibonacci
    Canaza Chagua Yoel Nhelio
*/ 
#include <iostream>

using namespace std;

int main() {

    int numTerminos;

    cout << "SUCESION DE FIBONACCI \n";
    cout << "Ingrese el numero de terminos: "; cin >> numTerminos;

    int sucesionFib[numTerminos];
    sucesionFib[0] = 0;
    sucesionFib[1] = 1;

    for (int i = 2; i < numTerminos; i++) {
        sucesionFib[i] = sucesionFib[i-1] + sucesionFib[i-2];
    }

    for (int i = 0; i < numTerminos; i++) {
        cout << sucesionFib[i] << " | ";
    }

    return 0;
}
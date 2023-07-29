/*Programa: Hallar los números primos menores a n usando la criba de Eratóstenes
    Canaza Chagua Yoel Nhelio
*/ 

#include <iostream>

using namespace std;

void primosMenoresN(bool* arregloNumeros, int tamanoArreglo, int k = 2) {

    if(arregloNumeros[k] == true && (k*k) < tamanoArreglo) {
        for(int i = k + 1; i <= tamanoArreglo; i++) {
            if(i % k == 0) {
                arregloNumeros[i] = false;
            }
        }

        primosMenoresN(arregloNumeros, tamanoArreglo, k + 1);

    } else if(arregloNumeros[k] == false && (k*k) < tamanoArreglo) {
        primosMenoresN(arregloNumeros, tamanoArreglo, k + 1);
    }
}

int main() {

    cout << "NUMEROS PRIMOS MENORES A n \n";
    int n;
    cout << "Ingrese el valor de n: "; cin >> n;

    bool numerosHastaN[n+1];

    for(int i = 0; i < n; i++) {
        numerosHastaN[i] = true;
    }

    numerosHastaN[0] = false;
    numerosHastaN[1] = false;

    primosMenoresN(numerosHastaN, n);

    for(int i = 0; i < n; i++) {
        if(numerosHastaN[i] == true) {
            cout << i << " | ";
        }
    }

    return 0;
}
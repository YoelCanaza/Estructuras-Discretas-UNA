/*Programa: Hallar los n primeros números primos
    Canaza Chagua Yoel Nhelio
*/ 

#include <iostream>

using namespace std;

void nPrimerosPrimos(int n, int k = 2, int contPrimos = 0) { 
    int contDiv = 0;

    if(contPrimos < n) {
        for(int i = 1; i <= k; i++) {
            if(k % i == 0) {
                contDiv += 1;
            }
        }

        if(contDiv == 2) {
            cout << k << " | ";
            nPrimerosPrimos(n,k + 1, contPrimos + 1);
        } else {
            nPrimerosPrimos(n,k + 1, contPrimos);
        }
    }   
}


int main() {

    cout << "n PRIMEROS NUMEROS PRIMOS \n";
    int n;
    cout << "Ingrese el valor de n: "; cin >> n;

    nPrimerosPrimos(n);

    return 0;
}
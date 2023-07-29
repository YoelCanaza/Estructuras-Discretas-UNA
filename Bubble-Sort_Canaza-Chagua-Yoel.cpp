#include <iostream>
using namespace std;

void intercambiar (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void bubbleSortMenorMayor(int* aOrdenar, int tamanoArray) {
    bool huboIntercambio = true;

    while(huboIntercambio) {
        huboIntercambio = false;

        for(int i = 0; i < tamanoArray - 1; i++) {
            if(aOrdenar[i] > aOrdenar[i+1]) {
                intercambiar(aOrdenar[i], aOrdenar[i+1]);
                huboIntercambio = true;
            }
        }
    }
}


void bubbleSortMayorMenor(int* aOrdenar, int tamanoArray) {
    bool huboIntercambio = true;

    while(huboIntercambio) {
        huboIntercambio = false;

        for(int i = 0; i < tamanoArray - 1; i++) {
            if(aOrdenar[i] < aOrdenar[i+1]) {
                intercambiar(aOrdenar[i], aOrdenar[i+1]);
                huboIntercambio = true;
            }
        }
    }
}


int main() {

    cout << "BUBBLE SORT" << endl;

    int numElementos;
    cout << "ingrese el numero de elementos que desea ordenar: "; cin >> numElementos;
    int elementosOrdenar[numElementos];

    cout << "ingrese los elmentos: " << endl;
    for(int i = 0; i < numElementos; i++) {
        cout << i << ": "; cin >> elementosOrdenar[i];
    }

    bubbleSortMenorMayor(elementosOrdenar, numElementos);

    for(int i = 0; i < numElementos; i++) {
        cout << elementosOrdenar[i] << " ";
    }
    cout << endl;

    bubbleSortMayorMenor(elementosOrdenar, numElementos);

    for(int i = 0; i < numElementos; i++) {
        cout << elementosOrdenar[i] << " ";
    }
    cout << endl;

    return 0;
}
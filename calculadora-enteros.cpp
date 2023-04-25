#include <iostream>
#include <cmath>
using namespace std;

void pedirNumeros(int &_num1, int &_num2) {
    cout << "Ingrese el primer numero: ";
    cin >> _num1;

    cout << "Ingrese el segundo numero: ";
    cin >> _num2;
}



int main() {

    cout << "CALCULADORA" << endl;
    
    int num1, num2;
    bool cerrarAplicacion = false; 

    while (cerrarAplicacion == false) {
        cout << "a)Suma \nb)Resta \nc)Multiplicacion \nd)Division \ne)Potencia \nf)Raiz cuadrada" << endl;
        cout << "escriba 'a', 'b', 'c', 'd', 'e', o 'f' para seleccionar la operacion que desea realizar: ";
        char operacionElegida;
        cin >> operacionElegida;

        if(operacionElegida == 'a') {
            //SUMA
            int resultadoSuma;

            pedirNumeros(num1, num2);

            resultadoSuma = num1 + num2;

            cout << "La suma de ambos numeros es " << resultadoSuma << endl;
        } else if (operacionElegida == 'b') {
            // RESTA
            int resultadoResta;

            pedirNumeros(num1, num2);

            resultadoResta = num1 - num2;

            cout << "El primer numero menos el segundo numero es " << resultadoResta << endl;
        } else if (operacionElegida == 'c') {
            // MULTIPLICACIÓN
            int resultadoMultiplicacion;

            pedirNumeros(num1, num2);

            resultadoMultiplicacion = num1 * num2;

            cout << "El resultado de la multiplicacion es " << resultadoMultiplicacion << endl;
        } else if (operacionElegida == 'd') {
            // DIVISIÓN
            int resultadoDivision, residuo;

            pedirNumeros(num1, num2);

            resultadoDivision = num1/num2;
            residuo = num1 % num2;

            cout << "El cociente de la division es " << resultadoDivision << endl;
            cout << "El residuo de la division es " << residuo << endl;
        } else if ( operacionElegida == 'e') {
            //POTENCIA
            float resultadoPotencia;
            int exponente;

            cout << "Ingrese el numero(base): ";
            cin >> num1;
            cout << "Ingrese el exponente: ";
            cin >> exponente;

            resultadoPotencia = 1;

            if(exponente >= 0) {
                for(int i = 0; i < exponente; i++) {
                resultadoPotencia *= num1;
                }

            } else {
                for(int i = exponente; i < 0; i++) {
                resultadoPotencia *= num1;
                }

                resultadoPotencia = 1/resultadoPotencia;
            }

            cout << "El resultado de la potenciacion es " << resultadoPotencia << endl;
        } else if ( operacionElegida == 'f') {
            //RAÍZ CUADRADA
            cout << "Ingrese un numero: ";
            cin >> num1;

            double raizCuadrada;
            raizCuadrada = sqrt(num1);

            cout << "La raiz cuadrada de ese numero es: " << raizCuadrada << endl;
        } else {
            cout << "Opcion invalida" << endl;
        }

        cout << "¿Desea seguir utilizando la aplicacion?" << endl;
        cout << "Ecriba 'y' para si y escriba cualquier otra letra para no: ";
        cin >> operacionElegida;

        if(operacionElegida == 'y') {
            cerrarAplicacion = false;
        } else {
            cerrarAplicacion = true;
        }

    }

    return 0;
}
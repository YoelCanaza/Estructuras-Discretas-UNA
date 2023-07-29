/*Programa: fibonacci (recursivo)
    Canaza Chagua Yoel Nhelio
*/ 
#include <iostream>

using namespace std;

unsigned long long int fibonacci(int k) {
    if(k == 0 || k == 1) {
        return k;
    } else {
        return fibonacci(k - 1) + fibonacci(k - 2);
    }
}
/* Cada vez que el programa invoque a la función 'fibonacci', la función evalúa
    si el número ingresado como parámetro es igual a '0' o '1', si ese es el caso
    la función devuelve ese número. Pero si el número es mayor que '1' se generan 2 llamadas
    recursivas, en la primera se le resta 1 al argumento y en la segunda se le resta 2.
    Estas dos funciones también serán evaluadas, si su argumento es '1' o '0' devoleran ese valor
    pero si su argumento es mayor a 1, estas funciones volveran a generar 2 llamdas recursivas.
    Es decir, en caso de que el valor sea mayor a 1, se generarán más funciones recursivas, hasta que finalmente
    los argumentos sean 1 o 0.

    Ejemplo:
    fibonacci(4) (4 > 1) 
    --> return: fibonaci(3) + fibonacci(2)
            
            fibonacci(3) (3 > 1)
            --> return: fibonacci(2) + fibonacci(1)

                fibonacci(2) (2 > 1)
                --> return: fibonacci(1) + fibonacci(0)

                    fibonacci(1)
                    --> return: 1   ...(*)

                    fibonacci(0)
                    --> return: 0  ...(*)

                fibonacci(1) 
                --> return: 1     ...(*)

            fibonacci(2) (2 > 1)
            --> return: fibonacci(1) + fibonacci(0)

                fibonacci(1)
                --> return: 1     ...(*)

                fibonacci(0)
                --> return: 0     ...(*)

    
    Sumando los valores de retorno finales tenemos que fibonacci(4) = 3
    fibonacci(0) = 0
    fibonacci(1) = 1
    fibonacci(2) = 1
    fibonacci(3) = 2
    fibonacci(4) = 3     
*/


int main() {

    int numTerminos;
    cout << "SUCESION DE FIBONACCI \n";
    cout << "Ingrese el numero de terminos: "; cin >> numTerminos;

    for (int i = 0; i < numTerminos; i++) {
        cout << fibonacci(i) << " | ";
    }

    cout << endl;
    
    return 0;
}
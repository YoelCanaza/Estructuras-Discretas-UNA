#include <iostream>
using std::cout; using std::cin; using std::string; using std::endl;

int main() {
    
    int m;
    cout << "Indique el numero natural que sera tanto el dominio maximo como la relacion maxima: ";
    cin >> m;

    char matrizRelaciones[m+1][m+1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= m; j++) {
            matrizRelaciones[i][j] = '0';
        }
    }

    // PEDIR RELACIONES
    int numRelaciones;
    cout << "¿Cuantas relaciones desea ingresar?: ";
    cin >> numRelaciones;

    int a, b;

    cout << "Ingrese las relaciones '(a, b)', a y b son numeros naturales" << endl;
    char domR[m+1]; char codR[m+1];

    for(int i = 0; i < numRelaciones; i++) {
        cout << "Relacion " << i+1 << ": " << endl;
        cout << "a: "; cin >> a;
        cout << "b: "; cin >> b;

        if(a > 0 && b > 0 && a <= m && b <= m) {
            matrizRelaciones[a][b] = '1';
            domR[a] = '1';
            codR[b] = '1';
        } else {
            cout << "ERROR, los numeros ingresados deben ser numeros naturales y ser menores o iguales al numero indicado como dominio y relacion maxima" << endl;
        }
        
    }

    // DIBUJAR MATRIZ
    cout << "    ";

    for(int i = 1; i <= m; i++) {
        if(i < 10) {
            cout << i << " ";
        } else if(i >= 10 && i < m-2) {
            cout << "  ";
        } else if(i == 11 && i == m) {
            cout << "..." << i;
        } else if(i == m-2) {
            cout << "... ";
        } else if(i > m-2 && i < m) {

        } else {
            cout << i;
        }     
    } 
    
    cout << endl;

    for (int i = 1; i <= m; i++) {
        if(i < 10) {
            cout << i << " | ";
        } else {
            cout << i << "| ";
        }
        
        for (int j = 1; j <= m; j++) {
            cout << matrizRelaciones[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << endl;

    // MOSTRANDO EL DOMINIO, CODOMINIO Y LA RELACION R
    int contRelaciones = 0;
    cout << "R = {";
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= m; j++) {
            if(matrizRelaciones[i][j] == '1') {

                contRelaciones += 1; 
                if(contRelaciones < numRelaciones) {
                    cout << "(" << i << ", " << j << "), ";
                } else {
                    cout << "(" << i << ", " << j << ")";
                }
            }
        }
    }
    cout << "}" << endl;

    int numDominios = 0;
    for (int i = 0; i <= m; i++) {
        if(domR[i] == '1') {
            numDominios += 1;
        }
    }

    int contDominios = 0;
    cout << "Dom(R) = {";
    for(int i = 1; i <= m; i++) {
        if(domR[i] == '1') {
            contDominios += 1;
            if(contDominios < numDominios) {
                cout << i << ", ";
            } else {
                cout << i;
            }
        }
    }
    cout << "}" << endl;

    int numCodominios = 0;
    for (int i = 0; i <= m; i++) {
        if(codR[i] == '1') {
            numCodominios += 1;
        }
    }

    int contCodominios = 0;
    cout << "Cod(R) = {";
    for(int i = 1; i <= m; i++) {
        if(codR[i] == '1') {
            contCodominios += 1;
            if(contCodominios < numCodominios) {
                cout << i << ", ";
            } else {
                cout << i;
            }
        }
    }
    cout << "}" << endl;
    cout << endl;

    // PROPIEDADES DE MATRICES

    string pertenece = "\u2208"; // símbolo de pertenece
    string noPertenece = "\u2209"; // símbolo de no pertenece

    // ¿es reflexiva o irreflexiva?
    bool esReflexiva = true;
    int contReflex = 0;
    for(int i = 1; i <= m; i++) {
        if (matrizRelaciones[i][i] == '1') {
            contReflex += 1;
        } 
    }

    if(contReflex == m) {
        cout << "La relacion ES REFLEXIVA porque:" << endl;
        for(int i = 1; i <= m; i++) {
            if (matrizRelaciones[i][i] == '1') {
                cout << "(" << i << ", " << i << ") " << pertenece << " R" << endl; 
            } 
        }
    } else {
        esReflexiva = false;
        cout << "La relacion NO ES REFLEXIVA porque:" << endl;
        for(int i = 1; i <= m; i++) {
            if (matrizRelaciones[i][i] == '1') {
                
            } else {
                cout << "(" << i << ", " << i << ") " << noPertenece << " R" << endl;
            }
        }
    }

    if(contReflex == 0) {
        cout << "La relacion ES IRREFLEXIVA porque:" << endl;
        for(int i = 1; i <= m; i++) {
            if (matrizRelaciones[i][i] == '1') {

            } else {
                cout << "(" << i << ", " << i << ") " << noPertenece << " R" << endl;
            }
        }
    } else {
        cout << "La relacion NO ES IRREFLEXIVA porque:" << endl;
        for(int i = 1; i <= m; i++) {
            if (matrizRelaciones[i][i] == '1') {
                cout << "(" << i << ", " << i << ") " << pertenece << " R" << endl; 
            } else {

            }
        }
    }

    // ¿Es simétrica?
    bool esSimetrica = true;

    cout << endl << "Simetria: " << endl;
    for(int i = 1; i <= m; i++) {
        for(int j = i; j <= m; j++) {
            if(matrizRelaciones[i][j] == '1') {
                if(matrizRelaciones[j][i] == '1') {
                    cout << "(" << i << ", " << j << ") " << pertenece << " R y (" << j << ", " << i << ") " << pertenece << " R" << endl;
                } else {
                    esSimetrica = false;
                    cout << "(" << i << ", " << j << ") " << pertenece << " R y (" << j << ", " << i << ") " << noPertenece << " R" << " --> La relacion NO ES SIMETRICA" << endl;
                }
            } else if(matrizRelaciones[j][i] == '1') {
                esSimetrica = false;
                cout << "(" << i << ", " << j << ") " << noPertenece << " R y (" << j << ", " << i << ") " << pertenece << " R" << " --> La relacion NO ES SIMETRICA" << endl;
            }
        }
    }

    if(esSimetrica) {
        cout << "--> La relacion ES SIMETRICA" << endl;
    }

    // ¿Es asimétrica?
    bool esAsimetrica = true;

    cout << endl << "Asimetria:" << endl;

    for(int i = 1; i <= m; i++) {
        for(int j = i; j <= m; j++) {
            if(matrizRelaciones[i][j] == '1') {
                if(matrizRelaciones[j][i] == '1') {
                    esAsimetrica = false;
                    cout << "(" << i << ", " << j << ") " << pertenece << " R y (" << j << ", " << i << ") " << pertenece << " R" << " --> La relacion NO ES ASIMETRICA" << endl;
                } else {
                    cout << "(" << i << ", " << j << ") " << pertenece << " R y (" << j << ", " << i << ") " << noPertenece << " R" << endl;
                }
            } else if(matrizRelaciones[j][i] == '1') {
                cout << "(" << i << ", " << j << ") " << noPertenece << " R y (" << j << ", " << i << ") " << pertenece << " R" << endl;
            }
        }
    }

    if(esAsimetrica) {
        cout << "--> La relacion es ASIMETRICA" << endl;
    }

    // ¿Es antisimétrica?
    bool esAntisimetrica = true;

    cout << endl << "Antisimetria:" << endl;

    for(int i = 1; i <= m; i++) {
        for(int j = i+1; j <= m; j++) {
            if(matrizRelaciones[i][j] == '1') {
                if(matrizRelaciones[j][i] == '1') {
                    esAntisimetrica = false;
                    cout << "(" << i << ", " << j << ") " << pertenece << " R y (" << j << ", " << i << ") " << pertenece << " R" << " --> La relacion NO ES ANTISIMETRICA" << endl;
                } else {
                    cout << "(" << i << ", " << j << ") " << pertenece << " R y (" << j << ", " << i << ") " << noPertenece << " R" << endl;
                }
            } else if(matrizRelaciones[j][i] == '1') {
                cout << "(" << i << ", " << j << ") " << noPertenece << " R y (" << j << ", " << i << ") " << pertenece << " R" << endl;
            }
        }
    }
    
    for(int i = 1; i <= m; i++) {
        if (matrizRelaciones[i][i] == '1') {
            cout << "(" << i << ", " << i << ") " << pertenece << " R y (" << i << ", " << i << ") " << pertenece << " R, pero " << i << " = " << i << " (a=b)" << endl;
        } 
    }

    if(esAntisimetrica) {
        cout << "--> La relacion ES ANTISIMETRICA" << endl;
    }

    // ¿Es transitiva?
    bool esTransitiva = true;

    cout << endl << "Transitividad:" << endl;

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= m; j++) {
            if(matrizRelaciones[i][j] == '1') {
                for(int k = 1; k <= m; k++) {
                    if(matrizRelaciones[j][k] == '1') {
                        if(matrizRelaciones[i][k] == '1') {
                            cout << "(" << i << ", " << j << ")(" << j << ", " << k << ") --> (" << i << ", " << k << ")" << endl;
                        } else {
                            esTransitiva = false;
                            cout << "(" << i << ", " << j << ")(" << j << ", " << k << ") --> (" << i << ", " << k << ") *  --> la relacion NO ES TRANSITIVA" << endl;
                        }
                    }
                }
            }
        }
    }

    if(esTransitiva) {
        cout << "--> La relacion ES TRANSITIVA" << endl;
    }

    // ¿Es una relación de equivalencia? 
    bool esDeEquivalencia = true;

    cout << endl << "Equivalencia:" << endl;

    if (esReflexiva) {
        cout << "La relacion ES REFLEXIVA" << endl;
    } else {
        esDeEquivalencia = false;
        cout << "La relacion NO ES REFLEXIVA --> La relacion no es transitiva" << endl;
    }

    if(esSimetrica) {
        cout << "La relacion ES SIMETRICA" << endl;
    } else {
        esDeEquivalencia = false;
        cout << "La relacion NO ES SIMETRICA --> La relacion no es transitiva" << endl;
    }

    if(esTransitiva) {
        cout << "La relacion ES TRANSITIVA" << endl;
    } else {
        esDeEquivalencia = false;
        cout << "La relacion NO ES TRANSITIVA --> La relacion no es de Equivalencia" << endl;
    }
        
    if(esDeEquivalencia) {
        cout << "--> La relacion es de equivalencia" << endl;
    }

    return 0;
}

<<<<<<< HEAD

#include "ejercicio 2.h"
#include <iostream>
using namespace std;

int main() {
    const int MAX = 20;
    int n;

    // Solicitar tamaño del arreglo con validación
    do {
        cout << "Ingrese el tamaño del arreglo (maximo 20): ";
        cin >> n;
        if (n < 1 || n > MAX) {
            cout << "Error: el tamaño debe estar entre 1 y 20." << endl;
        }
    } while (n < 1 || n > MAX);

    int arregloOriginal[MAX];
    int arregloInvertido[MAX];

    // Solicitar los elementos del arreglo
    cout << "Ingrese " << n << " numeros enteros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arregloOriginal[i];
    }

    // Llamar a la función para invertir el arreglo
    invertirArreglo(arregloOriginal, arregloInvertido, n);

    // Mostrar el arreglo original
    cout << "\nArreglo original: ";
    for (int i = 0; i < n; i++) {
        cout << arregloOriginal[i] << " ";
    }

    // Mostrar el arreglo invertido
    cout << "\nArreglo invertido: ";
    for (int i = 0; i < n; i++) {
        cout << arregloInvertido[i] << " ";
    }

    cout << endl;
=======
#include "ejercicio 4.h"

int main() {
    int matriz[FILAS][COLS];

    leerMatriz(matriz);
    imprimirMatriz(matriz);

    cout << endl;
    sumaFilas(matriz);
    sumaColumnas(matriz);

    int diag = sumaDiagonal(matriz);
    cout << "Suma de la diagonal principal: " << diag << endl;

>>>>>>> 207f61199ddbec7bf2040dcd55cb8dc0cd036c19
    return 0;
}
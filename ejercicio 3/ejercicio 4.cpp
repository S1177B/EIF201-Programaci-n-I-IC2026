
#include "ejercicio 4.h"
#include <iomanip>

void leerMatriz(int matriz[FILAS][COLS]) {
    cout << "Ingrese los 9 valores de la matriz 3x3:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[FILAS][COLS]) {
    cout << "\nMatriz 3x3:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;
    }
}

void sumaFilas(int matriz[FILAS][COLS]) {
    for (int i = 0; i < FILAS; i++) {
        int suma = 0;
        for (int j = 0; j < COLS; j++) {
            suma += matriz[i][j];
        }
        cout << "Suma de la fila " << i + 1 << ": " << suma << endl;
    }
}

void sumaColumnas(int matriz[FILAS][COLS]) {
    for (int j = 0; j < COLS; j++) {
        int suma = 0;
        for (int i = 0; i < FILAS; i++) {
            suma += matriz[i][j];
        }
        cout << "Suma de la columna " << j + 1 << ": " << suma << endl;
    }
}

int sumaDiagonal(int matriz[FILAS][COLS]) {
    int suma = 0;
    for (int i = 0; i < FILAS; i++) {
        suma += matriz[i][i];
    }
    return suma;
}
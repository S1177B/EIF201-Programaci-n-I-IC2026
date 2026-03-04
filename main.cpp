
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

    return 0;
}
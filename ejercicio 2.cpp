
#include "main.cpp"
#include "ejercicio 2.h"
// Implementación de la función que invierte el arreglo
void invertirArreglo(int original[], int invertido[], int size) {
    for (int i = 0; i < size; i++) {
        invertido[i] = original[size - 1 - i];
    }
}
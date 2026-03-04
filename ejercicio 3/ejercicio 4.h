#ifndef MATRIZ_H
#define MATRIZ_H
#endif 

#include <iostream>
using namespace std;

const int FILAS = 3;
const int COLS = 3;


void leerMatriz(int matriz[FILAS][COLS]);
void imprimirMatriz(int matriz[FILAS][COLS]);
void sumaFilas(int matriz[FILAS][COLS]);
void sumaColumnas(int matriz[FILAS][COLS]);
int sumaDiagonal(int matriz[FILAS][COLS]);



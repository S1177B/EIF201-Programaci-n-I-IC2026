#include <iostream>
#include "paquetes.h"



double* crearRegistro(int& cantidad) {
    std::cout << "Ingrese la cantidad de paquetes: ";
    std::cin >> cantidad;

    double* pesos = new double[cantidad];
    return pesos;
}

void ingresarPesos(double* pesos, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        std::cout << "Peso del paquete " << i + 1 << ": ";
        std::cin >> pesos[i];
    }
}

double calcularPesoTotal(const double* pesos, int cantidad) {
    double total = 0.0;
    for (int i = 0; i < cantidad; i++) {
        total += pesos[i];
    }
    return total;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite) {
    int contador = 0;
    for (int i = 0; i < cantidad; i++) {
        if (pesos[i] > limite) contador++;
    }
    return contador;
}


const double* buscarMasPesado(const double* pesos, int cantidad) {
    if (cantidad == 0) return nullptr;

    const double* masPesado = &pesos[0];
    for (int i = 1; i < cantidad; i++) {
        if (pesos[i] > *masPesado) masPesado = &pesos[i];
    }
    return masPesado;
}
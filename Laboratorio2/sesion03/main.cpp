#include <iostream>
#include "paquetes.h"

int main() {
    int cantidad;

    
    double* pesos = crearRegistro(cantidad);

    
    ingresarPesos(pesos, cantidad);

    double total = calcularPesoTotal(pesos, cantidad);
    double promedio = total / cantidad;

    
    double limite;
    std::cout << "Ingrese el limite de peso permitido: ";
    std::cin >> limite;

    int sobreLimite = contarSobreLimite(pesos, cantidad, limite);

    const double* masPesado = buscarMasPesado(pesos, cantidad);

    std::cout << "\n----- RESULTADOS -----\n";
    std::cout << "Peso total: " << total << " kg\n";
    std::cout << "Promedio de peso: " << promedio << " kg\n";
    std::cout << "Paquetes que superan el limite: " << sobreLimite << "\n";

    if (masPesado != nullptr) {
        std::cout << "Paquete más pesado: " << *masPesado << " kg\n";
    }

    delete[] pesos;

    return 0;
}
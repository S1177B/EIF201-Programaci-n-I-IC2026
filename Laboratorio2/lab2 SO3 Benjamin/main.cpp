
#include "temperatura.h"

int main()
{
    int cantidadDias = 0;

    // 1. Crear arreglo dinámico
    double* registroTemp = crearRegistro(cantidadDias);

    // 2. Ingresar temperaturas
    ingresarTemperaturas(registroTemp, cantidadDias);

    // 3. Mostrar resultados
    mostrarResultados(registroTemp, cantidadDias);

    // 4. Liberar memoria
    delete[] registroTemp;
    registroTemp = nullptr;

    return 0;
}
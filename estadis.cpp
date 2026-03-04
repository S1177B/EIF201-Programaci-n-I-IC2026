#include <iostream>

using namespace std;

int valorMayor(int arr[], int size) {
    int mayor = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > mayor) mayor = arr[i];
    }
    return mayor;
}

int valorMenor(int arr[], int size) {
    int menor = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < menor) menor = arr[i];
    }
    return menor;
}

int sumaElementos(int arr[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) suma += arr[i];
    return suma;
}

double promedioElementos(int arr[], int size) {
    return static_cast<double>(sumaElementos(arr, size)) / size;
}

int main() {
    const int SIZE = 10;
    int numeros[SIZE];

    cout << "Ingrese 10 numeros enteros:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "\nResultados:" << endl;
    cout << "Valor mayor: " << valorMayor(numeros, SIZE) << endl;
    cout << "Valor menor: " << valorMenor(numeros, SIZE) << endl;
    cout << "Suma de elementos: " << sumaElementos(numeros, SIZE) << endl;
    cout << "Promedio: " << promedioElementos(numeros, SIZE) << endl;

    return 0;
}
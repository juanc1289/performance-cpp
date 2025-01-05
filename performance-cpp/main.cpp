#include <iostream>
#include <chrono>

/*
Resultados hasta 1M:

PC: Intel Core i5-7200U 2.50GHz
Cantidad de numeros primos hasta 1000000: 78498
Tiempo de ejecucion: 0.226117 segundos

Raspberry Pi 4: ARM Cortex-A72 1.5GHz
Cantidad de numeros primos hasta 1000000: 78498
Tiempo de ejecucion: 0.39792 segundos

Resultados hasta 10M:

PC: Intel Core i5-7200U 2.50GHz
Cantidad de numeros primos hasta 10000000: 664579
Tiempo de ejecucion: 6.07744 segundos

Raspberry Pi 4: ARM Cortex-A72 1.5GHz
Cantidad de numeros primos hasta 10000000: 664579
Tiempo de ejecucion: 9.15085 segundos

*/

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    const int limite = 10000000;
    int contadorPrimos = 0;

    // Inicia la medici�n de tiempo
    auto inicio = std::chrono::high_resolution_clock::now();

    for (int i = 2; i <= limite; ++i) {
        if (esPrimo(i)) {
            ++contadorPrimos;
        }
    }

    // Termina la medici�n de tiempo
    auto fin = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duracion = fin - inicio;

    std::cout << "Cantidad de numeros primos hasta " << limite << ": " << contadorPrimos << std::endl;
    std::cout << "Tiempo de ejecucion: " << duracion.count() << " segundos" << std::endl;

    return 0;
}

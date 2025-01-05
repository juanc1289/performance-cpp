#include <iostream>
#include <chrono>

/*
Resultado:

PC: Intel Core i5-7200U 2.50GHz
Cantidad de numeros primos hasta 1000000: 78498
Tiempo de ejecucion: 0.226117 segundos

Raspberry Pi 4: ARM Cortex-A72 1.5GHz
Cantidad de numeros primos hasta 1000000: 78498
Tiempo de ejecucion: 0.39792 segundos

*/

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    const int limite = 1000000;
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

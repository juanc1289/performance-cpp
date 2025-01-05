# Calcular Números Primos hasta 1000

Este programa calcula la cantidad de números primos hasta 1000 y mide el tiempo de ejecución. Está escrito en C++ y puede ejecutarse fácilmente en una Raspberry Pi.

## Requisitos

Asegúrate de tener instalado lo siguiente en tu Raspberry Pi:

- **Sistema operativo basado en Linux** (Raspberry Pi OS recomendado).
- **Compilador g++** (generalmente incluido en el paquete `build-essential`).

Para instalar `build-essential`, puedes ejecutar el siguiente comando en la terminal:

```bash
sudo apt update
sudo apt install build-essential
```

## Instrucciones

1. **Descarga o clona este repositorio** en tu Raspberry Pi:
   ```bash
   git clone <URL_DEL_REPOSITORIO>
   cd <NOMBRE_DEL_REPOSITORIO>
   ```

2. **Compila el programa** utilizando el compilador `g++`:
   ```bash
   g++ -o primos primos.cpp
   ```
   Esto generará un ejecutable llamado `primos`.

3. **Ejecuta el programa**:
   ```bash
   ./primos
   ```
   El programa imprimirá la cantidad de números primos encontrados y el tiempo de ejecución.

## Archivos

- `primos.cpp`: Código fuente del programa.
- `README.md`: Este archivo con las instrucciones.

## Ejemplo de salida

Cuando ejecutes el programa, verás una salida similar a la siguiente:

```
Cantidad de numeros primos hasta 1000: 168
Tiempo de ejecucion: 0.000123 segundos
```

## Notas

- Este programa utiliza la biblioteca `<chrono>` para medir el tiempo de ejecución.
- Si necesitas extender el rango de cálculo de primos, puedes modificar el valor de `limite` en el código fuente y recompilar.


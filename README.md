# funciones

Introducción a las **funciones** en **C++** separando el código en un archivo de encabezado (`.h`): lee 80 datos de un archivo y calcula su promedio y desviación estándar.

## Objetivo

Aprender a declarar y definir funciones en un archivo de encabezado y llamarlas desde el programa principal.

## Lenguaje

- **C++** (compilador `g++`)

## Archivos

| Archivo | Descripción |
|---|---|
| `desvest.h` | Funciones `leer_datos()` (lee `pulso.dat`) y `desviacion()` (calcula promedio y desviación estándar). |
| `desvest.cpp` | Programa principal. |
| `pulso.dat` | 80 mediciones de pulso cardíaco (datos de ejemplo). |

## Uso

```bash
g++ desvest.cpp -o desvest
./desvest
```

Resultado con `pulso.dat`:

```
mean =42.425
sigma= +-8.93971
```

## Fórmulas

- Promedio: x̄ = Σxᵢ / N
- Desviación estándar muestral: σ = √( Σ(xᵢ − x̄)² / (N − 1) )

## Notas

- Siempre lee exactamente **80 datos** de `pulso.dat`, que debe estar en la carpeta desde donde se ejecuta.
- Aunque la descripción original menciona clases, este repositorio usa **solo funciones**. El ejemplo con clases está en [clase](https://github.com/loaizaleo/clase).

## Repositorios relacionados

- [desviacion-estandard](https://github.com/loaizaleo/desviacion-estandard): el mismo cálculo en un solo archivo.
- [clase](https://github.com/loaizaleo/clase): el mismo cálculo con una clase.

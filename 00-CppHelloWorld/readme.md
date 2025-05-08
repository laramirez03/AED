# 00-CppHelloWorld

---

**Alumno**: Lautaro Ramírez
**Legajo**: 222.991-2

**Comisión**: K1053 - Anual
**Año**: 2025

**Profesor**: José María Solá

---

## Hello World en C++

El primer ejercicio de este trabajo consta de realizar un programa simple que imprima "Hello world" en pantalla

---

## Compilador y lenguaje

**Compilador**: g++ 14.2.0
**Lenguaje y versión**: C++17 (por defecto), C++20, C++23 (soportados por el compilador)

---

## Descripción del trabajo

Con el código visto en clase, pude realizar un programa simple que imprimiera por pantalla un "Hello world"

Compilación del código a través de la consola:
```
g++ hello.cpp -o hello.exe
```

Compilación en C++23:
```
g++ -std=c++23 hello.cpp -o hello.exe
```

**Resultado**: Se obtiene el programa en un ejecutable "**hello.exe**"

Ejecución del programa y redirección de la salida
```
hello.exe > output.txt
```

**Resultado**: Se obtiene un archivo de texto "**output.txt**" con la salida del programa
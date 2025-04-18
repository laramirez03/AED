# 00-Adicion

Trabajo #0 (Introductorio)

- Algoritmos y Estructura de datos
- K1053, Martes, Turno noche
- 2025, anual
- Lautaro Ramírez
- L.: 222.991-2
- Github: laramirez03

- Problema: Obtener del usuario dos números y mostrarle la suma

Análisis: para este problema, necesitaré:
1. Usar algún método para que el usuario pueda ingresar números
2. Usar algún método para almacenar estos números
3. Usar algún metodo para sumar ambos números
4. Mostrar por pantalla el resultado de esa suma
Modelo IPO:
Entrada -> Proceso -> Salida
Ingreso de números -> Suma -> Resultados

Solución:
Para resolver el problema de la entrada, puedo usar std::cin, esto permite que el usuario
ingrese datos en consola. Si bien puede que no sea útil en todos los casos que se presenten
a futuro, sirve para resolver este problema en particular.
Para almacenar los números utilizaré variables de tipo int (nros enteros). He decidido usar
tres -una para cada número, y otra para el resultado de la suma-, pese a que se podría idear
una solución usando dos o hasta una variable
Para la sumatoria de ambos números, le asigno a la variable "suma" un valor que proviene del
resultado de a + b, usando el método de suma incorporado en el lenguaje
Para mostrar el resultado por pantalla he optado por usar std::cout, una herramienta con la
que ya me familiaricé durante el problema anterior
Por último, pese a que no lo indica en la consigna, añado algunos detalles para que la consola
aclare al usuario que se le está pidiendo un número "A" y uno "B", y que detalle que el número
mostrado al final es el resulado de la suma

Representación textual:
Declaración de variables enteras (a, b, suma) -> Salida: pedir ingreso de "A" (cout) ->
Entrada: Lectura de "A" (cin) -> Almacenar el valor ingresado en la variable a ->
Salida: pedir ingreso de "B" (cout) -> Entrada: Lectura de "B" (cin) -> Almacenar el
valor ingresado en la variable b -> Proceso: Asignar a la variable suma el valor de la
suma entre a y b -> Salida: Mostrar el valor de la variable suma por pantalla (cout)

Representación visual:
Puede encontrarse la imagen bajo el nombre "codigo.jpg" en la carpeta del trabajo, la misma
contiene el diagrama de flujo del programa (generada por PSeInt)
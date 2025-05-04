#include <cassert>

int main() {
    assert(true and true == true);
    // assert(true and false == true); // Esto daria un error
    
    assert(true == 1); // Verifica que un booleano true es considerado un 1
    assert('a' == 'a');
    assert('a' + 1 == 'b');
    assert('A' == 65); /* Verifica que los caracteres son tratados como su codigo ASCII
    assert('A' + 'B' == 'AB'); // Esto da un error, la conclusión que obtengo es que el "+" no concatena
    cadenas, sino que suma sus valores ASCII, en el caso de  'A' y 'B' estos deberían ser 65 y 66 */
    assert('A' + 'B' == 65 + 66); // Verifica lo anterior
    // assert('ab' + 'cd' == 'abcd');
    // assert('a' + 'b' + 'c' + 'd' == 'abcd'); // Estos ejemplos tampoco verifican la asercion

    //assert('abcd'.length() == 4);
    assert(1u + 1u == 2u); // Suma de enteros no signados
    assert(-1 - 1 == -2); // Resta de enteros signados
    assert(-1 * 1 + -1 * 1 == -2);
    // assert(sizeof("abcd") == 4);
    /* La expresión de arriba dará un error, pese a que la expresión 'abcd' tiene,
    efectivamente, 4 caracteres. Esto se debe a que, al final de una cadena de 
    caracteres, siempre hay un caracter nulo que denota el final de la cadena */
    assert(sizeof("abcd") == 5);
    assert("abcd"[4] == '\0'); // Verificacion del caracter nulo 
    
    
    /* Credito Extra 6.2: Esto verifica que 10 veces 0.1 NO es lo mismo que 1.0
    assert(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 == 1.0);
    Lo más probable es que los ordenadores no puedan calcular con exactitud esta suma,
    y el resultado sea algo CERCA de 1.0, pero sin ser exactamente 1.0 */
};
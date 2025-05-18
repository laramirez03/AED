#include <cassert>
#include <string>
#include <cstring>

std::string operator"" _s(const char* str, std::size_t len) {
    return std::string(str, len);
};

int main() {
    assert(true == 1); //Verdadero
    assert(false == 0); //Verdadero
    assert(true == (3>2)); //verdadero
    assert ((2>3) == false); //verdadero

    assert('a'+1 == 'b');//verdadero
    assert('C'== 67); //verdadero
    /*assert('6' == 6); //falso */
    assert('A' + 'B' == 65 + 66); //verdadero

    assert (1u + 1u ==  2u); //Verdadero
    assert(5u / 2u == 2u);
    assert (3u - 1u == 2u);
    /* assert(221u % 5u == 11u); // Falso*/

    assert(2+2 == 4); // Suma entera
    assert(4-2 == 2); // Resta entera
    assert(2*8 == 16); // Producto entero
    assert(10/5 == 2); // Division entera
    assert(10%3 == 1); // Resto
    assert(2<3);

    assert((9.00/4.00) == 2.25); //verdadero
    assert((9.50+0.50) == 10.00); //verdadero
    assert((4.25-2.75) == 1.50); //verdadero
    //assert((5.850*3.780)== 22.113); Falso

    assert(strcat("hola", "mundo") == "holamundo"); //Verdadero
    assert(strcat("Mi", "casa") == "Micasa"); //Verdadero
    assert("ab"_s + "cd"_s == "abcd"_s);

    /* Credito Extra 6.2: Esto verifica que 10 veces 0.1 NO es lo mismo que 1.0
    assert(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 == 1.0);
    Lo más probable es que los ordenadores no puedan calcular con exactitud esta suma,
    y el resultado sea algo CERCA de 1.0, pero sin ser exactamente 1.0 */
};
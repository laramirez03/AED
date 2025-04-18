#include <iostream>
using std::cout;
using std::cin;

int main() {
    int a;
    int b;
    int suma;

    cout << "Ingrese un numero A para sumar:\n";
    cin >> a;
    cout << "Ingrese un numero B para sumar:\n";
    cin >> b;
    suma = a + b;

    cout << "La suma entre " << a << " y " << b << " es igual a: " << suma << std::endl;
    return 0;
};
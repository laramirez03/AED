#include <iostream>
#include <cassert>
#include <string>
using std::cout;
using std::string;

string frase_return(unsigned int);
void frase_void(unsigned int);

int main(){
    assert(frase_return(0) == "");
    assert(frase_return(1) == "Bart ");
    assert(frase_return(4) == "Bart Bart Bart Bart ");
}

string frase_return(unsigned int n){
    return n == 0 ? "" : "Bart " + frase_return(n - 1);
}

void frase_void(unsigned int n){
    if (n == 0)
        return;
    cout << "Bart";
    frase_void(n - 1);
}
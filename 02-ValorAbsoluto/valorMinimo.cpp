#include <cassert>
int valorMinimo(int, int);

int main(){
    assert(4 == valorMinimo(4, 8));
    assert(3 == valorMinimo(3, 3));
    return 0;
};


int valorMinimo(int a, int b){
    if (b < a)
    {
        return b;
    } else {
        return a;
    };
    
};
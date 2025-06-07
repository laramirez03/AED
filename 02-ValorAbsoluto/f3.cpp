#include <cassert>
double f3(double);

int main(){
    assert(-4.0 == f3(-4.0));
    assert(4.0 == f3(4.0));
    assert(3.0 == f3(-3.0));
    assert(-3.0 == f3(3.0));
    return 0;
};

// f: R -> R / f(x) = x si x < -3 o x > 3, f(x)= -x si -3 <= x <= 3
double f3(double x){
    if(x < -3 or x > 3){
        return x;
    } else {
        return -x;
    };
};

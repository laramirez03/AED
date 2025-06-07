#include <cassert>
int abs(int);

int main(){
    assert(3 == abs(3));
    assert(3 == abs(-3));
    return 0;
};

// a: R -> R / a(n)= |n| => a(n)= n si n >= 0, a(n)= -n si n < 0
int abs(int n){
    if (n >= 0)
    {
        return n;
    } else {
        return -n;
    };
};
#include <cassert>
#include <iostream>
double celsius(double f);
double fahrenheit(double c);
bool areNear(double, double, double = 0.001);

int main(){
    // Pruebas Celsius
	assert(areNear(17.7778, celsius(64))); 
    assert(areNear(-12.2222, celsius(10)));
    assert(areNear(23.8889, celsius(75))); 
	assert(areNear(26.9444, celsius(80.5)));
	assert(areNear(-23, celsius(-9.4)));
	assert(areNear(-30.8333, celsius(-23.5)));	
	assert(areNear(-17.0833, celsius(1.25))); 

    // Pruebas Fahrenheit
	assert(68. == fahrenheit(20));
	assert(167 == fahrenheit(75));
	assert(212 == fahrenheit(100));
	assert (75.2==fahrenheit(24));
    assert( 50.9 == fahrenheit(10.5));


    std::cout << "\nFahrenheit\tCelsius\n";
    std::cout << "-------------------------\n";

    for (double f = 0; f <= 100; f += 10) {
        std::cout << f << "\t\t" << celsius(f) << "\n";
    };

    return 0;
};

double celsius(double f){
    return 5.0/9.0*(f-32);
}; // C: R -> R / C(f) = (f - 32) * 5/9

double fahrenheit(double c){
    return c*9.0/5.0 + 32;
}; // F: R -> R / F(c) = c * 9/5 + 32

bool areNear(double a, double b, double delta){
	return (a-delta) <= b and b <=(a+delta);
};

#include <fstream>
#include <iostream>
double celsius(double f);
double fahrenheit(double c);

int main() {
    std::ofstream svg("grafico.svg");

    // Tamaño del lienzo SVG
    int width = 500;
    int height = 500;

    // Coordenadas del sistema cartesiano centrado
    int origin_x = width / 2;
    int origin_y = height / 2;

    svg << "<svg xmlns='http://www.w3.org/2000/svg' width='" << width
        << "' height='" << height << "'>\n";

    // Dibujar ejes
    svg << "<line x1='0' y1='" << origin_y << "' x2='" << width
        << "' y2='" << origin_y
        << "' stroke='black' />\n"; // eje X
    svg << "<line x1='" << origin_x << "' y1='0' x2='" << origin_x
        << "' y2='" << height << "' stroke='black' />\n"; // eje Y

    // Graficar función Celsius
    svg << "<polyline points='";
    for (int x = -100; x <= 100; x++) {
        int y = celsius(x);
        int sx = origin_x + x;
        int sy = origin_y - y;
        svg << sx << "," << sy << " ";
    }
    svg << "' fill='none' stroke='red' />\n";

    // Graficar función Fahrenheit
    svg << "<polyline points='";
    for (int x = -100; x <= 100; x++) {
        int y = fahrenheit(x);
        int sx = origin_x + x;
        int sy = origin_y - y;
        svg << sx << "," << sy << " ";
    }
    svg << "' fill='none' stroke='blue' />\n";

    // Añadir etiqueta en el punto de intersección de las funciones
    int x = -40;
    int y = -40;
    int sx = origin_x + x;
    int sy = origin_y - y;

    // Dibuja un círculo pequeño en el punto
    svg << "<circle cx='" << sx << "' cy='" << sy << "' r='3' fill='yellow' stroke='black' stroke-width='1'/>\n";

    // Añade una etiqueta al punto
    svg << "<text x='" << (sx - 40) << "' y='" << (sy - 10)
        << "' fill='yellow' stroke='black' stroke-width='0.3' font-size='12'>(-40, -40)</text>\n";

    // Añadir etiquetas para las intersecciones con los ejes
    //Funcion Fahrenheit
    x = 0;
    y = fahrenheit(0);
    sx = origin_x + x;
    sy = origin_y - y;

    svg << "<circle cx='" << sx << "' cy='" << sy << "' r='3' fill='yellow' stroke='black' stroke-width='1'/>\n";
    svg << "<text x='" << (sx) << "' y='" << (sy - fahrenheit(0) + 20)
        << "' fill='yellow' stroke='black' stroke-width='0.3' font-size='12'>(0, 32)</text>\n";
    
    x = -17.7778;
    y = 0;
    sx = origin_x + x;
    sy = origin_y - y;

    svg << "<circle cx='" << sx << "' cy='" << sy << "' r='3' fill='yellow' stroke='black' stroke-width='1'/>\n";
    svg << "<text x='" << (sx - x - 10) << "' y='" << (sy - y - 10)
        << "' fill='yellow' stroke='black' stroke-width='0.3' font-size='12'>(-17.8, 0)</text>\n";

    // Funcion Celsius
    x = 0;
    y = celsius(0);
    sx = origin_x + x;
    sy = origin_y - y;

    svg << "<circle cx='" << sx << "' cy='" << sy << "' r='3' fill='yellow' stroke='black' stroke-width='1'/>\n";
    svg << "<text x='" << (sx - 0) << "' y='" << (sy - celsius(0))
        << "' fill='yellow' stroke='black' stroke-width='0.3' font-size='12'>(0, -17.8)</text>\n";
    
    x = 32;
    y = 0;
    sx = origin_x + x;
    sy = origin_y - y;

    svg << "<circle cx='" << sx << "' cy='" << sy << "' r='3' fill='yellow' stroke='black' stroke-width='1'/>\n";
    svg << "<text x='" << (sx - x + 20) << "' y='" << (sy - y + 15)
        << "' fill='yellow' stroke='black' stroke-width='0.3' font-size='12'>(32, 0)</text>\n";


    x=0;
    y=fahrenheit(x);
    sx = origin_x + x;
    sy = origin_y - y;
    svg << "<text x='" << (sx + x + 10) << "' y='" << (sy - y - 20)
        << "' fill='blue' stroke='black' stroke-width='0.3' font-size='12'>F(x)</text>\n";

    x=100;
    y=celsius(x);
    sx = origin_x + x;
    sy = origin_y - y;
    svg << "<text x='" << (sx + 20) << "' y='" << (sy - y + 30)
        << "' fill='red' stroke='black' stroke-width='0.3' font-size='12'>C(x)</text>\n";

    svg << "</svg>";
    svg.close();

    std::cout << "SVG creado correctamente como 'grafico.svg'" << std::endl;

    return 0;
};

double celsius(double f){
    return 5.0/9.0*(f-32);
};

double fahrenheit(double c){
    return c*9.0/5.0 + 32;
};
#include <bits/stdc++.h>
using namespace std;

struct Pt { double x, y; };

static const double COS60 = 0.5;
static const double SIN60 = 0.8660254037844386;

// Dibuja un segmento como línea SVG
void svgLine(ostream& out, const Pt& a, const Pt& b, const string& color = "#000", double w = 1.0) {
    out << "<line x1=\"" << a.x << "\" y1=\"" << a.y
        << "\" x2=\"" << b.x << "\" y2=\"" << b.y
        << "\" stroke=\"" << color << "\" stroke-width=\"" << w
        << "\" stroke-linecap=\"round\"/>\n";
}

// Segmento de Koch recursivo
void koch(ostream& out, const Pt& a, const Pt& b, int depth, const string& color = "#0B84F3", double w = 1.2) {
    if (depth == 0) { svgLine(out, a, b, color, w); return; }

    // puntos a 1/3 y 2/3
    Pt p1{ a.x + (b.x - a.x) / 3.0, a.y + (b.y - a.y) / 3.0 };
    Pt p2{ a.x + 2.0*(b.x - a.x) / 3.0, a.y + 2.0*(b.y - a.y) / 3.0 };

    // pico del triángulo equilátero: rotar (p2 - p1) -60°
    double vx = p2.x - p1.x, vy = p2.y - p1.y;
    Pt p3{
        p1.x +  (vx * COS60 + vy * SIN60),
        p1.y + (-vx * SIN60 + vy * COS60)
    };

    koch(out, a,  p1, depth - 1, color, w);
    koch(out, p1, p3, depth - 1, color, w);
    koch(out, p3, p2, depth - 1, color, w);
    koch(out, p2, b,  depth - 1, color, w);
}

int main(int argc, char** argv) {
    int depth = (argc > 1) ? max(0, atoi(argv[1])) : 4;   // nivel de recursión
    int W = 900, H = 780;

    ofstream out("koch.svg");
    out << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    out << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"" << W << "\" height=\"" << H
        << "\" viewBox=\"0 0 " << W << " " << H << "\" shape-rendering=\"geometricPrecision\">\n";
    out << "<rect width=\"100%\" height=\"100%\" fill=\"white\"/>\n";

    // triángulo inicial (equilátero) centrado
    Pt A{ W * 0.15, H * 0.70 };
    Pt B{ W * 0.85, H * 0.70 };
    // vértice superior calculado (equilátero)
    double side = B.x - A.x;
    Pt C{ (A.x + B.x)/2.0, H*0.70 - side * sqrt(3.0)/2.0 };

    // trazo sutil de fondo
    svgLine(out, A, B, "#DDD", 1.0);
    svgLine(out, B, C, "#DDD", 1.0);
    svgLine(out, C, A, "#DDD", 1.0);

    // copo de nieve de Koch (3 lados)
    koch(out, A, B, depth);
    koch(out, B, C, depth);
    koch(out, C, A, depth);

    out << "</svg>\n";
    out.close();
    return 0;
}
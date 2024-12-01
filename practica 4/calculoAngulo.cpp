#include <iostream>
#include <cmath>
using namespace std;

struct Coordenada {
double x;
double y;
};

double calcularAngulo(Coordenada p1, Coordenada p2, Coordenada p3, Coordenada p4, bool engrados = false) {
double m1 = (p2.y - p1.y) / (p2.x - p1.x);
double m2 = (p4.y - p3.y) / (p4.x - p3.x);

double angulo = atan(abs((m1 - m2) / (1 + m1 * m2)));

if (engrados) {
angulo = angulo * 180 / M_PI;
}

return angulo;
}

#include <iostream>
using namespace std;

struct Coordenada {
double x;
double y;
};

bool estaenCuadrante(Coordenada c, double x_min, double x_max, double y_min, double y_max) {
return (c.x >= x_min && c.x <= x_max && c.y >= y_min && c.y <= y_max);
}

double distanciaCuadrada(Coordenada c1, Coordenada c2) {
return (c2.x - c1.x) * (c2.x - c1.x) + (c2.y - c1.y) * (c2.y - c1.y);
}

int main() {
double x_min, x_max, y_min, y_max;
int num_puntos;

cout<< "Ingrese los límites del cuadrante (los 2 limites de 'x' y los dos de 'y' :";
cin>> x_min >> x_max >> y_min >> y_max;

cout<< "Ingrese el número de puntos: ";
cin>> num_puntos;

Coordenada* puntos = new Coordenada[num_puntos];

for (int i = 0; i < num_puntos; ++i) {
cout << "Ingrese la coordenada " << i + 1 << " (x y): ";
cin >> puntos[i].x >> puntos[i].y;
    }

double max_distancia_cuadrada = 0;
Coordenada p1, p2;
for (int i = 0; i < num_puntos; ++i) {
if (!estaenCuadrante(puntos[i], x_min, x_max, y_min, y_max)) continue;
for (int j = i + 1; j < num_puntos; ++j) {
if (!estaenCuadrante(puntos[j], x_min, x_max, y_min, y_max)) continue;
double dist_cuadrada = distanciaCuadrada(puntos[i], puntos[j]);
if (dist_cuadrada > max_distancia_cuadrada) {
max_distancia_cuadrada = dist_cuadrada;
p1 = puntos[i];
p2 = puntos[j];
}}}

if (max_distancia_cuadrada > 0) {
cout << "La distancia maima encontrada en los puntos del cuadrante es: " <<(max_distancia_cuadrada) << endl;
cout << "Entre los puntos (" << p1.x << ", " << p1.y << ") y (" << p2.x << ", " << p2.y << ")" << endl;
} else {
cout << "No se encontraron puntos dentro del cuadrante." << endl;
}

Coordenada punto_base;
cout<< "Ingrese punto para calcular las distancias: ";
cin >> punto_base.x >> punto_base.y;

for (int i = 0; i < num_puntos; ++i) {
if (estaenCuadrante(puntos[i], x_min, x_max, y_min, y_max)) {
 double dist_cuadrada = distanciaCuadrada(punto_base, puntos[i]);
cout << "La distancia del punto (" << punto_base.x << ", " << punto_base.y << ") al punto ("<< puntos[i].x << ", " << puntos[i].y << ") es: " <<(dist_cuadrada) << endl;
} }

delete[] puntos;
return 0;
}

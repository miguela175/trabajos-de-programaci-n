#include <iostream>
#include <cmath>
using namespace std;

struct Coordenada {
    double x;
    double y;
};

string encontrarcuadrante(double x, double y) {
if (x > 0 && y > 0) return "Cuadrante I";
else if (x < 0 && y > 0) return "Cuadrante II";
else if (x < 0 && y < 0) return "Cuadrante III";
else if (x > 0 && y < 0) return "Cuadrante IV";
else if (x == 0 && y != 0) return "Sobre el eje Y";
else if (y == 0 && x != 0) return "Sobre el eje X";
else return "En el origen";
}

bool estanenmismalinea(Coordenada c1, Coordenada c2, Coordenada c3) {
double determinante = c1.x * (c2.y - c3.y) - c2.x * (c1.y - c3.y) + c3.x * (c1.y - c2.y);
return fabs(determinante) < 1e-9;
}

string ecuacionrecta(Coordenada c1, Coordenada c2) {
if (c1.x == c2.x) {
return
"x = " + to_string(c1.x);}
else {
double m = (c2.y - c1.y) / (c2.x - c1.x);
double b = c1.y - m * c1.x;
return "y = " + to_string(m) + "x + " + to_string(b);
    }
}

int main() {
int num_coordenadas;
cout << "Ingrese el número de coordenadas: ";
cin >> num_coordenadas;

Coordenada coordenadas[num_coordenadas];

for (int i = 0; i < num_coordenadas; ++i) {
cout << "Ingrese la coordenada " << i + 1 << " (x y): ";
cin >> coordenadas[i].x >> coordenadas[i].y;
}

for (int i = 0; i < num_coordenadas - 2; ++i) {
if (estanenmismalinea(coordenadas[i], coordenadas[i+1], coordenadas[i+2])) {
cout << "Las coordenadas (" << coordenadas[i].x << ", " << coordenadas[i].y << "), ("
<< coordenadas[i+1].x << ", " << coordenadas[i+1].y << ") y ("
<< coordenadas[i+2].x << ", " << coordenadas[i+2].y << ") están en la misma línea." << endl;
cout << "La ecuación de la línea es: " << ecuacionrecta(coordenadas[i], coordenadas[i+1]) << endl;
} else {
cout << "Las coordenadas (" << coordenadas[i].x << ", " << coordenadas[i].y << ") están en: "
<< encontrarcuadrante(coordenadas[i].x, coordenadas[i].y) << endl;
}}
return 0;
}


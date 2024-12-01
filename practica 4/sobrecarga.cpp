#include <iostream>
using namespace std;

struct Coordenada {
    double x;
    double y;
};
int verificarcruce(Coordenada p1, Coordenada p2, Coordenada p3, Coordenada p4, bool perpendiculares) {
double m1 = (p2.y - p1.y) / (p2.x - p1.x);
double m2 = (p4.y - p3.y) / (p4.x - p3.x);

if (perpendiculares) {
if (m1 * m2 == -1) return 1;
else if (m1 == m2) return 0;
else return -1;
} else {
if (m1 == m2) return 0;
else {
double c1 = p1.y - m1 * p1.x;
double c2 = p3.y - m2 * p3.x;
if (c1 == c2) return 1;
else return -1;
}}}

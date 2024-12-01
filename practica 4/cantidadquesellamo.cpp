#include <iostream>
using namespace std;

int contadorllamadas = 0;

void proceso() {
    contadorllamadas++;
    cout << "Proceso realizado." << endl;
}

int obtenerContadorLlamadas() {
    return contadorllamadas;
}

int main() {
    proceso();
    proceso();
    cout << "El proceso ha sido llamado " << obtenerContadorLlamadas() << " veces." << endl;

    return 0;
}

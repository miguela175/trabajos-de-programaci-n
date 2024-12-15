#include "C:/Users/usuario/OneDrive/Desktop/CRUD/archivos.h/controller.h"
#include <iostream>

using namespace std;

void Controller::manejarCarros() {
int opcion;
string nombreArchivo = "C:/Users/usuario/OneDrive/Desktop/CRUD/archivos.csv/carros.csv";
Carros carros;

do {
cout << "\n1. Mostrar Carros\n2. Crear Carro\n3. Borrar Carro\n4. Salir\n";
cout << "Seleccione una opción: ";
cin >> opcion;
cin.ignore();

if (opcion == 1) {
carros.mostrar(nombreArchivo);
} else if (opcion == 2) {
string modelo, marca, ano, vin;
cout << "Modelo: "; getline(cin, modelo);
cout << "Marca: "; getline(cin, marca);
cout << "Año: "; getline(cin, ano);
cout << "VIN: "; getline(cin, vin);

carros.crear(modelo, marca, ano, vin, nombreArchivo);
} else if (opcion == 3) {
string vin;
cout << "VIN del carro a borrar: "; getline(cin, vin);
carros.borrar(vin, nombreArchivo);
 }} while (opcion != 4);
cout << "Saliendo\n";
}

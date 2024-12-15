#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include "C:/Users/usuario/OneDrive/Desktop/CRUD/archivos.h/carros.h"

using namespace std;

void Carros::mostrar(const string& nombreArchivo) {
ifstream archivo(nombreArchivo);

 if (archivo.is_open()) {
 string modelo, marca, ano, vin;
 while (getline(archivo, modelo, ',') &&
getline(archivo, marca, ',') &&
getline(archivo, ano, ',') &&
getline(archivo, vin)) {
cout << "Modelo: " << modelo << ", Marca: " << marca << ", Año: " << ano << ", VIN: " << vin << endl;
  }
archivo.close();
   } else {
cerr << "No se pudo abrir el archivo " << nombreArchivo << endl;
    }
}

void Carros::crear(const string& modelo, const string& marca, const string& ano, const string& vin, const string& nombreArchivo) {
ofstream archivo(nombreArchivo, ios::app);

if (archivo.is_open()) {
archivo << modelo << "," << marca << "," << ano << "," << vin << endl;
  archivo.close();
   cout << "Carro agregado" << endl;
 } else {
    cerr << "No se pudo abrir el archivo " << nombreArchivo << endl;
    }
}

void Carros::borrar(const string& vin, const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    ofstream temp("temp.csv");

    string modelo, marca, ano, archivo_vin;
    bool encontrado = false;

if (archivo.is_open() && temp.is_open()) {
 while (getline(archivo, modelo, ',') &&
 getline(archivo, marca, ',') &&
getline(archivo, ano, ',') &&
getline(archivo, archivo_vin)) {
 if (archivo_vin != vin) {
temp << modelo << "," << marca << "," << ano << "," << archivo_vin << endl;
} else {
encontrado = true;
 }  }
 archivo.close();
 temp.close();

if (encontrado) {
 if (remove(nombreArchivo.c_str()) == 0) {
if (rename("temp.csv", nombreArchivo.c_str()) == 0) {
cout << "Carro con VIN " << vin << " borrado." << endl;
 } else {
cerr << "Error al renombrar" << endl;
} } else {
    cerr << "Error al eliminar." << endl; }
} else {
 cout << "No se encontró un carro con VIN " << vin << endl;
remove("temp.csv");
 }
} else {
cerr << "No se pudo abrir el archivo " << nombreArchivo << endl;
    }
}





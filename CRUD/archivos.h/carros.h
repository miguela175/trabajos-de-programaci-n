#ifndef CARROS_H
#define CARROS_H

#include <string>

class Carros {
public:
void mostrar(const std::string& nombreArchivo);
void crear(const std::string& modelo, const std::string& marca, const std::string& ano, const std::string& vin, const std::string& nombreArchivo);
void borrar(const std::string& vin, const std::string& nombreArchivo);
};

#endif


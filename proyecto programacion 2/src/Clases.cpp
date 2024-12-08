#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <conio.h>

using namespace std;

class Clientes {
public:
    Clientes(const string &cedula, const string &nombre, const string &apellido, 
             const string &email, const string &cantidad_vehiculos_rentados, 
             const string &direccion, const string &activo)
        : cedula(cedula), nombre(nombre), apellido(apellido), email(email), 
          cantidad_vehiculos_rentados(cantidad_vehiculos_rentados), direccion(direccion), activo(activo) {}

    string getCedula() const { return cedula; }
    void setCedula(const string &value) { cedula = value; }
    string getNombre() const { return nombre; }
    void setNombre(const string &value) { nombre = value; }
    string getApellido() const { return apellido; }
    void setApellido(const string &value) { apellido = value; }
    string getEmail() const { return email; }
    void setEmail(const string &value) { email = value; }
    string getCantidadVehiculosRentados() const { return cantidad_vehiculos_rentados; }
    void setCantidadVehiculosRentados(const string &value) { cantidad_vehiculos_rentados = value; }
    string getDireccion() const { return direccion; }
    void setDireccion(const string &value) { direccion = value; }
    string getActivo() const { return activo; }
    void setActivo(const string &value) { activo = value; }

private:
    string cedula;
    string nombre;
    string apellido;
    string email;
    string cantidad_vehiculos_rentados;
    string direccion;
    string activo;
};

class Vehiculos {
public:
    Vehiculos(const string &modelo, const string &marca, const string &placa, 
              const string &color, const string &año, const string &kilometraje, 
              const string &rentado, const string &motor, const string &precio_renta, 
              const string &ced_cliente, const string &fecha_de_entrega)
        : modelo(modelo), marca(marca), placa(placa), color(color), año(año), 
          kilometraje(kilometraje), rentado(rentado), motor(motor), precio_renta(precio_renta), 
          ced_cliente(ced_cliente), fecha_de_entrega(fecha_de_entrega) {}

    string getModelo() const { return modelo; }
    void setModelo(const string &value) { modelo = value; }
    string getMarca() const { return marca; }
    void setMarca(const string &value) { marca = value; }
    string getPlaca() const { return placa; }
    void setPlaca(const string &value) { placa = value; }
    string getColor() const { return color; }
    void setColor(const string &value) { color = value; }
    string getAño() const { return año; }
    void setAño(const string &value) { año = value; }
    string getKilometraje() const { return kilometraje; }
    void setKilometraje(const string &value) { kilometraje = value; }
    string getRentado() const { return rentado; }
    void setRentado(const string &value) { rentado = value; }
    string getMotor() const { return motor; }
    void setMotor(const string &value) { motor = value; }
    string getPrecioRenta() const { return precio_renta; }
    void setPrecioRenta(const string &value) { precio_renta = value; }
    string getCedCliente() const { return ced_cliente; }
    void setCedCliente(const string &value) { ced_cliente = value; }
    string getFechaDeEntrega() const { return fecha_de_entrega; }
    void setFechaDeEntrega(const string &value) { fecha_de_entrega = value; }

private:
    string modelo;
    string marca;
    string placa;
    string color;
    string año;
    string kilometraje;
    string rentado;
    string motor;
    string precio_renta;
    string ced_cliente;
    string fecha_de_entrega;
};

class Repuestos {
public:
    Repuestos(const string &modelo_repuesto, const string &marca_repuesto, 
              const string &nombre_repuesto, const string &modelo_carro, 
              const string &ano_carro, const string &precio_repuesto, 
              const string &existencias_repuesto)
        : modelo_repuesto(modelo_repuesto), marca_repuesto(marca_repuesto), 
          nombre_repuesto(nombre_repuesto), modelo_carro(modelo_carro), 
          ano_carro(ano_carro), precio_repuesto(precio_repuesto), 
          existencias_repuesto(existencias_repuesto) {}

    string getModeloRepuesto() const { return modelo_repuesto; }
    void setModeloRepuesto(const string &value) { modelo_repuesto = value; }
    string getMarcaRepuesto() const { return marca_repuesto; }
    void setMarcaRepuesto(const string &value) { marca_repuesto = value; }
    string getNombreRepuesto() const { return nombre_repuesto; }
    void setNombreRepuesto(const string &value) { nombre_repuesto = value; }
    string getModeloCarro() const { return modelo_carro; }
    void setModeloCarro(const string &value) { modelo_carro = value; }
    string getAnoCarro() const { return ano_carro; }
    void setAnoCarro(const string &value) { ano_carro = value; }
    string getPrecioRepuesto() const { return precio_repuesto; }
    void setPrecioRepuesto(const string &value) { precio_repuesto = value; }
    string getExistenciasRepuesto() const { return existencias_repuesto; }
    void setExistenciasRepuesto(const string &value) { existencias_repuesto = value; }

private:
    string modelo_repuesto;
    string marca_repuesto;
    string nombre_repuesto;
    string modelo_carro;
    string ano_carro;
    string precio_repuesto;
    string existencias_repuesto;
};
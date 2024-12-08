#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <conio.h>
#include <ctime>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

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

void leerArchivosvehiculo() {
    ifstream archivovehiculo("C:/Users/usuario/OneDrive/Desktop/proyecto programacion 2/bin/repuestos.csv");
    if (!archivovehiculo.is_open()) {
        cerr << "No se pudo abrir el archivo"<<endl;
        return;
    }

    string linea;
    char delimitador = ',';
    
    getline(archivovehiculo, linea);

  while (getline(archivovehiculo, linea))
  {
    stringstream stream(linea);

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

    getline(stream, modelo, delimitador);
    getline(stream, marca, delimitador);
    getline(stream, placa, delimitador);
    getline(stream, color, delimitador);
    getline(stream, año, delimitador);
    getline(stream, kilometraje, delimitador);
    getline(stream, rentado, delimitador);
    getline(stream, motor, delimitador);
    getline(stream, precio_renta, delimitador);
    getline(stream, fecha_de_entrega, delimitador);

    cout<<"====================="<<endl;
    cout<<"modelo del carro :"<<modelo<<endl;
    cout<<"marca del carro :"<<marca<<endl;
    cout<<"placa del carro :"<<placa<<endl;
    cout<<"ano del carro :"<<año<<endl;
    cout<<"kilometaje del carro :"<<kilometraje<<endl;
    cout<<"rentado :"<<rentado<<endl;
    cout<<"motor :"<<motor<<endl;
    cout<<"precio de renta :"<<precio_renta<<endl;
    cout<<"fecha de entrega :"<<fecha_de_entrega<<endl;

  }
  
    archivovehiculo.close();
}

void leerArchivosclientes() {
    ifstream archivoclientes("C:/Users/usuario/OneDrive/Desktop/proyecto programacion 2/bin/repuestos.csv");
    if (!archivoclientes.is_open()) {
        cerr << "No se pudo abrir el archivo"<<endl;
        return;
    }

    string linea;
    char delimitador = ',';
    
    getline(archivoclientes, linea);

  while (getline(archivoclientes, linea))
  {
    stringstream stream(linea);

    string cedula;
    string nombre;
    string apellido;
    string email;
    string cantidad_vehiculos_rentados;
    string direccion;
    string activo;

    getline(stream, cedula, delimitador);
    getline(stream, nombre, delimitador);
    getline(stream, apellido, delimitador);
    getline(stream, email, delimitador);
    getline(stream, cantidad_vehiculos_rentados, delimitador);
    getline(stream, direccion, delimitador);
    getline(stream, activo, delimitador);
    

    cout<<"====================="<<endl;
    cout<<"id del cliente :"<<cedula<<endl;
    cout<<"nombre del cliente :"<<nombre<<endl;
    cout<<"apellido del cliente :"<<apellido<<endl;
    cout<<"email del cliente :"<<email<<endl;
    cout<<"cantidad de vehiculos rentados :"<<cantidad_vehiculos_rentados<<endl;
    cout<<"direccion :"<<direccion<<endl;
    cout<<"activo :"<<activo<<endl;

  }
  
    archivoclientes.close();
}

void leerArchivosrepuestos() {
    ifstream archivorepuestos("C:/Users/usuario/OneDrive/Desktop/proyecto programacion 2/bin/repuestos.csv");
    if (!archivorepuestos.is_open()) {

        cerr << "No se pudo abrir el archivo"<<endl;
        return;
    }

    string linea;
    char delimitador = ',';
    
    getline(archivorepuestos, linea);

  while (getline(archivorepuestos, linea))
  {
    stringstream stream(linea);

    string modelo_repuesto;
    string marca_repuesto;
    string nombre_repuesto;
    string modelo_carro;
    string ano_carro;
    string precio_repuesto;
    string existencias_repuesto;

    getline(stream, modelo_repuesto, delimitador);
    getline(stream, marca_repuesto, delimitador);
    getline(stream, nombre_repuesto, delimitador);
    getline(stream, modelo_carro, delimitador);
    getline(stream, ano_carro, delimitador);
    getline(stream, precio_repuesto, delimitador);
    getline(stream, existencias_repuesto, delimitador);
    
    

    cout<<"====================="<<endl;
    cout<<"modelo del repuesto :"<<modelo_repuesto<<endl;
    cout<<"marca del repuesto :"<<marca_repuesto<<endl;
    cout<<"nombre del repuesto :"<<nombre_repuesto<<endl;
    cout<<"modelo del carro para el repuesto :"<<modelo_carro<<endl;
    cout<<"año del carro para el repuesto :"<<ano_carro<<endl;
    cout<<"precio del repuesto :$"<<precio_repuesto<<endl;
    cout<<"existencia del repuesto :"<<existencias_repuesto<<endl;
    

  }
  
    archivorepuestos.close();
}


void guardarRegistroClientes(const string& nuevoRegistroClientes) {
    ofstream archivoRegistroClientes("clientes.csv", ios::app);
    if (!archivoRegistroClientes.is_open()) {
        cerr << "No se pudo abrir el archivo: ";
        return;
    }

else{

  string cedula;
    string nombre;
    string apellido;
    string email;
    string cantidad_vehiculos_rentados;
    string direccion;
    string activo;
    string temp;

    cout <<"ingrese el numero de id"<<endl;
    cin >>cedula;
    cin.ignore();
    cout<<"ingrese el nombre"<<endl;
    getline(cin, nombre);
    cout<<"ingrese el apellido"<<endl;
    getline(cin, apellido);
    cout<<"ingrese el email"<<endl;
    getline(cin, email);
    cout<<"ingrese la cantidad de vehiculos rentados"<<endl;
    getline(cin, cantidad_vehiculos_rentados);
    cout<<"ingrese la direccion"<<endl;
    getline(cin, direccion);
    cout<<"ingrese si esta activo"<<endl;
    getline(cin, activo);

    archivoRegistroClientes<<cedula<<","<<nombre<<","<<apellido<<","<<email<<","<<cantidad_vehiculos_rentados<<","<<direccion<<","<<activo<<endl;
}

char confirmacion;
cout<<"esta seguro que quiere confirmar la accion?... (s/n)"<<endl;
cin>>confirmacion;

if (confirmacion=='s')
{
  cout<<"se ha confirmado la accion correctamente"<<endl;
  archivoRegistroClientes.close();
}

else{
  cout<<"no se pudo confirmar la accion"<<endl;
  return;
}
}

void guardarRegistroVehiculo(const string& nuevoRegistroVehiculo) {
    ofstream archivoRegistroVehiculo("vehiculos.csv", ios::app);
    if (!archivoRegistroVehiculo.is_open()) {
        cerr << "No se pudo abrir el archivo: ";
        return;
    }

else{

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

    cout <<"ingrese el modelo del vehiculo"<<endl;
    cin >>modelo;
    cin.ignore();
    cout<<"ingrese la marca del vehiculo"<<endl;
    getline(cin, marca);
    cout<<"ingrese la placa"<<endl;
    getline(cin, placa);
    cout<<"ingrese el color del vehiculo"<<endl;
    getline(cin, color);
    cout<<"ingrese el año del vehiculo"<<endl;
    getline(cin, año);
    cout<<"ingrese el kilometraje del vehiculo"<<endl;
    getline(cin, kilometraje);
    cout<<"ingrese si esta rentado"<<endl;
    getline(cin, rentado);
    cout<<"ingrese el motor del vehiculo"<<endl;
    getline(cin, motor);
    cout<<"ingrese el precio de la renta"<<endl;
    getline(cin, precio_renta);
    cout<<"ingrese el id del cliente"<<endl;
    getline(cin, ced_cliente);
    cout<<"ingrese la fecha de entrega"<<endl;
    getline(cin, fecha_de_entrega);

    archivoRegistroVehiculo<<modelo<<","<<marca<<","<<placa<<","<<color<<","<<año<<","<<kilometraje<<","<<rentado<<","<<motor<<","<<precio_renta<<","<<ced_cliente<<","<<fecha_de_entrega<<endl;
}
 char confirmacion;
cout<<"esta seguro que quiere confirmar la accion?... (s/n)"<<endl;
cin>>confirmacion;

if (confirmacion=='s')
{
  cout<<"se ha confirmado la accion correctamente"<<endl;

archivoRegistroVehiculo.close();
}

else{
  cout<<"no se pudo confirmar la accion"<<endl;
  return;
}
};

void guardarRegistroRepuestos(const string& nuevoRegistroRepuestos) {
    ofstream archivoRegistroRepuestos("repuestos.csv", ios::app);
    if (!archivoRegistroRepuestos.is_open()) {
        cerr << "No se pudo abrir el archivo: ";
        return;
    }

else{

string modelo_repuesto;
    string marca_repuesto;
    string nombre_repuesto;
    string modelo_carro;
    string ano_carro;
    string precio_repuesto;
    string existencias_repuesto;


    cout <<"ingrese el modelo del repuesto"<<endl;
    cin >>modelo_repuesto;
    cin.ignore();
    cout<<"ingrese la marca del repuesto"<<endl;
    getline(cin, marca_repuesto);
    cout<<"ingrese el nombre del repuesto"<<endl;
    getline(cin, nombre_repuesto);
    cout<<"ingrese el año del carro para el repuesto"<<endl;
    getline(cin, ano_carro);
    cout<<"ingrese el precio del repuesto"<<endl;
    getline(cin, precio_repuesto);
    cout<<"ingrese si existe el repuesto"<<endl;
    getline(cin, existencias_repuesto);
    
    archivoRegistroRepuestos<<modelo_repuesto<<","<<marca_repuesto<<","<<nombre_repuesto<<","<<modelo_carro<<","<<ano_carro<<","<<precio_repuesto<<","<<existencias_repuesto<<endl;
}
char confirmacion;
cout<<"esta seguro que quiere confirmar la accion?... (s/n)"<<endl;
cin>>confirmacion;

if (confirmacion=='s')
{
  cout<<"se ha confirmado la accion correctamente"<<endl;

archivoRegistroRepuestos.close();
}

else{
  cout<<"no se pudo confirmar la accion"<<endl;
  return;
}
};


void buscarDatosClientes(){

ifstream archivoDatosClientes("clientes.csv", ios::in);
if(!archivoDatosClientes){
  cout<<"no se pudo leer el archivo"<<endl;
}

else{
  string cedula;
    string nombre;
    string apellido;
    string email;
    string cantidad_vehiculos_rentados;
    string direccion;
    string activo;

    string linea;
    string nombre_cliente;
    cout<<"ingrese el nombre del cliente a buscar :"<<endl;
    cin>> nombre_cliente;
    bool existe = false;



    while (getline(archivoDatosClientes, linea))
    {
      stringstream token(linea);

      getline(token, cedula, ',');
      getline(token, nombre, ',');
      getline(token, apellido, ',');
      getline(token, email, ',');
      getline(token, cantidad_vehiculos_rentados, ',');
      getline(token, direccion, ',');
      getline(token, activo, ',');

      if(nombre_cliente.compare(nombre) == 0){

        existe = true;
        cout<<"cedula :"<<cedula<<endl;
        cout<<"nombre :"<<nombre<<endl;
        cout<<"apellido :"<<apellido<<endl;
        cout<<"email :"<<email<<endl;
        cout<<"cantidad de vehiculos rentados :"<<cantidad_vehiculos_rentados<<endl;
        cout<<"direccion :"<<direccion<<endl;
        cout<<"activo :"<<activo<<endl;}}

archivoDatosClientes.close();
if(!existe){
  cout<<"el cliente con nombre :"<<nombre<<"no existe en el archivo"<<endl<<endl;
}
}}

void buscarDatosVehiculos(){

ifstream archivoDatosVehiculos("vehiculos.csv", ios::in);
if(!archivoDatosVehiculos){
  cout<<"no se pudo leer el archivo"<<endl;
}

else{
  
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


    string linea;
    string modelo_vehiculo;
    cout<<"ingrese el modelo del vehiculo a buscar :"<<endl;
    cin>> modelo_vehiculo;
    bool existe = false;



    while (getline(archivoDatosVehiculos, linea))
    {
      stringstream token(linea);

      getline(token, modelo, ',');
      getline(token, marca, ',');
      getline(token, placa, ',');
      getline(token, color, ',');
      getline(token, año, ',');
      getline(token, kilometraje, ',');
      getline(token, rentado, ',');
      getline(token, motor, ',');
      getline(token, precio_renta, ',');
      getline(token, ced_cliente, ',');
      getline(token, fecha_de_entrega, ',');

      if(modelo_vehiculo.compare(modelo) == 0){

        existe = true;
        cout<<"modelo :"<<modelo<<endl;
        cout<<"marca :"<<marca<<endl;
        cout<<"placa :"<<placa<<endl;
        cout<<"color :"<<color<<endl;
        cout<<"año :"<<año<<endl;
        cout<<"kilometraje :"<<kilometraje<<endl;
        cout<<"rentado :"<<rentado<<endl;
        cout<<"motor :"<<motor<<endl;
        cout<<"precio de renta :"<<precio_renta<<endl;
        cout<<"cedula del cliente :"<<ced_cliente<<endl;
        cout<<"fecha de entrega :"<<fecha_de_entrega<<endl;
       
        
        }}


archivoDatosVehiculos.close();
if(!existe){
  cout<<"el vehiculo con modelo :"<<modelo<<"no existe en el archivo"<<endl<<endl;
}
}}

void buscarDatosRepuestos(){

ifstream archivoDatosRepuestos("repuestos.csv", ios::in);
if(!archivoDatosRepuestos){
  cout<<"no se pudo leer el archivo"<<endl;
}

else{
  
  string modelo_repuesto;
    string marca_repuesto;
    string nombre_repuesto;
    string modelo_carro;
    string ano_carro;
    string precio_repuesto;
    string existencias_repuesto;



    string linea;
    string modelo_repuestos;
    cout<<"ingrese el modelo del repuesto a buscar :"<<endl;
    cin>> modelo_repuestos;
    bool existe = false;



    while (getline(archivoDatosRepuestos, linea))
    {
      stringstream token(linea);

      getline(token, modelo_repuesto, ',');
      getline(token, marca_repuesto, ',');
      getline(token, nombre_repuesto, ',');
      getline(token, modelo_carro, ',');
      getline(token, ano_carro, ',');
      getline(token, precio_repuesto, ',');
      getline(token, existencias_repuesto, ',');
      
      if(modelo_repuestos.compare(modelo_repuesto) == 0){

        existe = true;
        cout<<"modelo :"<<modelo_repuesto<<endl;
        cout<<"marca :"<<marca_repuesto<<endl;
        cout<<"placa :"<<nombre_repuesto<<endl;
        cout<<"color :"<<modelo_carro<<endl;
        cout<<"año :"<<ano_carro<<endl;
        cout<<"kilometraje :"<<precio_repuesto<<endl;
        cout<<"rentado :"<<existencias_repuesto<<endl;
       
         }}

        archivoDatosRepuestos.close();
if(!existe){
  cout<<"el repuesto con modelo :"<<modelo_repuestos<<"no existe en el archivo"<<endl<<endl;
}
}}
  
bool confirmacion(){
char confirmacion;
cout<<"esta seguro que quiere confirma el cambio...? (s/n)"<<endl;
cin>>confirmacion;
if(confirmacion =='s'){
  cout<<"confirmacion exitosa"<<endl;
  return true;
}

else{
  cout<<"no se pudo confirmar la accion"<<endl;
  return false;
}

};

void MenuIngreso(){
  int opcion;
  cout << "=====Seleccione su Cargo=====\n";
  cout << "1. Opcion 1: administrador\n";
  cout << "2. Opcion 2: Manager\n";
  cout << "3. Opcion 3: Empleado\n";
  cout << "4. Opcion 4: salir\n";
  cout << "==============================\n";
  cout << "seleccione una opcion :";
  cin >> opcion;
}

void MenuAdministrador (){
  int opcion;
  cout << "========== Menú de Opciones ==========\n";
    cout << "1. Opción 1: mostrar datos de vehiculo\n";
    cout << "2. Opción 2: mostrar datos de clientes\n";
    cout << "3. Opción 3: mostrar datos de repuestos\n";
    cout << "4. Opcion 4: agregar registro de clientes\n";
    cout << "5. Opcion 5: agrear registro de vehiculos\n";
    cout << "6. Opcion 6: agregar registro de repuestos\n";
    cout << "7. Opcion 7: buscar datos de un cliente\n";
    cout << "8. Opcion 8: buscar datos de un vehiculo\n";
    cout << "9. Opcion 9: buscar datos de un repuesto\n";
    cout << "10. Opcion 10: crear copia de seguridad de clientes\n";
    cout << "11. Opcion 11: crear copia de seguridad de vehiculos\n";
    cout << "12. Opcion 12: crear copia de seguridad de repuestos\n";
    cout << "13. Opcion 13: salir\n";
    cout << "=============================================\n";
    cout << "Selecciona una opción: ";
    cin >> opcion;

switch (opcion)
      {
      case 1:
      leerArchivosvehiculo();
       break;

        case 2:
        leerArchivosclientes();
        break;

        case 3:
        leerArchivosrepuestos();
        break;
      
      case 4:
      guardarRegistroClientes("nuevoRegistroClientes");
      break;

      case 5:
      guardarRegistroVehiculo("nuevoRegistroVehiculo");
      break;

      case 6:
      guardarRegistroRepuestos("nuevoRegistroRepuestos");
      break;

      case 7:
      buscarDatosClientes();
      break;

      case 8:
      buscarDatosVehiculos();
      break;

      case 9:
      buscarDatosRepuestos();
      break;

      case 10:
      crearCopiaDeClientes("clientes");
      break;

      case 11:
      crearCopiaDeVehiculo("vehiculos");
      break;

      case 12:
      crearCopiaDeRepuestos("repuestos");
      break;

      case 13:
      cout<<"saliendo del programa"<<endl;
      getch();
      exit(1);
        break;
      default:
      cout<<"opcion no valida"<<endl;}}

void MenuManager(){
  int opcion;
 cout << "========== Menú de Opciones ==========\n";
    cout << "1. Opción 1: mostrar datos de vehiculo\n";
    cout << "2. Opción 2: mostrar datos de clientes\n";
    cout << "3. Opción 3: mostrar datos de repuestos\n";
    cout << "4. Opcion 4: buscar datos de un cliente\n";
    cout << "5. Opcion 5: buscar datos de un vehiculo\n";
    cout << "6. Opcion 6: buscar datos de un repuesto\n";
    cout << "7. Opcion 7: salir\n";
    cout << "=============================================\n";
    cout << "Selecciona una opción: ";
    cin >> opcion;

switch (opcion)
      {
      case 1:
      leerArchivosvehiculo();
        break;

        case 2:;
        leerArchivosclientes();
        break;

        case 3:
    leerArchivosrepuestos();
        break;
      
      case 4:
      buscarDatosClientes();
      break;

      case 5:
     buscarDatosVehiculos();
      break;

      case 6:
     buscarDatosRepuestos();
      break;

      case 7:
      cout<<"saliendo del programa"<<endl;
      getch();
      exit(1);
        break;
      default:
      cout<<"opcion no valida"<<endl;
      }}

void MenuEmpleado(){
  int opcion;
     cout << "1. Opción 1: mostrar datos de vehiculo\n";
    cout << "2. Opción 2: mostrar datos de clientes\n";
    cout << "3. Opción 3: mostrar datos de repuestos\n";
    cout << "4. Opcion 4: agregar registro de clientes\n";
    cout << "5. Opcion 5: agrear registro de vehiculos\n";
    cout << "6. Opcion 6: agregar registro de repuestos\n";
    cout << "7. Opcion 7: salir\n";
    cout <<"================================================\n";
    cout <<"seleccione una opcion\n";
    cin >> opcion;

switch (opcion)
      {
      case 1:
      leerArchivosvehiculo();
        break;

        case 2:;
        leerArchivosclientes();
        break;

        case 3:
    leerArchivosrepuestos();
        break;
      
      case 4:
      guardarRegistroVehiculo("nuevoRegistroVehiculo");
      break;

      case 5:
     guardarRegistroClientes("nuevoRegistroClientes");
      break;

      case 6:
     guardarRegistroRepuestos("nuevoRegistroRepuestos");
      break;

      case 7:
      cout<<"saliendo del programa"<<endl;
      getch();
      exit(1);
        break;
      default:
      cout<<"opcion no valida"<<endl;
}}


void crearCopiaDeClientes(const string& clientes) {
   
    fs::create_directory("copias_de_seguridad");

    time_t t = time(nullptr);
    tm* now = localtime(&t);
    char fecha[20];
    strftime(fecha, sizeof(fecha), "%Y%m%d", now);

    string nombredeCopia = "copias_de_seguridad/" + clientes + "_" + fecha + ".csv";

    ifstream archivoOriginalclientes(clientes + ".csv", ios::binary);
    ofstream archivoCopia(nombredeCopia, ios::binary);

    if (archivoOriginalclientes.is_open() && archivoCopia.is_open()) {
        archivoCopia << archivoOriginalclientes.rdbuf();
        archivoOriginalclientes.close();
        archivoCopia.close();
        cout << "Copia de seguridad creada para " << clientes << " en " << nombredeCopia << endl;
    } else {
        cerr << "Error al abrir los archivos" << endl;
    }
}

void crearCopiaDeVehiculo(const string& vehiculos) {
   
    fs::create_directory("copias_de_seguridad");

    time_t t = time(nullptr);
    tm* now = localtime(&t);
    char fecha[20];
    strftime(fecha, sizeof(fecha), "%Y%m%d", now);

    string nombredeCopia = "copias_de_seguridad/" + vehiculos + "_" + fecha + ".csv";

    ifstream archivoOriginalvehiculos(vehiculos + ".csv", ios::binary);
    ofstream archivoCopia(nombredeCopia, ios::binary);

    if (archivoOriginalvehiculos.is_open() && archivoCopia.is_open()) {
        archivoCopia << archivoOriginalvehiculos.rdbuf();
        archivoOriginalvehiculos.close();
        archivoCopia.close();
        cout << "Copia de seguridad creada para " << vehiculos << " en " << nombredeCopia << endl;
    } else {
        cerr << "Error al abrir los archivos" << endl;
    }
}

void crearCopiaDeRepuestos(const string& repuestos) {
   
    fs::create_directory("copias_de_seguridad");

    time_t t = time(nullptr);
    tm* now = localtime(&t);
    char fecha[20];
    strftime(fecha, sizeof(fecha), "%Y%m%d", now);

    string nombredeCopia = "copias_de_seguridad/" + repuestos + "_" + fecha + ".csv";

    ifstream archivoOriginalrepuestos(repuestos + ".csv", ios::binary);
    ofstream archivoCopia(nombredeCopia, ios::binary);

    if (archivoOriginalrepuestos.is_open() && archivoCopia.is_open()) {
        archivoCopia << archivoOriginalrepuestos.rdbuf();
        archivoOriginalrepuestos.close();
        archivoCopia.close();
        cout << "Copia de seguridad creada para " << repuestos << " en " << nombredeCopia << endl;
    } else {
        cerr << "Error al abrir los archivos" << endl;
    }
}



int main() {
    int opcion;
    cout <<"==========seleccione su cargo para el ingreso==========\n";
    cout <<"1. Opcion 1: Administrador\n";
    cout <<"2. Opcion 2: Manager\n";
    cout <<"3. Opcion 3: Empleado\n";
    cout <<"4. Opcion 4: salir\n";
    cout <<"========================================================\n";
    cout <<"ingrese una opcion :\n";
    cin>>opcion;

switch (opcion)
      {
      case 1:
      MenuAdministrador();
        break;

        case 2:;
      MenuManager();
        break;

        case 3:
    MenuEmpleado();
        break;
      
      case 4:
    cout <<"saliendo del programa\n";
    getch();
    exit(1);
      break;

      default:
      cout<<"seleccion no valida";
      }
      return 0;
}
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <conio.h>

using namespace std;


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
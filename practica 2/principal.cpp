#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>

using namespace std;

struct persona
{
string id_del_registro;
string nombre;
string genero;
int cedula;
int edad;
float peso;
float altura;

}p;

FILE *arch;

void LeerFile(){
    cout<<"leyendo..."<<endl;
    persona per;
    rewind(arch);
    while(fread(&per, sizeof(persona), 1, arch)==1);

    cout<<"id"<<per.id_del_registro<<endl;
    cout<<"nombre"<<per.nombre<<endl;
    cout<<"genero"<<per.genero<<endl;
   cout<<"cedula"<<per.cedula<<endl;
   cout<<"edad"<<per.edad<<endl;
   cout<<"peso"<<per.peso<<endl;
}

int main(){
CrearFile("datos.dat");
p.id_del_registro = 34;
p.nombre = "juan";
p.genero = "M";
p.cedula = 34567890;
p.edad = 20;
p.peso = 34,5;
EscribirFile();
CerrarFile();
AbrirFile();
LeerFile();
CerrarFile();
getch();













}

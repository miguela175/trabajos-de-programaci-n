#include <iostream>
#include <fstream>
#include <cstring>

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

void CrearFile (char *NombreArchivo){

    arch = fopen(NombreArchivo, "wb");

    if (arch)
    {
        cout<<"archivo creado"<<endl;
        }

        else{
            cout<<"ERROR: no se ha podido crear el archivo"<<endl;

        }}

void AbrirFile (char *NombreArchivo){
    
    arch = fopen(NombreArchivo, "rb");
    
}

void EscribirFile (){

cout<<"escribiendo los datos..."<<endl;
int t = fwrite(&p, sizeof(persona), 1, arch);

}

void CerrarFile (){
    if(fclose(arch)){
        cout<<"se ha cerrado el archivo"<<endl;
    }
    
else{
    cout<<"error no se ha podido cerrar el archivo"<<endl;
}
}

    




    











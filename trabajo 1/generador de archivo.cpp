#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;

struct registro
{
string nombre1 , nombre2 , correo1 , correo2;
int ci1 , ci2;
}re;

ofstream archivo("./data/archivo.txt");
{ //creacion del archivo en la carpeta data.

if (!archivo.is_open())
{
 cout<<"no se ha podido crear el archivo"<<endl;
 return 0;
}
else{
    archivo<<"Daniel 27998876 danjoc@gmail.com"<<endl;<<"Alfonzo 30214894 alfonzo@gmail.com"<<endl;
}
}

ifstream archivo("./data/archivo.txt");
{//lectura del archivo 

if(!archivo.is_open()){
cout<<"no se ha podido leer el archivo"<<endl;
}

else{
    cout<<"mi nombre es"<<re.nombre1<<endl;<<"numero de cedula"<<re.ci1<<endl;<<"mi correo es"<<re.correo1<<endl;
}
}


int main (){
re.nombre1 = "Daniel";
re.nombre2 = "Alfonzo";
re.ci1 = 27998876;
re.ci2 = 30214894;
re.correo1 = "danjoc@gmail.com";
re.correo2 = "alfonzo@gmail.com";

ofstream("./data/archivo.txt");
ifstream(); 

return 0;
}



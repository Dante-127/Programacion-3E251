#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    //abrir archivo para escritura
    ofstream archivo("archivo.txt");
    if(!archivo.is_open()){
        cerr << "Error en abrir el archivo de escritura"<<endl;
        return 1;
    }
    cout <<"Escribiendo archivo...."<<endl;
    archivo <<"Hola, mundo!"<<endl;
    archivo <<"linea 1"<<endl;
    archivo <<"linea 2"<<endl;
    archivo <<"Linea 3"<<endl;
    archivo <<"linea 4"<<endl;
    archivo <<"linea 5"<<endl;
    archivo.close();
    ifstream archivoLectura("archivo.txt");
    if(!archivoLectura.is_open()){
        cerr << "Error en abrir el archivo de lectura"<<endl;
        return 1;
    }
    cout <<"Leyendo el archivo........."<<endl;
    string linea;
    while(getline(archivoLectura, linea))
    {
        cout << linea << endl;
    }
    archivoLectura.close();
    return 0;
}
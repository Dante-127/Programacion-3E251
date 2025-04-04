#include <iostream>
using namespace std;
int a =74;
int b= 185;
int *direccion=&a;
int main(int argc, char const *argv[]){
    cout<<"int: "<<sizeof(int)<<" Bytes"<<endl;
    cout<<"float: "<<sizeof(float)<<" Bytes"<<endl;
    cout<<"double: "<<sizeof(double)<<" Bytes"<<endl;
    cout<<"bool: "<<sizeof(bool)<<" Bytes"<<endl;
    cout<<"char: "<<sizeof(char)<<" Bytes"<<endl<<endl;
    cout<<"Operador direccion"<<endl;
    cout<<"Direccion A: "<<&a<<endl;
    cout<<"Direccion B: "<<&a<<endl<<endl;
    cout<<direccion<<endl;
    cout<<*direccion<<endl;
    cout<<&direccion<<endl;
    cout<<sizeof(direccion)<<endl;
}
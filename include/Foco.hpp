#include "EstadoFoco.hpp"
#include <iostream>
class Foco  
{
private:
        EstadoFoco estado;
public:
    Foco(){
        estado = EstadoFoco::Apagado;
    }
    ~Foco() {}
    void Encender(){
        estado = EstadoFoco::Encendido;
    }
    void Apagar(){
        estado = EstadoFoco::Apagado;
    }
    void Imprimir(){
        switch (estado)
        {
        case EstadoFoco::Encendido:
        std::cout << "*" << std::endl;
            break;
        
        case EstadoFoco::Apagado:
        std::cout << "o" << std::endl;
            break;
        
                default: throw "Estado no indentificado";
            break;
        }
    }
    void Alternar(){
        if(estado== EstadoFoco::Encendido){
            estado== EstadoFoco::Apagado;
    }else{

    }
}
};
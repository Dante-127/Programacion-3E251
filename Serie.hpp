#include "Foco.hpp"

class Serie
{
private:
    Foco foquitos[10];
public:
    Serie() {}
    ~Serie() {}
    void EncenderTodo(){
        for (auto &&foco : foquitos)
        {
            foco.Encender();
        }
        
    }
    void ApagarTodo(){
        for (auto &&foco : foquitos)
        {
            foco.Apagar();
        }
    }
    void EncenderCantidad(int cantidad){

    }
    void ApagarCantidad(int cantidad){
        for (size_t i = 0; i < cantidad; i++)
        {
            foquitos[i].Apagar();
        }
        
    }
    void RecorrerDerecha(){
        for (int i = 0; i < 0; i++)
        {
            foquitos[i] = foquitos[i+1];
        }
    }
    void RecorrerIzquierda(){

    }
    void AlternarEncendido(){

    }
    void imprimir(){
        for (auto &&foco : foquitos)
        {
            foco.Imprimir();
        }
        
    }
};
#include "Foco.hpp"
#include "Serie.hpp"
#include <iostream>
int main(int argc, char const *argv[])
{
    Foco foco1;
    Foco foco2;
    
    foco1.Encender();
    foco2.Apagar();

    foco1.Imprimir();
    foco2.Imprimir();




    return 0;
}

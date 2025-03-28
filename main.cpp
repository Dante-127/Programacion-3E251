//#include "Foco.hpp"
#include "Serie.hpp"
#include <iostream>
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
using namespace std;
using namespace ftxui;
int main(int argc, char const *argv[])
{
    /*
    Foco foco1;
    Foco foco2;
    
    foco1.Encender();
    foco2.Apagar();

    foco1.Imprimir();
    foco2.Imprimir();
*/
ftxui::Screen pantalla = Screen::Create(Dimension::Full(),Dimension::Full());

auto documento = vbox(
    spinner(21,1)
);

Render(pantalla, documento);




    // Serie serieNavidenia;

    // serieNavidenia.Imprimir();
    // serieNavidenia.EncenderTodo();
    // serieNavidenia.Imprimir();
    // serieNavidenia.ApagarCantidad(5);
    // serieNavidenia.Imprimir();
    // serieNavidenia.ApagarTodo();
    // serieNavidenia.Imprimir();

    return 0;
}

#include <iostream>
#include <string>
#include <list>
using namespace std;

class persona{
    private:
    string nombre;
    string edad;
    public:
    persona (string nombre, int edad){
        this->nombre = nombre;
        this->edad =edad;
    }
};

int main(int argc, char const *argv[])
{
    list <string> nombres;
    nombres.push_back("Pablo");
    nombres.push_back("Maria");
    nombres.push_back("Carlos");
    nombres.push_back("Juan");
    
    list<int> edades;
    edades.push_back(5);
    edades.push_back(7);
    edades.push_back(10);
    edades.push_back(15);

    list<persona> personas;
    for (auto it = nombres.begin();it != nombres.end();it++)
    {
        personas.push_back(persona(*it,5));
    }
    



    return 0;
}

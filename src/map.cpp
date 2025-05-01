#include <iostream>
#include <string>
#include <map>
using namespace std;

enum TipoPokemon{
    Fuego,
    Agua,
    Electrico,
    Fantasma,
    Volador,
    Planta
};

class Pokemon{
    private:
    string nombre;
    int ataque;
    TipoPokemon tipo;

    public:
    Pokemon(string nombre, int ataque, TipoPokemon tipo){
        this ->nombre=nombre;
        this ->ataque=ataque;
        this ->tipo=tipo;

    }
};

int main(int argc, char const *argv[])
{
  map<int, Pokemon> pokedex;
  pokedex[1] = Pokemon("Bulbasour",1,TipoPokemon::Planta);
  pokedex[2] = Pokemon("Ivysaur",2,TipoPokemon::Planta);
  pokedex[3] = Pokemon("Venusaur",3,TipoPokemon::Planta);
  pokedex[4] = Pokemon("Charmander",1,TipoPokemon::Fuego);
  pokedex[5] = Pokemon("Charmeleon",2,TipoPokemon::Fuego);
  pokedex[6] = Pokemon("Charizard",3,TipoPokemon::Fuego);
  pokedex[7] = Pokemon("Squirtle",1,TipoPokemon::Agua);
  pokedex[8] = Pokemon("Wartortle",2,TipoPokemon::Agua);
  pokedex[9] = Pokemon("Blastoise",3,TipoPokemon::Agua);

  map<string, string> diccionario;
  diccionario ["Programa"] = "Serie de elementos organizados";
  diccionario ["aleatorio"] = "Que depende del azar o de la casualidad";

  
    return 0;
}
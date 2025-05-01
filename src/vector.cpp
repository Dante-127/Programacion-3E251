#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> nombres;
    nombres.emplace_back("Ramon");
    nombres.emplace_back("Segundo");
    nombres.emplace_back("Tercero");

    cout << nombres.at(2)<< endl;
    
    for (auto &&nombre : nombres)
    {
        cout << nombre <<endl;
    }
    
    
    
    return 0;
}

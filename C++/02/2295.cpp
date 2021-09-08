#include <iostream>
using namespace std;

int main()
{
    float A, G, Ra, Rg; cin >> A >> G >> Ra >> Rg;

    if (A == G)
    {
        cout << "G" << endl;
    }
    else
    {
        float preco_equivalente;
        preco_equivalente = A * Rg / Ra;
        
        if (preco_equivalente < G)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "G" << endl;
        }
        
    }
    
    return 0;
}

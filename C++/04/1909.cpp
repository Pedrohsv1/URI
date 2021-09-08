#include <iostream>

using namespace std;

int main()
{
    int J, R;
    cin >> J >> R;
    int v[J];

    for (int i = 0; i < J; i++)
    {
        v[i] = 0;
    }
    
    for (int i = 0; i < R; i++)
    {
        for (int o = 0; o < J; o++)
        {
            int pontos; cin >> pontos;
            v[o] += pontos;
        }
        
    }
    //maior
    int maior = v[0];
    int indice = 0;

    for (int i = 0; i < J; i++)
    {
        if (maior <= v[i])
        {
            maior = v[i];
            indice = i;
        }
        
    }
    cout << indice + 1 << endl;
    
    return 0;
}

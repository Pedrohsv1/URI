#include <iostream>

using namespace std;

int main()
{
    int v[3];
    int maior = 0, ind, soma = 0;
    bool igual = true, fim = false;
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
        if (v[i] > maior)
        {
            maior = v[i];
            ind = i;
        }
        

    }
    for (int i = 0; i < 3; i++)
    {
        if (igual)
        {
            for (int i = 0; i < 3; i++)
            {
                if (v[i%3] == v[(i+1)%3])
                {
                    cout << "S" << endl;
                    fim = true;
                    break;
                }
            }
            igual = false;
        }
        if (fim)
        {
            break;
        }
                     
        if (i != ind)
        {            
            soma += v[i];
            if (soma == maior)
            {
                cout << "S" << endl;
                break;
            } 
        }
        if (i == 2)
        {
            cout << "N" << endl;
            break;
        }
        
    }
    return 0;
}

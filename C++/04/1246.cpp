#include <iostream>

using namespace std;

void carro(int c, int n)
{
    int cont = 0, dinheiro = 0;
    int placas[n];
    int tamanho[n];
    for (int i = 0; i < n; i++)
    {
        char letra;
         cin >> letra;
        int p_t[2];
        if (letra == 'S')
        {
            cin >> p_t[0];
        }
        else
        {
            cin >> p_t[0] >> p_t[1];
        }

        if (letra == 'C')
        {
            if (cont + p_t[1] <= c)
            {
                cont += p_t[1];
                dinheiro += 10;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (p_t[0] == placas[i])
                {
                    cont -= tamanho[i];
                    break;
                }
                                
            }           
        }
        placas[i] = p_t[0];
        tamanho[i] = p_t[1];                
    }

    cout << dinheiro << endl;
    
}

int main()
{
    int c, n;
    while (c != 0 && n != 0)
    {       
        cin >> c >> n;
        carro(c, n);
    }
    return 0;
}
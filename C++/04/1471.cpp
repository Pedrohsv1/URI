#include <iostream>

using namespace std;

void perdido(int nadadores, int retornou)
{
    int numeros[retornou],perdidos = nadadores - retornou;
    int valores[perdidos];
    for (int i = 0; i < retornou; i++)
    {
        cin >> numeros[i];
    }

    if (nadadores == retornou)
    {
        cout << "*" << endl;
    }
    else
    {   
        int indice_perdidos = 0;

        for (int i = 1; i <= nadadores; i++)
        {
            int contador = 0;

            for (int n = 0; n < retornou; n++)
            {
                if (numeros[n] != i)
                {   
                    contador++;
                    if (contador == retornou)
                    {
                        valores[indice_perdidos] = i;
                        indice_perdidos += 1;
                    }
                }
                else
                {
                    break;
                } 
            } 
        }
        for (int i = 0; i < perdidos; i++)
        {
            if (i == perdidos - 1)
            {
                cout << valores[i] << endl;
            }
            else
            {
                cout << valores[i] << " ";
            }            
        }
    }
}   
int main()
{
    int n, r;
    while (cin >> n >> r)
    {
        perdido(n, r);
    }
    
    return 0;
}

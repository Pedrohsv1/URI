#include <iostream>

using namespace std;

int main()
{
    //quantos estao entrando na fila;
    int E; cin >> E;
    //armazena o numero de cada um na fila
    int vE[E];
    // loop para armazenar
    for (int i = 0; i < E; i++)
    {
        cin >> vE[i];
    }
    //quantos sairam da fila;
    int S; cin >> S;
    //armazenar o numero de quem vai sair
    int vS[S];
    //comparar numeros para retirar  da fila;
    for (int i = 0; i < S; i++)
    {
        cin >> vS[i];
        //comparar com o outro array
        for (int j = 0; j < E; j++)
        {
            // se for igual tira ele da fila;
            if (vS[i] == vE[j])
            {
                vE[j] = 0;
                break;
            }
            
        }
        
    }
    // contador de valores printados
    int contador = 0;
    //loop para printar na tela os que sobraram;
    for (int i = 0; i < E; i++)
    {
       // se for maior que 0( numero determinado para quem saiu da fila);
        if (vE[i] > 0)
        {
            contador += 1;
            // se for o ultimo numero acabe assim;
            if (contador == (E - S))
            {
                cout << vE[i] << endl;
                break;
            }
            // se não print assim;
            else
            {
                cout << vE[i] << " ";
            }
           
            
        }
        
    }
       
    return 0;
}

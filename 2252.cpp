#include <iostream>

using namespace std;

int contador = 1;
int main()
{
    int N; 
    while (cin >> N)
    {
        int senha[N];
        float valores[10];
        int indice = 0;

        for (int i = 0; i < 10; i++)
        {
            cin >> valores[i];
            
            
        }
        for (int i = 0; i < N; i++)
        {
            float maior = -1;
            for (int j = 0; j < 10; j++)
            {
                if (valores[j] > maior)
                {
                    maior = valores[j];
                    indice = j;
                }
            }
            senha[i] = indice;
            valores[indice] = -1;
        
        }
        cout << "Caso " << contador << ": ";
        for (int i = 0; i < N; i++)
        {
            cout << senha[i];
        }
        cout << endl;
        contador += 1;
    }
    

    return 0;
}


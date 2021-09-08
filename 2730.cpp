#include <iostream>
using namespace std;

int MDC(int a, int b)
{
    int resto;

    while(b != 0)
    {
        resto = a % b;
        a = b;
        b = resto;
    }
 
    return a;
}

int pares(int V[], int K[],int n)
{
    int contador_pares = 0;
    for (int i = 0; i < n; i++)
    {
        int auxiliarV = V[i];
        for (int j = 0; j < n; j++)
        {  
            if (auxiliarV == 0)
            {
                break;
            }
            if (K[j] == 0)
            {
                continue;
            }  
            else if (MDC(auxiliarV, K[j]) == 1)
            { 
                int aux = 0;
                for (int l = 0; l < n; l++)
                {
                    if (K[j] == V[l])
                    {
                        aux++;
                        break;
                    }
                    
                }
                for (int l = 0; l < n; l++)
                {
                    if (auxiliarV == K[l])
                    {
                        aux++;
                        break;
                    }
                    
                }
                if (aux == 2)
                {
                    contador_pares -= 1;
                    V[i] = 0;
                }
                contador_pares += 1;
            }
            
        }
    }
    return contador_pares;
}

void pares_pareados(int A[], int B[], int elementos)
{
    int soma = 0;

    soma += pares(A, B, elementos);

    soma *= 2;

    cout << soma << endl;
}
    
int main() 
{
    // N termos;
    int n;
    //Armazenar N
    cin >> n;

    while (n != 0)
    {
        //lista A e B;
        int A[n], B[n];
        // Armazenando números;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            for (int j = 0; j < i; j++)
            {
                if (A[i] == A[j])
                {
                    A[i] = 0;
                }
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
            for (int j = 0; j < i; j++)
            {
                if (B[i] == B[j])
                {
                    B[i] = 0;
                }               
            }
        }

        pares_pareados(A, B, n);

        cin >> n;
    }
    return 0;
}
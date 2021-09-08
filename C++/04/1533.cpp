#include <iostream>

using namespace std;

void o_verdadeiro(int n)
{
    int suspeitos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> suspeitos[i];
    }
    // o maior
    int maior = suspeitos[0];

    for (int i = 0; i < n; i++)
    {
        if (suspeitos[i] > maior)
        {
            maior = suspeitos[i];
        }
        
    }
    // segundo maior
    int segundo_maior = 1;

    if (suspeitos[segundo_maior-1] == maior)
    {
        segundo_maior = 2;
    }

    for (int i = 0; i < n; i++)
    {
        if (suspeitos[segundo_maior-1] < suspeitos[i] && suspeitos[i] < maior)
        {
            segundo_maior = i + 1;
        }            
    }
    cout << segundo_maior << endl;
}
int main()
{
    int n;
    while (n != 0)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        o_verdadeiro(n);
    }
    return 0;
}

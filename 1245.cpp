#include <iostream>

using namespace std;

void botas(int n)
{
    int m[n];
    char l[n];
    // armazenar valores:
    for (int i = 0; i < n; i++)
    {
        cin >> m[i]; cin >> l[i];       
    }
    //botas
    int contador = 0; int pares = 0;
    while(contador < n)
    {
        if (m[contador] != 0)
        {
            for (int i = 0; i < n; i++)
            {            
                if (m[contador] == m[i])
                {
                    if (l[contador] != l[i])
                    {
                        pares += 1;
                        m[contador] = 0;
                        m[i] = 0;
                    break;
                    }               
                }           
            }
        }        
        contador += 1;
    }
    cout << pares << endl;
}
int main()
{
    int n;
    while ( cin >> n)
    {
        botas(n);
    }
    return 0;
}
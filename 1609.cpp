#include <iostream>

using namespace std;

int contagem(int N)
{
    int carneirinhos[N], cont = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> carneirinhos[i];
        for (int k = 0; k < i; k++)
        {
            if (carneirinhos[i] == carneirinhos[k])
            {
                carneirinhos[i] = -1;
            }
            
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        if (carneirinhos[i] >= 0)
        {
            
            cont += 1;
        }
        
    }
    return cont;
    
    

    
}
int main()
{
    int T; cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n, carneiros;
        cin >> n;
        carneiros = contagem(n);
        cout << carneiros << endl;
    }  
    return 0;
}

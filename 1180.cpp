#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int v[n];
    // armazenar n valores
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // menor
    int menor = v[0]; int pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
            pos = i;
        }   
    }
    cout << "Menor valor: " << menor << endl;
    cout <<  "Posicao: " << pos << endl;

    
    return 0;
}

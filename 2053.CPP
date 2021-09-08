#include <iostream>

using namespace std;

int n;

int main ()
{
    cin >> n;
    n++;
    int b[n];
    int aux[n];
    int diglet[n];

    for (int i = 1; i < n; i++)
    {
        cin >> b[i];
        diglet[i] = i;
    }
    int cont = 0, t = 0;
    while (true)
    {
        cont = 0;
        for (int i = 1; i < n; i++)
        {
            aux[b[i]] = diglet[i];
        }
        for (int i = 1; i < n; i++)
        {
            diglet[i] = aux[i];
            cout << diglet[i] << " ";
        }
        cout << endl;
        for (int i = 1; i < n; i++)
        {
            if (diglet[i] == i)
            {
                cont += 1;
            }
            
        }
        t += 1;   
        if (cont == n-1)
        {
            break;
        }   
    }
    cout << t << endl; 
    return 0;
}
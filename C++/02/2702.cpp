#include <iostream>

using namespace std;

int main()
{
    int comidas[3];
    int passageiros[3];
    int passando_a_fome = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> comidas[i];
    } 
    for (int i = 0; i < 3; i++)
    {
        cin >> passageiros[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (comidas[i] < passageiros[i])
        {
           passando_a_fome += passageiros[i] - comidas[i];
        }
        
    }
    cout << passando_a_fome << endl;
    

    return 0;
}
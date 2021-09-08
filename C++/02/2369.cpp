#include <iostream>

using namespace std;

int main()
{
    int total, consumo; cin >> consumo;
    int k = 7, x = 0, y = 0, z = 0;

    if (consumo < 10)
    {
        total = k + x * 1 + y * 2 + z * 5;
    }
    else
    {
        if (consumo > 30)
        {
            x = 20;
            if (consumo > 100)
            {
                y = 70;
                z = consumo - 100;
                total = k + x * 1 + y * 2 + z * 5;
            }
            else
            {
                y = consumo - 30;
                total = k + x * 1 + y * 2 + z * 5;
            }
            
        }
        else
        {
            x = consumo - 10;
            total = k + x * 1 + y * 2 + z * 5;
        }
        
    }
    cout << total << endl;
    return 0;
}

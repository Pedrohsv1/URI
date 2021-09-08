#include <iostream>

using namespace std;

int l, h;
int f1[2], f2[2];
bool cabe = false;

int main()
{
    cin >> l >> h;
    cin >> f1[0] >> f1[1];
    cin >> f2[0] >> f2[1];

    for (int i = 0; i < 2; i++)
    {
        if (f1[0] + f2[i] <= l)
        {
            if (f1[1] <= h && f2[(i+1)%2] <= h)
            {
                cabe = true;
            }
            
        }
        if (f1[0] + f2[i] <= h)
        {
            if (f1[1] <= l && f2[(i+1)%2] <= l)
            {
                cabe = true;
            }
            
        }
    }
    for (int i = 0; i < 2; i++)
    {
        if (f1[1] + f2[i] <= l)
        {
            if (f1[0] <= h && f2[(i+1)%2] <= h)
            {
                cabe = true;
            }
            
        }
        if (f1[1] + f2[i] <= h)
        {
            if (f1[0] <= l && f2[(i+1)%2] <= l)
            {
                cabe = true;
            }
            
        }
        
    }
    if (cabe)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
    


    return 0;
}
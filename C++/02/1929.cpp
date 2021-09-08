#include <iostream>

using namespace std;

bool tri(int a, int b, int c)
{
    if (a + b > c && c + b > a && c + a > b)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int l[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> l[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (tri(l[i % 4], l[(i+1) % 4], l[(i+2) % 4]))
        {
            cout << "S" << endl;
            break;
        }
        if (i == 3)
        {
            cout << "N" << endl;
        }
        
    }
    
    
    return 0;
}

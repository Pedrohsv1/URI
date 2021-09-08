#include <iostream>
 
using namespace std;
 
int main() 
{   
    int day1; 
    int day2;
    char nova = "nova", cheia = "cheia";
    cin >> day1 >> day2;
    
    if (day1 < day2)
    {
        if (0 <= day2 && day2 <= 2)
        {
            cout << nova << endl;
        }
        else if (day2 <= 96)
        {
            cout << "crescente" << endl;
        }
        else
        {
            cout << cheia << endl;
        }        
    }
    else
    {
        if (0 <= day2 && day2 <=2)
        {
            cout << nova << endl;
        }
        else if (day2 <= 96)
        {
            cout << "minguante" << endl;
        }
        else
        {
            cout << cheia << endl;
        }
        
    }
    
 
    return 0;
}
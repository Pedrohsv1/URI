#include <iostream>
 
using namespace std;

int A[4], total = 0;

int main() {
    
    cin >> A[1] >> A[2] >> A[3];

    int eficiencia = 10000;

    for (int i = 1; i < 3 + 1; i++)
    {
        if (i == 1)
        {
            total = A[2] * 2 + A[3] * 4;
        }
        else if (i == 2)
        {
            total = A[3] * 2 + A[1] * 2;
        }
        else
        {
            total = A[2] * 2 + A[1] * 4;
        }
        if (total < eficiencia)
        {
            eficiencia = total;
        }
    }
    cout << eficiencia << endl;

    return 0;
}
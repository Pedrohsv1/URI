#include <iostream>
 
using namespace std;
 
int main() {
    
    // h = 70  c = 160
    int B, T;
    // esquerda - felix / direita - marzia
    int area, felix;

    cin >> B >> T;
    // (b + B) * h / 2
    felix = (T + B) * 70 / 2;
    area = 70 * 160;

    if (felix > area / 2)
    {
        cout << "1" << endl;
    }
    else if (felix == area / 2)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "2" << endl;
    }
    return 0;
}
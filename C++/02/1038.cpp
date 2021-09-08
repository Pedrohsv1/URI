#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float lanches[5] = {4, 4.50, 5, 2, 1.5};
    int n, qtd;
    cin >> n >> qtd;
    cout << fixed;
    cout << "Total: R$ " << setprecision(2) << lanches[n-1] * qtd << endl;
    return 0;
}

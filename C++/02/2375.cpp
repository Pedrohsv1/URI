#include <iostream>
 
using namespace std;
 
int main() {
 
    int diametro_bola; cin >> diametro_bola;// armazenou o diametro da bola.
    int a, l, p; cin >> a >> l >> p;// armazenou altura; largura; profundidade.

    if (diametro_bola <= a && diametro_bola <= l && diametro_bola <= p)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
    
 
    return 0;
}
#include <iostream>
    
using namespace std;

int main()
{
    float n1, n2, n3, p1, p2, p3, m;
        cout << "Digite o valor da primeira nota: "; cin >> n1;
            cout << "Digite o peso: "; cin >> p1;
        cout << "Digite o valor da segunda nota: "; cin >> n2;
            cout << "Digite o peso: "; cin >> p2;
        cout << "Digite o valor da terceira nota: "; cin >> n3;
            cout << "Digite o peso: "; cin >> p3;
    m = n1*p1+n2*p2+n3*p3/p1+p2+p3;
    cout << "A média ponderada das notas é: " <<m << endl;

    
    return 0;
}

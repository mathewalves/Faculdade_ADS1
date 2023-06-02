#include <iostream>
#include <math.h>
#include <locale.h>
    
using namespace std;

int main()
{
int num1, num2, num3, num4, soma;

    cout << "Digite um número: "; cin >> num1;
    cout << "Digite um número: "; cin >> num2;
    cout << "Digite um número: "; cin >> num3;
    cout << "Digite um número: "; cin >> num4;
        soma = num1 + num2 + num3 + num4;
    cout << "O resultado dos 4 números é: " << soma <<endl;
    
    return 0;
}

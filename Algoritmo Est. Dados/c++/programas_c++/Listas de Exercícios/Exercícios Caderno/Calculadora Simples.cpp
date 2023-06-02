#include <iostream>
#include <math.h>
    
using namespace std;

int main()
{
float num1, num2;

//Recebe os Dados
    cout << "Digite o primeiro número: "; cin >> num1;
    cout << "Digite o segundo número: "; cin >> num2;

//Exibindo as operações
    cout << "Soma: " << num1+num2 << endl;
    cout << "Subtração: " << num1-num2 << endl;
    cout << "Multiplicação: " << num1*num2 << endl;
    cout << "Divisão: " << num1/num2 << endl;
    cout << "Porcentagem: " << (num1*num2)/100.0 << endl;
    
    return 0;
}

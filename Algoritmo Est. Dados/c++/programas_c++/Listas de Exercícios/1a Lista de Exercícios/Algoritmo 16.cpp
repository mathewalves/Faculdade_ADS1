#include <iostream>
#include <locale.h>
#include <math.h>

//   Construa um algoritmo que leia o salário de um funcionário e o percentual de
//   aumento, calcule e mostre o valor do novo salário.
    
using namespace std;

float salario, aum_salario, porcen;

int main()
{
    cout << "\n\t\tCalcular aumento";

    cout << "\nDigite o valor do salário: ";
    cin >> salario;

    cout << "\nDigite a porcentagem do aumento: ";
    cin >> porcen;
    
    aum_salario = salario / 100 * porcen + salario;

    cout << "\nO valor do novo salario é: " << aum_salario;
    cout << "\n";
   

    cout << "\n";
    
    
    return 0;
}

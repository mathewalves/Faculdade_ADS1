#include <iostream>
#include <math.h>
#include <locale.h>


// Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o novo
// salário, sabendo-se que este sofre um aumento de 25%. 
// Experimente multiplicar o
// salário por 1.25.

    
using namespace std;
float salario, aum_salario, expe;

int main()
{
    cout << "\n\t\t25% de aumento";
    cout << "\nDigite o valor do salário: ";
    cin >> salario;
    aum_salario = salario / 100 * 25 + salario;
    cout << "\nO valor do novo salario é: " << aum_salario;
    cout << "\n";
    expe = salario * 1.25;
    cout << "Exp: " << expe;
    cout << "\n";
    
    
    return 0;
}

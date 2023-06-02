#include <iostream>
#include <math.h>
#include <locale.h>


//  Faça um algoritmo que leia o custo de um espetáculo teatral e o preço do convite
//  desse espetáculo. O algoritmo deve calcular e mostrar a quantidade de convites
// que devem ser vendidos para que pelo menos o custo do espetáculo seja
// alcançado

    
using namespace std;

float cust_esp, cust_conv;
int result;

int main()
{
    cout << "\n\t\tCalcular valor minimo para espetáculo";
    cout << "\n";
    cout << "\n Digite o valor de custo do espetáculo: "; cin >> cust_esp;
    cout << "\n Digite o valor do convite: "; cin >> cust_conv;
    result = cust_esp / cust_conv;
    cout << "\n O minimo de convites que devem ser vendidos para pagar o espetáculo é: " << result;
    cout << "\n";

    
    
    return 0;
}

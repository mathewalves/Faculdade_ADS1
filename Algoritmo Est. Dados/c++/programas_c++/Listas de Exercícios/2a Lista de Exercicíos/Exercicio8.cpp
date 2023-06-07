#include <iostream>
#include <math.h>
#include <locale.h>

// Faça um algoritmo que leia um valor do tipo inteiro e verifique se esse número é
// par ou ímpar.
    
using namespace std;

int v1;

int main()
{

cout << "\n\t\tVerificador de número impar ou par";

    cout << "\nDigite um número: "; cin >> v1;
    if (v1%2==0){
        cout<< "\nO num é par";

    } else {
        cout << "\nO num é impar";
    }
    cout << "\n";

    
    
    return 0;
}

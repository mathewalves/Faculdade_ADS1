#include <iostream>
#include <math.h>
#include <locale.h>



// Faça um algoritmo que leia um valor em quilometro e transforme-o para metros.
// Imprima o resultado.


    
using namespace std;

float km, m;

int main()
{
    cout << "\n\t\t Converter KM para M";
    cout << "\nDigite o KM: ";
    cin >> km;
    m = km * 1000;
    cout << "\nO valor convertido em metros é de: " << m;
    cout << "\n";
    
    
    return 0;
}

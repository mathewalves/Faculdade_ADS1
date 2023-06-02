#include <iostream>
#include <math.h>
#include <locale.h>



//  Faça um algoritmo que leia um valor em Real e o valor da cotação do dólar do dia.
//  Calcule e mostre o valor lido em Real transformado p/ dólares.
    


using namespace std;

float real, cot_dolar, conv_dolar;

int main()
{
    cout << "\n\t\tCotação Dolar";
    cout << "\nDigite um valor em Real: ";
    cin >> real;
    cout << "\nDigite o valor atual do dólar: ";
    cin >> cot_dolar;

    conv_dolar = real / cot_dolar;

    cout << "\nA conversão de real para dólar é de: " << conv_dolar;
    cout << "\n";
    
    
    return 0;
}

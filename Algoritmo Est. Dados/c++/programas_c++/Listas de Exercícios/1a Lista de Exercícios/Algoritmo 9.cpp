#include <iostream>
#include <math.h>
#include <locale.h>


// Escreva um algoritmo que leia o peso de uma pessoa, calcule e mostre:
// • O novo peso caso a pessoa engorde 15% sobre o peso digitado;
// • O novo peso caso a pessoa emagreça 20% sobre o peso digitado.




    
using namespace std;

float peso, engord, emagr;

int main()
{
cout << "\n\t\tCalcular Peso";

    cout << "\nDigite o seu peso atual: ";
    cin >> peso;
    engord = peso/100*15+peso*1;
    emagr = peso-peso/100*20;
    cout << "\nCaso engorde 15% o seu peso sera de: " << engord;
    cout << "\nCaso emagreca 20% o seu peso sera de: " << emagr;
    cout << "\n";

    
    
    return 0;
}

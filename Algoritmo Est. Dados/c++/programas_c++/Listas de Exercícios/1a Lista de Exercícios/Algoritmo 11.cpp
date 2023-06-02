#include <iostream>
#include <locale.h>
#include <math.h>


// Escreva um algoritmo que leia o peso de uma pessoa, aqui na Terra. Em seguida
// calcule e mostre qual será o peso lido em Marte e em Vênus. Sabe-se que a
// gravidade relativa em Marte é 0.38 e em Vênus é 0.88. A fórmula para o cálculo do
// peso, fora da Terra, considerando a gravidade relativa é:  pes_planeta = pes_terra / 10 * peso

    
using namespace std;

float pes_terra, pes_mar, pes_ven, result;

int main()
{
cout << "\n\t\t Peso em outros planetas: ";

    cout << "\n Digite o seu peso: ";
    cin >> pes_terra;

    // Peso Marte: 

    pes_mar = pes_terra / 10 * 0.38;
    cout << "\n O seu peso em Marte será de: " << pes_mar;

    // Peso Venus

    pes_ven = pes_terra / 10 * 0.88;

    cout << "\n O seu peso em Vênus será de: " << pes_ven;

    cout << "\n";
    

    
    
    return 0;
}

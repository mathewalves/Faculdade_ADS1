#include <iostream>
#include <math.h>
#include <locale.h>

//  Construa um algoritmo que leia dois números inteiros, divida um pelo outro e
//  mostre o resto da divisão (suponha que será dividido o maior pelo menor)
  
using namespace std;

int num1, num2, result;

int main()
{
    cout << "\n\t\t Divisão";
    cout << "\n Digite o primeiro num: ";
    cin >> num1;
    cout << "\n Digite o segundo num: ";
    cin >> num2;



    if (num1 > num2){
        result = num1 / num2;
    }

     if (num1 < num2){
        result = num2 / num1;
    }


    cout << "\n O resultado é: " << result;
    cout << "\n";
    
    
    return 0;
}

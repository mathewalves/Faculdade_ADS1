#include <iostream>
#include <math.h>
#include <locale.h>

// Faça um algoritmo que leia dois números reais e mostre o maior, o menor ou se
// eles são iguais.

    
using namespace std;

float num1, num2;

int main()
{
    cout<<"\nDigite o 1 número real:";
    cin>>num1;

    cout<<"\nDigite o 2 número real:";
    cin>>num2;

    if(num1>num2){
        cout << "\nMaior: "<<num1;
        cout << "\nMenor: "<<num2;
    }else{
        cout<< "\nMaior: "<<num2;
        cout<< "\nMenor: "<<num1;
    }if(num1==num2){
        
        cout<<"\nOs dois números são iguais.";
    }
    cout<<"\n";
    
    
    return 0;
}

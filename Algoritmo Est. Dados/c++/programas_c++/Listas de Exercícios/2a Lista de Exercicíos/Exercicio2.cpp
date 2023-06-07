#include <iostream>
#include <math.h>
#include <locale.h>

// Elabore um algoritmo que leia o sexo de uma pessoa. Se o sexo digitado for “M” ou
// “F”, imprimir “Sexo válido”, caso contrário imprima “Sexo inválido! ”.

    
using namespace std;

char sexo;

int main()
{
    cout<<"\nDigite o sexo [M] ou [F]: ";
    cin>>sexo;

    if (sexo=='M' || sexo=='F'){
        cout<< "Sexo válido";
    } else{
        cout<<"Sexo inválido";
    }
    cout<<"\n";

    
    
    return 0;
}

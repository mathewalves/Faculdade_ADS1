#include <iostream>
#include <math.h>
#include <locale.h>

    
// Construa um algoritmo que leia dois números inteiros e mostre o resultado da
// diferença do maior pelo menor valor

using namespace std;

int num1, num2,result;

int main()
{
    cout<<"\nDigite o 1 número:";
    cin>>num1;

    cout<<"\nDigite o 2 número:";
    cin>>num2;

    if(num1>num2){
        result = num1-num2;
    }else{
        result = num2-num1;
    }
    cout<<"\nO resultado da diferença do maior pelo menor valor é: "<<result;
    cout<<"\n";

    
    return 0;
}

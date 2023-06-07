#include <iostream>
#include <math.h>
#include <locale.h>

// 5. Construa um algoritmo que leia 2 números reais e mostre o maior entre eles.

    
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
    }else{
        cout<< "\nMaior: "<<num2;
    }
    cout<<"\n";
    
    
    return 0;
}

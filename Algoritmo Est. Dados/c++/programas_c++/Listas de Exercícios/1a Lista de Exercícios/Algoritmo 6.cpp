#include <iostream>
#include <stdio.h>
#include <math.h>
    
using namespace std;

int main()
{
    int base, exp, result;

  cout << "\n\tCalculo de potencias\n";
  cout << "Digite um numero inteiro: "; cin >> base;
  cout << "Digite um numero um inteiro: "; cin >> exp;

  if (base ==0 || exp==0){
    cout << "\nNenhum dos valores pode ser nulo";
  }else{
 result = pow(base,exp);
  cout << "O resultado do calculo é: "<< result;
  }
  
 cout << "\n";
}

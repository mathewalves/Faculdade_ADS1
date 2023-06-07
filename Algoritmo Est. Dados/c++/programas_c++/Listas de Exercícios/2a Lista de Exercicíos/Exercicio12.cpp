#include <iostream>
#include <math.h>
#include <locale.h>

// algoritmo 12
// Escreva um algoritmo que leia um número real e, a seguir, calcule e mostre:
// a) O número multiplicado por 10;
// b) O número dividido por um valor a ser digitado pelo usuário. Se o valor digitado for
// igual a 0, mostre mensagem “Valor não pode ser nulo” e finalize o algoritmo.
// c) A raiz quadrada do número digitado. Se o valor digitado for negativo, mostre
// mensagem “Valor não pode ser negativo” e finalize o algoritmo. Para o cálculo da
// raiz quadrada, utilize a função sqrt(num).

using namespace std;
// var
float num1, mult, num_div, divs, r;

int main()

{ //inicio
 cout << "\n\t\tCalculos";

    //imprima e leia
    cout << "\nDigite um numero real: "; cin >> num1;
    cout << "Digite o número divisor: "; cin >> num_div;

 //formulas e se
  mult = num1*10;

 if (num1 == 0)
    {
     cout<< "\nValor não pode ser negativo.";
    }else{
     r = sqrt(num1);
     cout << "\nO num mult por 10 é: " << mult;
     cout << "\nnum ao quadrado é: "<< r;
    }

 if (num_div == 0)
    {
     cout << "\nO valor divisor não pode ser nulo.";
    }else{
        divs = num1/num_div;
        cout << "\nA divisao entre num e divisor e: "<<divs;
    }
 cout << "\n";
} //fim
#include <iostream>
#include <math.h>
#include <locale.h>



//          Faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual,
//          calcule e mostre:
//                  • A idade dessa pessoa;
//                  • Quantos anos essa pessoa terá em 2030


using namespace std;

int birth, atual, result;

int main()
{
 cout << "\n\tCalcular data de nascimento\n";
 cout << "\nDigite o seu Ano de Nascimento: ";
 cin >> birth;
 cout << "\nDigite o Ano Atual: ";
 cin >> atual;
 result = atual - birth;
 cout << "\nA sua idade é: " << result;
 result = (int)2030 - birth;
 cout << "\nEm 2030 a sua idade sera: " << result;
  cout << "\n";




    
    
    return 0;
}

#include <iostream>
#include <math.h>
#include <locale.h>

// 1. Faça um algoritmo que leia o sexo e a idade de 3 pessoas. Calcule e mostre a
// quantidade de mulheres com idade maior que 20 anos. Se o algoritmo não
// encontrar nenhuma mulher com idade superior a 20 anos, mostrar a seguinte
// mensagem: “Não foram encontradas mulheres > de 20 anos”.
    
using namespace std;

int idade, i, m20=0;
char sexo;

int main()
{
    for (i = 1 ;i<=3; i++){
    cout << "\nDigite o sexo da pessoa "<< i << " (M/F): ";
    cin >> sexo;
    
    cout << "\nDigite a idade da pessoa "<< i << ": ";
    cin >> idade;

    if (sexo == 'F' && idade>20){
        m20++;
    }
}
if (m20>0){
    cout<< "A qtde de mulheres maiores que 20 é: " <<m20;
} else{
    cout<< "Não foram encontradas mulheres > de 20 anos.";
}


    
    return 0;
}

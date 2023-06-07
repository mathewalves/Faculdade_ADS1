#include <iostream>
#include <math.h>
#include <locale.h>


// 6. Escreva um algoritmo que leia três notas de um aluno, calcule e mostre a média
// aritmética e a mensagem que segue na tabela abaixo:
    
using namespace std;

float nota1, nota2, nota3;
int media;


int main()
{
cout<< "\nDigite a primeira nota: ";
cin>> nota1;

cout<< "\nDigite a segunda nota: ";
cin>> nota2;

cout<< "\nDigite a terceira nota: ";
cin>> nota3;

media = (nota1+nota2+nota3)/3;
cout<<"\nA média do aluno é: "<<media;

if (media<3){
    cout<<"\nAluno Reprovado.";
}if (media<=7 | media==3 ){
    cout<<"\nExame.";
}if (media>7){
    cout<<"\nAluno Aprovado";
}
cout<<"\n";
    
    
    return 0;
}

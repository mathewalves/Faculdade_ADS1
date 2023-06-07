#include <iostream>
#include <math.h>
#include <locale.h>
    
// 7. A nota final de um estudante é calculada a partir de três notas atribuídas
// respectivamente: um trabalho de laboratório, uma avaliação semestral e um
// exame final. A média das três notas mencionadas obedece aos pesos a seguir:

// Nota Peso
// Trabalho de laboratório 2
// Avaliação semestral 3
// Exame final 5

// Média ponderada Conceito
// 8.0  10.0 A
// 7.0  8.0 B
// 6.0  7.0 C
// 5.0  6.0 D
// 0.0  5.0 E

// Faça um algoritmo que leia as três notas, calcule e mostre a média ponderada e o
// conceito que segue a tabela abaixo:

using namespace std;
//var 
float trab_lab, prova_sem, exame_final, media;

int main()
{ //inicio
 cout << "\n\t\tCalcular media ponderada";
    cout << "\nDigite a nota do trabalho de laboratorio: "; cin >> trab_lab;
    cout << "\nDigite a nota da prova semestral: "; cin >> prova_sem;        
    cout << "\nDigite a nota do exame final: "; cin >> exame_final; 


 //formula/contas
 trab_lab = trab_lab * 2;
 prova_sem = prova_sem * 3;
 exame_final = exame_final * 5;
    media = (trab_lab + prova_sem + exame_final)/10;

 if (media>=8.0 && media<=10.0)
    {
     cout << "\nConceito A.";
    }
 if (media>=7.0 && media<8.0)
    {
        cout << "\nConceito B.";
    }
 if (media>=6.0 && media<7.0)
    {
        cout << "\nConceito C.";
    }
 if (media>=5.0 && media<6.0)
    {
        cout << "\nConceito D.";
    }
 if (media>=0.0 && media<5.0)
    {
        cout << "\n Conceito E.";
    }
 cout << "\n A média é: "<<media;
 cout << "\n";

 
}//fim

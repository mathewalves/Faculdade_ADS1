//Algoritmo dez

#include <iostream>
#include <math.h>
#include <locale.h>


// Faça um algoritmo que leia: número da conta do cliente, saldo, total de débitos e
// total de créditos. Em seguida, calcule e imprima o saldo atual do cliente. Uilize a
// seguinte fórmula: saldo atual = saldo - débito + crédito. Verifique se saldo atual é
// maior ou igual a zero e escreva a mensagem 'Saldo Positivo', senão escreva a
// mensagem 'Saldo Negativo'.

using namespace std;
//var
float num_conta, saldo, saldo_atual, debitos, creditos;

int main()
{
//inicio
 cout<<"\n\t\tVerificar Saldo";
    //Imprima e Leia.
    cout << "\nDigite o numero da conta: "; cin >> num_conta;
    cout << "Digite o saldo: "; cin >> saldo;
    cout << "Digite o total de débitos: "; cin >> debitos;
    cout << "Digite o total de creditos: "; cin >> creditos;

    //Formula
    saldo_atual = saldo - debitos + creditos;

 //se
 if (saldo_atual>=0)
    {
     cout << "\n\tSaldo Positivo.";
    } else { 
        cout << "\n\tSaldo Negativo.";
    }
    



 cout<<"\n";
//fim
}
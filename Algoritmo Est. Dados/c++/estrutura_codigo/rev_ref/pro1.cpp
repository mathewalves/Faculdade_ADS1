//Programa para calcular a m�dia aritm�tica de dois numeros

#include <iostream> // biblioteca que gerencia toda entrada e sa�da de dados
#include <locale.h> // biblioteca que gerencia configura��o de teclado e pa�ses de localiza��o, em C++ tamb�m podemos escrever como "<clocale>"
#include <iomanip>

using namespace std; // para configurar os comandos padr�es d biblioteca standad, os comandos b�sicos que iremos utilizar

int main(){  // fun��o principal do programa e como ela � uma fun��o, � obrigat�rio ela retornar um valor, geralmente, como temos um valor inteiro, � comum colocar um "return 0;", que seria o menor valor inteiro positivo, por�m nos compiladores mais novos quando voc� n�o coloca nada ele automaticamente retorna o valor zero, ent�o n�o � obrigat�rio a defini��o do return.
    int num1, num2
    float med;
    setlocale(LC_ALL, "Portuguese"); // comando para confifurar no idioma portugu�s
    cout << fixed << setprecision(2); // comando para declarar quantas casas decimais o programa vai mostrar nos resultados

    cout << "Programa Calcula M�dia\n"; // "\n" � para pular linha e endl para indicar fim de linha
    cout << "Informe num1: ";
    cin >> num1; // comando de entrada/leitura
    cout << "Informe num2: ";
    cin >> num2;

    med = (float) (num1 + num2) / 2; // cast ou coer��o
    cout << "M�dia: " << med << endl;

}

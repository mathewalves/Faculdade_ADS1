//Programa para calcular a média aritmética de dois numeros usando função onde o corpio dela é declarado antes do main

#include <iostream> // biblioteca que gerencia toda entrada e saída de dados
#include <locale.h> // biblioteca que gerencia configuração de teclado e países de localização, em C++ também podemos escrever como "<clocale>"
#include <iomanip>

using namespace std; // para configurar os comandos padrões d biblioteca standad, os comandos básicos que iremos utilizar

int Media(){ //corpo da função

    int num1, num2;
    float med;
    cout << "Calculo de Média Aritmética\n\n";
    cout << "Informe num1: ";
    cin >> num1; // comando de entrada/leitura
    cout << "Informe num2: ";
    cin >> num2;

    med = (float) (num1 + num2) / 2; // cast ou coerção
    cout << "Média: " << med << endl;

}

int main(){  // função principal do programa e como ela é uma função, é obrigatório ela retornar um valor, geralmente, como temos um valor inteiro, é comum colocar um "return 0;", que seria o menor valor inteiro positivo, porém nos compiladores mais novos quando você não coloca nada ele automaticamente retorna o valor zero, então não é obrigatório a definição do return.

    setlocale(LC_ALL, "Portuguese"); // comando para confifurar no idioma português
    cout << fixed << setprecision(2); // comando para declarar quantas casas decimais o programa vai mostrar nos resultados
    cout << "Programa para realizar Cálculos\n\n"; // "\n" é para pular linha e endl para indicar fim de linha

    Media(); // chamada função média

}



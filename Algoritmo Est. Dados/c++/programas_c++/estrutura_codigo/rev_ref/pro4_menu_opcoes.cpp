//Programa para calcular a média aritmética de dois numeros usando função e utilisando menu de opções

#include <iostream> // biblioteca que gerencia toda entrada e saída de dados
#include <locale.h> // biblioteca que gerencia configuração de teclado e países de localização, em C++ também podemos escrever como "<clocale>"
#include <iomanip>

using namespace std; // para configurar os comandos padrões d biblioteca standad, os comandos básicos que iremos utilizar

int Media(); // protótipo da função média
void Calcula();

int main(){  // função principal do programa e como ela é uma função, é obrigatório ela retornar um valor, geralmente, como temos um valor inteiro, é comum colocar um "return 0;", que seria o menor valor inteiro positivo, porém nos compiladores mais novos quando você não coloca nada ele automaticamente retorna o valor zero, então não é obrigatório a definição do return.

    setlocale(LC_ALL, "Portuguese"); // comando para confifurar no idioma português
    cout << fixed << setprecision(2); // comando para declarar quantas casas decimais o programa vai mostrar nos resultados
    cout << "Programa para realizar Cálculos\n\n"; // "\n" é para pular linha e endl para indicar fim de linha

    char op = 'X';

    while (op != '0'){ // enquando 'X' for diferente de '0' irá executar o while(o menu)
        system ("cls"); // para limpar a tela todas as vezes
        cout << "Programa para realizar Cálculos\n\n"; // escrever todas as vezes
        cout << "\n0 - Sair";
        cout << "\n1 - Média";
        cout << "\n2 - Calcula";
        // cout << "\n3 - outras opções";

        cout << "\n\nInforme a opção desejada: ";
        cin >> op;

        switch (op){ // onde ficam as opções das funções
            case '0': cout << "Fim do Sistema\n\n"; system ("pause"); break; // comando para sair. Comandos do tipo case sempre tem que ter um "break" no fim
            case '1': Media(); break;
            case '2': Calcula(); break;
            // ... outras opções
            default : cout << "Opção Inválida.!!!!"; system("pause"); break;
        }
    }

}

int Media(){ //corpo da função

    int num1, num2;
    float med;
    system ("cls"); // para limpar e voltar a chamar esta tela
    cout << "Calculo de Média Aritmética\n\n";
    cout << "Informe num1: ";
    cin >> num1; // comando de entrada/leitura
    cout << "Informe num2: ";
    cin >> num2;

    med = (float) (num1 + num2) / 2; // cast ou coerção
    cout << "Média: " << med << endl;
    system ("pause");

}

void Calcula(){
    // escrever comandos de calcula
    system ("cls");
    cout << "Teste Função Calcula \n\n";
    system ("pause");
}

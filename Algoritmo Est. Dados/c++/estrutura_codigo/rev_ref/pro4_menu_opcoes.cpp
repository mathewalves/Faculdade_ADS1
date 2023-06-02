//Programa para calcular a m�dia aritm�tica de dois numeros usando fun��o e utilisando menu de op��es

#include <iostream> // biblioteca que gerencia toda entrada e sa�da de dados
#include <locale.h> // biblioteca que gerencia configura��o de teclado e pa�ses de localiza��o, em C++ tamb�m podemos escrever como "<clocale>"
#include <iomanip>

using namespace std; // para configurar os comandos padr�es d biblioteca standad, os comandos b�sicos que iremos utilizar

int Media(); // prot�tipo da fun��o m�dia
void Calcula();

int main(){  // fun��o principal do programa e como ela � uma fun��o, � obrigat�rio ela retornar um valor, geralmente, como temos um valor inteiro, � comum colocar um "return 0;", que seria o menor valor inteiro positivo, por�m nos compiladores mais novos quando voc� n�o coloca nada ele automaticamente retorna o valor zero, ent�o n�o � obrigat�rio a defini��o do return.

    setlocale(LC_ALL, "Portuguese"); // comando para confifurar no idioma portugu�s
    cout << fixed << setprecision(2); // comando para declarar quantas casas decimais o programa vai mostrar nos resultados
    cout << "Programa para realizar C�lculos\n\n"; // "\n" � para pular linha e endl para indicar fim de linha

    char op = 'X';

    while (op != '0'){ // enquando 'X' for diferente de '0' ir� executar o while(o menu)
        system ("cls"); // para limpar a tela todas as vezes
        cout << "Programa para realizar C�lculos\n\n"; // escrever todas as vezes
        cout << "\n0 - Sair";
        cout << "\n1 - M�dia";
        cout << "\n2 - Calcula";
        // cout << "\n3 - outras op��es";

        cout << "\n\nInforme a op��o desejada: ";
        cin >> op;

        switch (op){ // onde ficam as op��es das fun��es
            case '0': cout << "Fim do Sistema\n\n"; system ("pause"); break; // comando para sair. Comandos do tipo case sempre tem que ter um "break" no fim
            case '1': Media(); break;
            case '2': Calcula(); break;
            // ... outras op��es
            default : cout << "Op��o Inv�lida.!!!!"; system("pause"); break;
        }
    }

}

int Media(){ //corpo da fun��o

    int num1, num2;
    float med;
    system ("cls"); // para limpar e voltar a chamar esta tela
    cout << "Calculo de M�dia Aritm�tica\n\n";
    cout << "Informe num1: ";
    cin >> num1; // comando de entrada/leitura
    cout << "Informe num2: ";
    cin >> num2;

    med = (float) (num1 + num2) / 2; // cast ou coer��o
    cout << "M�dia: " << med << endl;
    system ("pause");

}

void Calcula(){
    // escrever comandos de calcula
    system ("cls");
    cout << "Teste Fun��o Calcula \n\n";
    system ("pause");
}

#include <iostream>
#include <math.h>
#include <locale.h>


//  O Haras Mangalarga pretende trocar todas as ferraduras de seus cavalos. Escreva
//  um algoritmo, que leia o número de cavalos que o Haras possui. Calcule e mostre a
//  quantidade de ferraduras necessárias para equipar todos os cavalos do haras.



    
using namespace std;

int num_cav, qtde_fer, result;

int main()
{
    cout << "\n\t\t Calcular qtde de fer";
    cout << "\nDigite o num de cavalos: ";
    cin >> num_cav;
    qtde_fer = 4;
    result = num_cav * qtde_fer;
    cout << "\n A qtde de ferraduras é de: " << result;
    cout << "\n";
    



    
    return 0;
}

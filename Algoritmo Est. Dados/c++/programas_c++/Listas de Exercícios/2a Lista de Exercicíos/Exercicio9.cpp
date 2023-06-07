#include <iostream>
#include <math.h>
#include <locale.h>

// Construa um algoritmo que resolva equações do 2º grau: ax2 + bx + c = 0. Se a for
// igual a zero imprima “Estes valores não formam uma equação do 2º grau”.
// Fórmula para o  = b2 – 4 a c
// Se  < 0 Imprima “Não existe raiz real”
// Se  = 0 Imprima “Existe uma raiz real”. A fórmula é: x = -b / (2*a)
// Se  > 0 Imprima “Existem duas raízes reais”. Utilize as seguintes fórmulas:
// x1 = -b + sqrt() / (2*a)
// x2 = -b - sqrt() / (2*a)

float a, b, c, x, x1, x2, delta;

using namespace std;


int main() 
{
//Inicio
 cout << "\n\t\t Calcular equação de segundo grau";

    cout << "\nDigite o valor de A: ";
    cin >> a;
    cout << "\nDigite o valor de B: ";
    cin >> b;
    cout << "\nDigite o valor de C: ";
    cin >> c;

if (a == 0)
    {
        cout << "\nEstes valores não formam uma equação do 2º grau";
    } 

    delta = (b*b) - (4*a*c);

if (delta < 0)
    {
        cout << "\nNão existe raiz real";
    }  
    
if (delta == 0)
    {
        // x = -b / (2*a)
        cout << "\nExiste uma raiz real: ";
        x = -b / (2*a);
        cout << x;
    }
    
if (delta > 0)
    {
        x1 = -b + sqrt(delta) / (2*a);
        x2 = -b - sqrt(delta) / (2*a);
        cout << "\nExistem duas raízes reais\n"<<x1<<"\n"<<x2;
    }



 cout << "\n";
//FIM
}
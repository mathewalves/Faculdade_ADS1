#include <iostream>
#include <locale.h>
#include <math.h>

// algoritmo onze
// Faça um algoritmo em que o usuário precise digitar o valor do raio. A seguir calcule
// e mostre:
// a) O comprimento de uma esfera, sabe-se que: C = 2  R;
// b) A área de uma esfera, sabe-se que: A =  R2;
// c) O volume de uma esfera, sabe-se que: V = 3 / 4  R3.


using namespace std;
//var
float r, pi, c, a, v;

int main ()
{
//inicio
 cout<<"\n\t\tCalcular valor do raio";

    cout << "\nDigite o valor do raio: "; cin >> r;

        //Formulas
        pi = 3.14159;
        c = (2*pi)*r;
        a = pi*(r*r);
        v = 3/(4*pi)*pow(r,3);

 if(r==0)
    {
     cout<< "\nRaio não pode ser 0";
    }else{
    cout << "\nO comprimento é igual a: " << c;
    cout << "\nA area é igual a: " << a;
    cout << "\nO volume é igual a: " << v;
    }


 cout<<"\n";
//fimse
}
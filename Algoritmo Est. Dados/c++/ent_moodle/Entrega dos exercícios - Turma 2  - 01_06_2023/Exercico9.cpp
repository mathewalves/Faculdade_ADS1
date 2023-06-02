#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    const int tamanho = 5;
    int vetor1[tamanho];
    int vetor2[tamanho];
    int vetorInter[tamanho * 2];

    cout << "Digite os elementos do primeiro vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor1[i];
    }

    cout << "\nDigite os elementos do segundo vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor2[i];
    }

    for (int i = 0, j = 0; i < tamanho; i++, j += 2) {
        vetorInter[j] = vetor1[i];
        vetorInter[j + 1] = vetor2[i];
    }

    cout << "\nVetor intercalado:" << endl;
    for (int i = 0; i < tamanho * 2; i++) {
        cout << vetorInter[i] << endl;
    }

return 0;
}

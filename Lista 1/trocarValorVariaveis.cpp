#include <iostream>
using namespace std;
/*Leia dois valores inteiros nas variáveis Val1 e Val2, troque os seus conteúdos e escreva o 
resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois 
da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10. */
int main() {
    int v1,v2,aux;
    cout << "\nDigite o 1o. valor: ";
    cin >> v1;
    cout << "\nDigite o 2o. valor: ";
    cin >> v2;
    aux = v1;
    v1 = v2;
    v2 = aux;
    cout << "\nPrimeiro valor: " << v1 << " \n\nsegundo valor: " << v2;
}

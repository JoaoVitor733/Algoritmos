#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar o primeiro elemento com o
último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Ao final,
escreva o vetor A modificado. */
int main(){
    int A[5], aux;
    for (int i = 0; i < 5; i++){
        cout << "\nDigite o valor da " << i + 1 << "a. posicao: ";
        cin >> A[i];
    }
    for (int i = 0; i < 2; i++){
        aux = A[i];
        A[i] = A[4 - i];
        A[4 - i] = aux;
    }
    for (int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
}

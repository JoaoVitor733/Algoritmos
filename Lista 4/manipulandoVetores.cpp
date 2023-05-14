#include <iostream>
using std::cin;
using std::cout;
/*Sejam A e B dois vetores contendo 10 elementos inteiros. Elabore um algoritmo que: 
a. Leia A e B. 
b. Calcule a soma dos elementos de A. 
c. Crie o vetor C contendo a soma dos elementos de mesma posição dos vetores A e B. 
d. Calcule quantos elementos de A são maiores que a soma dos elementos de B.*/
int main(){
    int A[5], B[5], C[5], somaElementosA = 0, somaElementosB = 0;
    short int cont = 0;
    short int indiceP = 0;
    for (int i = 0; i < 5; i++){
        cout << "\nDigite o valor da " << i + 1 << "a. posicao do vetor A: ";
        cin >> A[i];
        cout << "\nDigite o valor da " << i + 1 << "a. posicao do vetor B: ";
        cin >> B[i];
        somaElementosA += A[i];
        somaElementosB += B[i];
        C[i] = A[i]+B[i];
    }

    cout << "\nA soma dos elementos de A: " << somaElementosA;
    cout << "\n\nA soma dos elementos de B: " << somaElementosB;
    cout << "\n\nVetor C: ";
    for(int i = 0; i <5; i++){
        cout << C[i] << " ";
        if(A[i] > somaElementosB) cont++;
    }
    cout << "\n\nA quatidade de elementos de A maior que a soma dos elementos de B: " << cont;
}

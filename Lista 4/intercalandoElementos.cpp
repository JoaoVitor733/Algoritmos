#include <iostream>
using std::cin;
using std::cout;
/* Elabore um algoritmo que declare dois vetores A e B de 10 elementos de inteiros, leia os seus elementos e 
intercale os dois vetores A e B formando o vetor C (de 20 elementos).*/
int main() {
    int A[5], B[5], C[10], aux = 0;
    for(int i = 0; i < 5; i++){
        cout << "\nDigite o " << 1+i << "o. valor do vetor A: ";
        cin >> A[i];
        cout << "\nDigite o " << 1+i << "o. valor do vetor B: ";
        cin >> B[i];
        C[aux] = A[i];
        C[aux+1] = B[i];
        aux += 2;
    }
    cout << "\nVetor C: ";
    for(int i = 0; i < 10; i++){
        cout << C[i] << " ";
    }
}

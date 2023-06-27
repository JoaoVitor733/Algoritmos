#include <iostream>
using std::cin;
using std::cout;
/*. Escreva uma função chamada Troca que troque os valores dos parâmetros 
recebidos. Essa função não deve ter retorno*/
void troca(int *A, int *B);

int main(){
    int A, B;
    cout << "\nDigite os valores de A e B, respectivamente: ";
    cin >> A >> B;
    troca(&A, &B);
    cout << "\nValores trocados: ";
    cout << "A: " << A << "\nB: " << B;
}

void troca(int *A, int *B){
    int aux = *A;
    *A = *B;
    *B = aux;
}
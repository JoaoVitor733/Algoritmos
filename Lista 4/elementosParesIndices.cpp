#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos 
elementos pares de A. Exemplo: Se A = [1 3 6 7 8], seus elementos pares estão nos índices 2 e 4 . Assim, P 
= [2 4]. */
int main(){
    int A[5], P[5];
    short int indiceP = 0;
    for (int i = 0; i < 5; i++){
        cout << "\nDigite o valor da " << i + 1 << "a. posicao: ";
        cin >> A[i];
        if(A[i] % 2 == 0){
           P[indiceP] = i;
           indiceP++;
        }
    }
    cout << "\n";
    for(int i = 0; i < indiceP; i++){
        cout << P[i] << " ";
    }
}

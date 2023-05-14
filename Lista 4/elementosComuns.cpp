#include <iostream>
using std::cout;
using std::cin;
/*Elabore um algoritmo que leia dois vetores, A (20 elementos inteiros) e B (20 elementos inteiros), e escreva 
um terceiro vetor C contendo todos os elementos comuns aos dois vetores A e B.*/
int main() {
    int A[5], B[5], C[5];
    short int cont = 1, qtdComuns = 0;
    bool flag = true, primeiraVez = true;
    for(int i=0; i < 5; i++){
        cout << "\n\nDigite o " << i+1<< "o. valor do vetor A: ";
        cin >> A[i];
        cout << "\n\nDigite o " << i+1<< "o. valor do vetor B: ";
        cin >> B[i];
    }
    cout << "\n\nElementos comuns aos dois vetores: \n";
    for(int i=0; i < 5; i++){
        for(int j=0; j < 5; j++){
            if(A[i] == B[j]){
                if(primeiraVez) {
                    C[qtdComuns] = A[i];
                    primeiraVez = false;
                }
                for(int k = 0; k < cont; k++){
                    if(A[i] == C[k]) flag = false;
                }
                if(flag){
                    C[qtdComuns] = A[i];
                    cout << C[qtdComuns] << " ";
                    qtdComuns++;
                } 
                flag = true;
                if(cont < 5) cont++;
            }
        }
    }   
}

#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos
elementos. */
int main(){
    int A[5], maiorDF, modulo;
    short int indice1 = 0, indice2 = 1;
    for(int i=0; i < 5; i++){
        cout << "\nDigite o valor da " << i+1 << "a. posicao: ";
        cin >> A[i];
    }
    maiorDF = A[0]-A[1];
    if(maiorDF < 0) maiorDF *= -1;
    for(int i=1; i < 4; i++){
        modulo = A[i]-A[i+1];
        if(modulo < 0) modulo *= -1;
        if(modulo > maiorDF){
            maiorDF = modulo;
            indice1 = i;
            indice2 = i+1;
        }
    }
    cout << "\nMaior diferenca: " << maiorDF << "\n\nIndices: " << indice1+1 << " e " << indice2+1;
}

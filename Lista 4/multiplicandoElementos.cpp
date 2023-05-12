#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia dois vetores V1 e V2 de 10 posições cada e faça a multiplicação dos elementos
de mesmo índice, colocando o resultado em um terceiro vetor V3. Mostre o vetor resultante. */
int main(){
    int v1[5],v2[5],v3[3];
    for(int i=0; i < 5; i++){
        cout << "Digite o valor da " << i+1 << "a. posicao do vetor 1: ";
        cin >> v1[i];
        cout << "Digite o valor da " << i+1 << "a. posicao do vetor 2: ";
        cin >> v2[i];
        v3[i] = v1[i]*v2[i];
    }
     for(int i=0; i < 5; i++){
       cout << v3[i] << " ";
    }
}
#include <iostream>
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia um vetor de 15 posições de inteiros e o compacte, ou seja, elimine as posições 
com valores iguais a zero. Para isso todos os elementos à frente do valorzero devem ser movidos uma posição 
para trás no vetor.*/
int const tam = 5;
int main(){
    int v[tam];
    short int i = 0, cont = 0, finalDaVez = tam, aux = 0;
    while(i < finalDaVez){
        cout << "\nDigite o valor da " << aux+1 << "a. posicao: ";
        cin >> v[i];
        if(v[i]==0){
            v[finalDaVez] = 0;
            cont++;
        }else i++;
        finalDaVez = tam-cont;
        aux++;
    }
    for(int i = 0; i <finalDaVez; i++){
        cout << v[i] << " ";
    }
}

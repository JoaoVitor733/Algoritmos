#include <iostream>
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em
índices ímpares. Mostre somente os elementos solicitadosElabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em
índices ímpares. Mostre somente os elementos solicitados*/
int main(){
    int v[5];
    bool opcao;
    for(int i=0; i < 5; i++){
        cout << "Digite o valor da " << i+1 << "a. posicao: ";
        cin >> v[i];
    }
    cout << "Digite 1 para visualizar os elementos pares e 0 para os impares: ";
    cin >> opcao;
    for(int i=0; i < 5; i++){
        if(opcao){
            if(i%2==0) cout << " " << v[i];
        }else if(i%2!=0) cout << " " << v[i];
     }
}
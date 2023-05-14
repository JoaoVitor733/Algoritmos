
#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de código. Se o 
código for 1, mostrar o vetor na ordem direta (do primeiro até o último), se o código for 2, mostrar o vetor 
na ordem inversa (do último até o primeiro). */
int main() {
    int v[5];
    bool ordem;
    for(int i=0; i<5;i++){
        cout << "\nDigite o valor da " << i+1 << "a. posicao: ";
        cin >> v[i];
    }
    cout << "\nDigite a ordem que deseja vizualizar o vetor(1 - Direta e 0 - inversa): ";
    cin >> ordem;
    if(ordem){
         for(int i=0; i<5;i++){
            cout << v[i] << " "; 
         }
    }else{
        for(int i=4; i>=0;i--){
             cout << v[i] << " ";
         }
    }
}

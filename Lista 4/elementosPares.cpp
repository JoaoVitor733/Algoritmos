#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores 
pares existem no vetor e troque cada um desses elementos por 0. Em seguida escreva o vetor final.*/
int main(){
    short int par=0;
    int v[5];
    for(int i=0; i < 5; i++){
        cout << "\nDigite o valor da " << i+1 << "a. posicao: ";
        cin >> v[i];
        if(v[i]%2==0){ 
            par++;
            v[i] = 0;
        }
    }
    cout << "\n";
    for(int i=0; i<5;i++){
        cout << v[i] << " "; 
    }
    cout << "\nExistem " << par << " numeros pares!"; 
}
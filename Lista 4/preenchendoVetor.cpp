#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os 
elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos 
pares e impares*/
int main(){
    int v[20];
    short int par = 0;
    for (int i = 0; i < 20; i++){
        v[i] = i*2;
        if(v[i] % 2 == 0) par += v[i];
    }
    cout << "\nA soma dos elemntos pares: " << par;
    cout << "\n\nA soma dos elementos impares: 0";
}

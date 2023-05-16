#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia um vetor de 10 posições de inteiros, ordene-o (ordem crescente) e o escreva.*/
int main() {
   int v[5], aux;
   for(int i = 0; i < 5;i++){
       cout << "\nDigite o " << i+1 << "o. valor: ";
       cin >> v[i];
       if(i != 0){
           for(int j = 0; j < i; j++){
               if(v[i] < v[j]){
                   aux = v[i];
                   v[i] = v[j];
                   v[j] = aux;
               }
           }
       }
   }
    cout << "\nVetor ordenado em ordem crescente: ";
    for(int i=0; i < 5; i++){
        cout << v[i] << " ";
    }
}

#include <iostream>
using namespace std;
/* Elabore um algoritmo que leia um número qualquer e escreva todos os seus divisores.*/
int main(){
    short int numero, resto;
    cout << "\nDigite um numero qualquer: \n";
    cin >> numero;
    for(int i=1; i<numero+1;i++){
        resto = numero%i;
        if(resto==0) cout << i << " 1";
    }
}
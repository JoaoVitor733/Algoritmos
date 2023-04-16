#include <iostream> 
using namespace std;
/*Escreva um algoritmo leia dois números, A e B, verifique e escreva se são primos entre si. Considere que 
dois números inteiros são ditos primos entre si se não existir divisor comum aos dois números. Caso não 
sejam digitados valores positivos, o algoritmo deve solicitar que o usuário digite novamente até que esta 
condição seja satisfeita. */
int main(){
    unsigned short A, B, cont=2;
    bool flag = false;
    cout << "\nDigite os valores de A e B, respectivamente: ";
    cin >> A >> B;
    while(cont <= A || cont <= B){
        if((A%cont == 0 ) && (B%cont == 0)){
             flag = true;
             cout << cont;
             break;
        }
        cont++;
    }
    if(!flag) cout << "\nSao primos entre si!";
    else cout << "\nNao sao primos entre si!";
}

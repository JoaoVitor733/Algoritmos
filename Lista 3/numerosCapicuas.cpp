#include <iostream>
using namespace std;
/*Os números capicuas são aqueles que escritos da direita para esquerda ou da esquerda para direita tem 
o mesmo valor. Exemplo 929, 44, 97379. Fazer um algoritmo que, lido um número inteiro positivo, calcule 
e escreva se este é ou não capicua. */
int main() {
    int num, fator= 1,numAux, resto, inverso=0;
    do{ cout << "\nDigite um numero inteiro e positivo: ";
        cin >> num;
    }while(num < 0);    
    numAux = num;
    while(numAux >= 10){
        fator *= 10;
        numAux /= 10;
    }
    numAux = num;
    while(num >= 1){
        resto = num%10;
        num = num/10;
        inverso += fator*resto;
        fator/=10;
    }
    if(inverso == numAux && inverso > 10) cout << "\nEh numero de capicua!";
    else cout << "\nNao eh numero de capicua!";
}
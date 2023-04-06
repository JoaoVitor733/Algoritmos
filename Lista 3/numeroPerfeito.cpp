#include <iostream>
using namespace std;
/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores 
positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 
é perfeito, pois 1+2+3 = 6*/
int main(){
    short int numero, somaDivisores = 0;
    do{ cout << "\nDigite um numero inteiro e positivo: ";
        cin >> numero;
    }while(numero < 0);
    for(int i=1; i < numero; i++){
        if(numero%i==0) somaDivisores+=i;
    }
    if(numero==somaDivisores) cout << "\nO numero eh perfeito!";
    else cout << "\nO numero nao eh perfeito!";
}
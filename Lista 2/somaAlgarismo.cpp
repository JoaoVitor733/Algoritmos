#include <iostream>
using namespace std;
/*
 Elabore um algoritmo que leia um número inteiro maior do que zero (máximo de 5 algarismos), verifique 
e escreva a soma de todos os seus algarismos. Por exemplo, para o número 251 a soma será 8 (2 + 5 + 
1). Se o número lido não for maior do que zero, o programa terminar com a mensagem “Número 
inválido”. 
*/
int main(){
    int numero, soma = 0, digito;

    cout << "\nDigite um valor interio maior que 0 e menor que 99999: ";
    cin >> numero;
    if(numero > 0){
        digito = numero/10000;
        soma += digito;
        digito = ((numero%10000)/1000);
        soma += digito;
        digito = ((numero%1000)/100);
        soma += digito;
        digito = ((numero%100)/10);
        soma += digito;
        digito = ((numero%10));
        soma += digito;
        cout << "\nSomatorio dos digitos: " << soma;
    }else{
        cout << "\nNumero invalido!";
    }

}
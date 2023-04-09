#include <iostream>
using namespace std;
/* Elabore um algoritmo que leia dois números inteiros, A e B, calcule e escreva o resto da divisão de A por 
B sem usar o operador de resto (%).*/
int main(){
    short int a, b, remainder;
    cout << "\nEnter a number for A(integer): ";
    cin >> a;
    do{ cout << "\nEnter a number for B(integer): ";
        cin >> b;
    }while(b == 0);
    if(b < 0) b *= -1;
    if(a < 0) a *= -1;
    remainder = (a-((a/b)*b));
    cout << "\nRemainder of the division" << remainder;
}
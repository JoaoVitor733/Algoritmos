#include <iostream>
using namespace std;
/*Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual 
aplicado ao número. */
int main(){
    int n;
    float percentual;
    cout << "\nDigite um numero inteiro: ";
    cin >> n;
    cout << "\nDigite um percentual: ";
    cin >> percentual;
    cout << "\nO juros eh de: " << (percentual/100)*n;
}

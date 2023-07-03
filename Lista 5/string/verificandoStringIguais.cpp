#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia duas strings e informe se são iguais ou diferentes. Obs: Não utilize a função de 
comparação de strings.*/
int main(){
    string frase1, frase2;
    cout << "\nDigite a primeira frase: ";
    getline(cin, frase1);
    cout << "\nDigite a segunda frase: ";
    getline(cin, frase2);
    if(frase1==frase2) cout << "\nSao iguais!";
    else cout << "\nNao sao iguais!";
}

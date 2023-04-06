
#include <iostream>
using namespace std;
/* Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos 
completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a 
carteira. */
int main(){
    short int idade;
    cout << "\nDigite sua idade: ";
    cin >> idade;
    if(idade>=18) cout << "\nPode tirar a carteira!";
    else cout << "\nFalta " << 18-idade << " ano(s) para poder tirar sua carteira";
}
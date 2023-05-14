
#include <iostream>
using namespace std;
/* Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos 
completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a 
carteira. */
int main(){
    short int idade;
    cout << "\nDigite sua idade: ";
    cin >> idade;
    if(idade>=18) cout << "\nVoce pode tirar a carteira de habilitacao!";
    else cout << "\nFalta(m) " << 18-idade << " ano(s) para voce poder tirar a sua carteira de habilitacao";
}

#include <iostream>
using namespace std;
/*Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido dado o número referente 
ao dia. Considere que domingo é o dia 1 e sábado é o dia 7.*/
int main(){
    short int dia;
    cout << "\nDigite o numero('1' - domingo, '2' - segunda, '3' - terca,'4'- quarta, '5' - quinta, '6' - sexta, '7'-sabado): ";
    cin>>dia;
    if(dia > 1 && dia <7) cout << "\nDia util"
    else if(dia == 1 || dia == 7) cout << "\nFim de semana!";
         else cout << "\nDia invalido!";
}

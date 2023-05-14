
#include <iostream>
using namespace std;
/*A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule 
e escreva o salário de um professor, sabendo que o valor da hora/aula segue a tabela abaixo: 
Professor nível 1 R$ 12,00 por hora aula 
Professor nível 2 R$ 17,00 por hora aula 
Professor nível 3 R$ 25,00 por hora aula */
int main(){
    int nivel, hAula;
    cout << "\nVoce eh um professor do nivel 1,2 ou 3? ";
    cin >> nivel;
    cout << "\nQuantas horas/aulas voce faz no mes? ";
    cin >> hAula;
    if(nivel == 1) cout << "\nSalario eh de R$: " <<  hAula*12; 
    else if(nivel == 2) cout << "\nSalario eh de R$: " <<  hAula*17; 
          else if(nivel == 3) cout << "\nSalario eh de R$: " <<  hAula*20; 
                else cout << "\nNivel invalido!!" ;
}

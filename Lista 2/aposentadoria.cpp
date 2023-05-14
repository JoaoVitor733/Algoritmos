#include <iostream>
using namespace std;
/*Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou 
não se aposentar. As condições para aposentadoria são: 
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos; 
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/
int main(){
    short int idade, tServico;
    cout << "\nDigite sua idade: ";
    cin >> idade;
    cout << "\nDigite seu tempo de servico: ";
    cin >> tServico;
    if((idade >= 65) || (tServico >= 30) || (idade >= 60 && tServico >= 25))
        cout << "\nPode se aposentar!";
    else cout << "\nNao pode se aposentar!";
}

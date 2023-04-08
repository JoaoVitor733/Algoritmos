#include <iostream>
using namespace std;
/*Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas. 
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a 
tentativa. Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. Faça um 
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro 
do algoritmo e não estará visível para o usuário*/
int main(){
    short int number = 5, numberPlayer;
    bool flag = true;
    for(int i=0; i < 3; i++){
        do{ cout << "\nEnter your " << i+1 << "o. number(between 1 and 10): ";
            cin >>numberPlayer;
        }while(numberPlayer < 0 || numberPlayer > 10);
        if(numberPlayer > number) cout << "\nYou typed a large number!\n";
        else if(numberPlayer <  number) cout << "\nYou entered a smaller number!\n";
             else{ cout << "\ncongratulations, you got it right!\n"; i = 5;}
        if(i==5) flag = false;
    }
    if(flag) cout << "\nYou go it wrong!";
}
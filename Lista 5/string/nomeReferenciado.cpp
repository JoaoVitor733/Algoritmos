#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que receba um nome completo em uma string e apresente apenas o último nome e o 
1º nome na seguinte forma: último nome, 1º nome. 
Entrada: Ana Fernandes Oliveira 
Saída: Oliveira, Ana */
int main(){
    string nome, ultimoNome;
    cout << "\nDigite o seu nome completo: ";
    getline(cin,nome);
    short int i = nome.size()-1, j = 0;
    while(nome[i] == ' '){//corrigindo erro 
        i--;
    }
    while(nome[i] != ' '){
        ultimoNome += nome[i];
        i--;
    }
    for(int i = nome.size()-1; i >= 0; i--){
        cout << ultimoNome[i];
    }
    while(nome[j] == ' '){//corrigindo erro 
        j++;
    }
    cout << ", ";
    while(nome[j] != ' '){
        cout << nome[j];
        j++;
    }
}

#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia uma frase e escreva-a de duas formas: a frase completa e a frase contendo só 
as palavras em “posições ímpares” (1ª palavra, 3ª palavra, 5ª palavra, ...). 
Entrada: eu gosto de roupa azul
Saída: eu de azul*/
int main(){
    string frase;
    cout << "\nDigite uma frase: ";
    short int cont = 1;
    getline(cin, frase);
    cout << "\nFrase completa: " << frase;
    cout << "\n\nPalavras em posicoes impares na frase: ";
    for(int i = 0; i < frase.size();i++){
        if(cont%2!=0) cout << frase[i];
        if(frase[i] == ' ') cont++;
    }
}

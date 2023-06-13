#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra string, verifique e escreva se 
a palavra está contida na frase. 
Entradas: “esta é a frase” e “frase” 
Saída: a palavra “frase” está contida na frase “esta é a frase”.*/
int main(){
    string frase, palavra, palavraAux;
    bool flag = true; 
    short int i = 0;

    cout << "\nDigite uma frase: ";
    getline(cin, frase);
    do{ cout << "\nDigite uma palavra: ";
        getline(cin, palavra);
    }while(palavra.size() <= 1);
   
    do{
        while((frase[i] != ' ' ) && (i < frase.size())){
            palavraAux += frase[i];
            i++;
        }
        if(palavraAux == palavra) flag = false;
        palavraAux = "";
        i++;
    }while(flag && i < frase.size());

    if(flag) cout <<"\nA palavra nao esta contida na frase!\n";
    else cout << "\nA palavra esta contida na frase!\n";
}

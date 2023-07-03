#include <iostream>
using std::string;
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia uma frase e escreva uma tabela que mostre, para cada letra, o número de 
vezes que a mesma aparece na frase. 
Entrada: “uma frase qualquer” 
Saída: “u” aparece 3 vezes 
“m” aparece 1 vez 
“a” aparece 3 vezes 
“f” aparece 1 vez 
“r” aparece 2 vezes 
“s” aparece 1 vez 
“e” aparece 2 vezes 
“q” aparece 2 vezes 
“l” aparece 1 vez .*/
int main(){
    string frase, letrasUnicas;
    cout << "\nDigite uma frase: ";
    getline(cin, frase);
    short int cont;
    bool unica;     
    for(int i = 0; i < frase.size();i++){
        cont=0;
        unica = true;
        if(i != 0){
            for(int j = 0; j < i; j++){//pegando so letras diferentes
                if(frase[i] == frase[j]) unica = false;
            }
        }
        if(unica && (frase[i] != ' ')){
            letrasUnicas += frase[i];
            for(int j = i; j < frase.size(); j++){//contar
                if(frase[i] == frase[j]) cont++;
            }
            if(cont != 0) cout << "\n“" << frase[i] << "” apareceu " << cont << " vezes";
        }
    }
}

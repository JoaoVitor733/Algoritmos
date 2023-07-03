#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra string, verifique e escreva se 
a palavra está contida na frase. 
Entradas: “esta é a frase” e “frase” 
Saída: a palavra “frase” está contida na frase “esta é a frase”.*/
int main(){
    string frase, palavra;
    cout << "\nDigite uma frase: ";
    getline(cin, frase);
    do{ cout << "\nDigite uma palavra: ";
        getline(cin, palavra);
    }while(palavra.size() <= 1);
    short int cont=0, tamFrase = frase.size(), tamPal = palavra.size(), i = 0, aux;
    do{
        aux = 0;
        if(frase[i] != ' ') cont++;
        else cont = 0;
        if((cont == tamPal) && (frase[i+1] == ' ' || i==(tamFrase-1))){
            for(int j = 0; j < tamPal; j++){
                if(frase[(i-(tamPal-1)+j)] == palavra[j]) aux++;
            }
        }
        i++;
    }while((i < tamFrase) && ((aux != tamPal)));
   
    if(aux == tamPal) cout << "\nA palavra esta contida na frase!";
    else cout <<"\nA palavra nao esta contida na frase";
}

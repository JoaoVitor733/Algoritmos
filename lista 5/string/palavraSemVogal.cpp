#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia uma string e a escreva sem as suas vogais.*/
int main(){
    string frase;
    cout << "\nDigite uma frase: ";
    getline(cin, frase);
    short int value;
    for(int i = 0; i < frase.size(); i++){
        value = (int)frase[i];
        if((value!=65) && (value!=69) && (value!=73) && (value!=79) && (value!=85)
            && (value!=97) && (value!= 101) && (value!=105) && (value!=111) && (value!=117))
                cout << frase[i];
    }
}

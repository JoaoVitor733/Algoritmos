#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia uma cadeia de caracteres (máximo 40 caracteres) inverta-a armazenando em 
outra variável e em seguida mostre a variável com a cadeia invertida. Por exemplo, ao receber a string "eaj-ufrn", o algoritmo deverá mostrar como saída a string "nrfu-jae". */
int main(){
    string frase, inversoFrase;
    bool excedeu = false;
    do{
        if(excedeu) cout << "\nVoce excedeu o limite, digite novamente!\n";
        cout << "\nDigite uma frase(maximo 40 caracter): ";
        getline(cin, frase);
        excedeu = true;
    }while(frase.size() > 40);
    for(int i = 0; i < frase.size(); i++){
        inversoFrase[(frase.size()-1)-i] = frase[i];
    }  
    cout << "\nFrase invertida: ";
    for(int i = 0; i < frase.size(); i++){
        cout << inversoFrase[i];
    }
}

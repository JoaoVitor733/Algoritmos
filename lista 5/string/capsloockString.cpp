#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que declare duas strings e leia a primeira string. Em seguida, copie o texto da primeira 
string para a segunda em letras maiúsculas se a primeira letra da primeira string for minúscula ou em letras 
minúsculas se a primeira letra da primeira string for maiúscula. Imprima no final o conteúdo das duas strings.*/
int main(){
    string frase, fraseCopy;
    cout << "\nDigite uma frase: ";
    getline(cin, frase);
    if((int)frase[0] < 97){//frase copiada vai ser toda em minuscula
        for(int i = 0; i < frase.size();i++){
            if((int)frase[i] >= 65 && (int)frase[i] <= 90) fraseCopy[i] = (char)((int)frase[i]+32);
            else fraseCopy[i] = frase[i];
        }
    }else{
        for(int i = 0; i < frase.size();i++){
            if((int)frase[i] >= 97 && (int)frase[i] <= 122) fraseCopy[i] = (char)((int)frase[i]-32);
            else fraseCopy[i] = frase[i];
        }
    }
    cout << "\nFrase copiada: ";
    for(int i = 0; i < frase.size(); i++){
        cout << fraseCopy[i];
    }
}

#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia uma string, verifique e informe se trata-se ou não de um palíndromo. 
Lembrando que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda quanto da esquerda para a direita. Exemplos: ovo, arara, anotaram a data da maratona.*/
int main(){
    string palavra, palavraAux;
    cout << "\nDigite uma palavra: ";
    getline(cin, palavra);
    bool palindroma = true;
    for(int i = 0; i < palavra.size();i++){
        if((int)palavra[i] >= 97) palavra[i] = (char)(palavra[i]-32);
        if((palavra[i] >= 65 && palavra[i] <= 90)) palavraAux+=palavra[i];
    }

    for(int i = 0; i < (palavraAux.size()/2); i++){
        if(palavraAux[i] != palavraAux[(palavraAux.size()-1)-i]) palindroma = false;
    }
    if(palindroma) cout << "\nA palavra e um palindromo!";
    else cout << "\nA palavra nao eh um palindromo!";
}

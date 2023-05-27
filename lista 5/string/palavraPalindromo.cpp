#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia uma string, verifique e informe se trata-se ou não de um palíndromo. 
Lembrando que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda quanto da esquerda para a direita. Exemplos: ovo, arara, anotaram a data da maratona.*/
int main(){
    string palavra;
    cout << "\nDigite uma palavra: ";
    getline(cin, palavra);
    bool palindroma = true;
    for(int i = 0; i < (palavra.size()/2); i++){
        if(palavra[i] != palavra[(palavra.size()-1)-i]) palindroma = false;
    }
    if(palindroma) cout << "\nA palavra e um palindromo!";
    else cout << "\nA palavra nao eh um palindromo!";
}

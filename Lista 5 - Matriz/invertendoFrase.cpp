#include <iostream>
using std::string;
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia uma string qualquer e escreva-a espelhada. 
Entrada: “uma frase qualquer” 
Saída: “reuqlauq esarf amu” */
int main(){
    string palavra;
    cout << "\nDigite a primeira frase:";
    getline(cin,palavra);
    for(int i = palavra.size()-1; i >= 0; i--){
        cout << palavra[i];
    }
}

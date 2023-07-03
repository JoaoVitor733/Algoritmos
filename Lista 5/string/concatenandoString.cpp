#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia duas strings A e B e junte-as em uma única string C. 
Entradas: “frase 1” e “outra frase qualquer” 
Saída: “frase 1 outra frase qualquer” */
int main(){
    string a, b, c;
    cout << "\nDigite a primeira frase: ";
    getline(cin,a);
    cout << "\nDigite a segunda frase: ";
    getline(cin, b);
    c = a+b;
    cout << "\n" << c;
}

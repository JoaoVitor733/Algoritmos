#include <iostream>
using namespace std;
/*Elabore um algoritmo que leia o código (inteiro) e a idade de 5 pessoas e escreva ao final o código da 
pessoa mais velha e a idade da pessoa mais nova.
*/
int main(){
    short idade, codigo, codigoPessoaV, iadadePessoaN=0;

    do{ cout << "\nDigite o idade da 1a. pessoa: ";
        cin >> idade;
    }while(idade < 0 || idade > 200);

    iadadePessoaN = idade;
    cout << "\nDigite o seu codigo: ";
    cin >> codigo;
    codigoPessoaV = codigo;

    for(int i=0; i < 4; i++){
        do{ cout << "\nDigite o idade da " << i+2 << "a. pessoa: ";
        cin >> idade;
        }while(idade < 0 || idade > 200);
        cout << "\nDigite o seu codigo: ";
        cin >> codigo;
        if(iadadePessoaN > idade) iadadePessoaN = idade; 
        else codigoPessoaV = codigo;
    }

    cout << "\nCodigo da pessoa mais velha: " << codigoPessoaV;
    cout << "\n\nIdade da pessoa mais nova: " << iadadePessoaN;
}
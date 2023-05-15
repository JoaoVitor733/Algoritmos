#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia um vetor S contendo os salários dos funcionários de uma empresa com, no 
máximo, 100 funcionários, sendo que para terminar a entrada será fornecido o valor -1. Após toda a entrada 
ter sido realizada, leia o valor de um reajuste. Em seguida, gere e escreva um segundo vetor R contendo todos 
os salários de S já reajustados.*/
int main() {
    cout << "\n\tCADASTRO DE SALARIOS";
    cout << "\n\nDigite '-1' para encerrar o cadastro!\n\n";
    float S[5], R[5], reajuste;
    short int  i = 0;
    do{
        cout << "\nDigite o " << i+1 << "o. salario: ";
        cin>>S[i];
        i++;
    }while((S[i-1] != -1)  && (i != 5));
    do{ cout << "\nDigite a porcentagem do reajuste(entre 0 a 100%): ";
        cin >> reajuste;
    }while(reajuste < 0 || reajuste > 100);
    cout << "\nSalarios atuais: ";
    for(int j=0; j < i; j++){
        cout << S[j] << " ";
        R[j] = S[j]*(1+(reajuste/100));
    }
    cout << "\n\nSalarios com o reajuste: ";
    for(int j=0; j < i; j++){
        cout << R[j] << " ";
    }
}

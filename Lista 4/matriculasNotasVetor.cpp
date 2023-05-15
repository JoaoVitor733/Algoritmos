#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matrículas dos 
alunos (inteiros) e N suas respectivas notas (o tamanho deve ser digitado pelo usuário). Calcule a média de 
todas as notas de N. Escreva primeiramente o conjunto das notas maiores do que a média calculada. Em 
seguida, escreva as matrículas dos alunos cujas notas foram menores do que a média. */
int main() {
    short int qtd;
    do{ cout << "\nDigite a quantidade de alunos: ";
        cin >> qtd;
    }while(qtd < 0);
    short int N[qtd], media = 0;
    int M[qtd];
    for(int i = 0; i < qtd; i++){
        cout << "\nDigite a matricula do " << i+1 << "o. aluno: ";
        cin >> M[i];
        do{ cout << "\nDigite a nota do " << i+1 << "o. aluno: ";
            cin >> N[i];
        }while(N[i] < 0 || N[i] > 10); 
        media += N[i];
    }
    media /= qtd;
    cout << "\nAlunos com media maior que a media("<<media<<"): ";
    for(int i = 0; i < qtd; i++){
        if(N[i] > media) cout << "\n\nAluno " << i+1 << " e a nota foi: " << N[i];       
    }
    cout << "\n\nMatriculas de alunos com nota menor que a media("<<media<<"): ";
    for(int i = 0; i < qtd; i++){
        if(N[i] < media) cout << "\n\nAluno de matricula: " << M[i];       
    }
}

#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia dez conjuntos de dois valores, o primeiro representando a idade do aluno e o 
segundo representando a sua altura em metros, e armazene-os em dois vetores (Idade de Altura). Verifique 
e escreva a idade do aluno mais alto, a idade do aluno mais baixo e a média das alturas dos alunos maiores 
de idade*/
int const tam = 5;
int main(){
    short int idade[tam], idadeMaisAlto, idadeMaisBaixo, qtd = 0;
    float altura[tam], menorAltura = 5, maiorAltura = 0, media = 0;
    for(int i = 0; i < tam; i++){
        do{ cout << "\nDigite a idade do " << i+1 << "o. aluno: ";
            cin>>idade[i];
        }while(idade[i] < 1 || idade[i] > 200);
        do{ cout << "\nDigite a altura do " << i+1 << "o. aluno em m: ";
            cin>>altura[i];
        }while(altura[i] > 4 || altura[i] <= 0);
        if(altura[i] > maiorAltura){
            idadeMaisAlto = idade[i];
            maiorAltura = altura[i];
        } 
        if(menorAltura > altura[i]){
            menorAltura = altura[i];
            idadeMaisBaixo = altura[i];
        } 
        if(idade[i] >= 18){ 
            media+=altura[i];
            qtd++;
        }
    } 
    cout << "\nIdade do aluno mais alto: " << idadeMaisAlto << "\n\nIdade do aluno mais baixo: " << idadeMaisBaixo;
    cout << "\n\nMedia dos alunos maiores de idade: " << media/qtd;
}

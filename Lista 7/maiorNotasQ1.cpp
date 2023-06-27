#include <iostream>
using std::cout;
using std::cin;
/*1. Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada 
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um 
algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, utilize 
duas funções: uma que determine o maior valor entre as notas (de provas ou de 
trabalhos) e outra que calcule a média aritmética das duas maiores notas. */

float calcularMedia(float maiores[]);

float maioresNotas(float notas[]);

int main(){
    float notas[4];
    float media;
    cout << "\nNotas das provas: \n";
    for(int i = 0; i < 2; i++){
        do{ cout << "\n" << i+1 << "a. nota: ";
            cin >> notas[i];
        }while(notas[i] < 0 || notas[i] > 10);
    }

    cout << "\nNotas dos trabalhos: \n";
    for(int i = 2; i < 4; i++){
        do{
            cout << "\n" << i-1 << "a. nota: ";
            cin >> notas[i];
        }while(notas[i] < 0 || notas[i] > 10);
    }
    media = maioresNotas(notas);
    cout << "\nMedia final: " << media;
}

float calcularMedia(float maiores[]){
    return (maiores[0]+maiores[1])/2;
}

float maioresNotas(float notas[]){
    short int cont = 0;
    float media, maiores[2];
    for(int i = 1; i < 4; i+=2){
       if(notas[i] < notas[i-1]) notas[i] = notas[i-1];
       maiores[cont] = notas[i];
       cont++;
    }

    media = calcularMedia(maiores);
    return media;
}

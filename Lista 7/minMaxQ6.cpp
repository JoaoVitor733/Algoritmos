#include <iostream>
using std::cout;
using std::cin;
/*Elaborar um algoritmo que leia um vetor de 10 posições de inteiros e chame uma 
função MinMax. Esta função deve receber o vetor lido e, por referência, duas variáveis 
inteiras, min e max. O objetivo da função é buscar os valores do menor e maior 
elementos do vetor e atribuir às variáveis min e max respectivamente*/
const short int tam = 4;

void MinMax(int vetor[], int *min, int *max);

int main(){
    int v[tam], min, max;
    for(int i = 0; i < tam; i++){
        cout << "\nDigite o elemento do vetor[ " << i+1 << " ]: ";
        cin >> v[i];
    }
    MinMax(v, &min, &max);
    cout << "\nMaior elemento: " << max;
    cout << "\n\nMenor elemento: " << min << "\n";

}

void MinMax(int vetor[], int *min, int *max){
    *min = vetor[0];
    *max = vetor[0];
    for(int i = 1; i < tam; i++){
        if(vetor[i] > *max) *max = vetor[i];
        if(vetor[i] < *min) *min = vetor[i];
    }

}

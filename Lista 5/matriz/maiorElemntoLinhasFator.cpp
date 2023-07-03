#include <iostream>
using std::cout;
using std::cin;
/* Escreva um algoritmo que leia uma matriz M(12,13) e multiplique todos os 13 elementos de cada uma das 
12 linhas de M pelo maior elemento daquela linha. Escreva a matriz lida e a modificada.*/
const short int n = 2, m = 3;
int main(){
    int M[n][m],  maiorValores[n], maior;
    bool primeiraVez;
    for(int i = 0; i < n; i++){
        primeiraVez = true;
        for(int j = 0; j < m; j++){
            cout << "\nA[" <<i+1<<"][" << j+1 << "]: ";
            cin >> M[i][j];
            if(primeiraVez) maior = M[i][j];
            else if(maior < M[i][j])
                maior = M[i][j];  
        }
        maiorValores[i] = maior;
    }
    cout << "\nMatriz Original: \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "\t" << M[i][j] << " ";
            M[i][j]*=maiorValores[i];
        }
        cout << "\n";
    }
    cout << "\nMatriz Modificada: \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "\t" << M[i][j] << " ";
        }
        cout << "\n";
    }
}

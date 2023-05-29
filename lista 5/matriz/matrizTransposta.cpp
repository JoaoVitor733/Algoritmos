#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia uma matriz 3x3 e gere automaticamente uma nova matriz que seja a matriz 
transposta da primeira (troque as linhas por colunas).*/
int main(){
    int m[3][3], mT[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "A["<<i+1<<"][" << j+1<< "]:"<<  " ";
            cin>>m[i][j];
            mT[j][i] = m[i][j];
        }
        cout << "\n";
    }
    cout << "\nMatriz transposta: \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mT[i][j] << " ";
        }
        cout << "\n";
    }
}

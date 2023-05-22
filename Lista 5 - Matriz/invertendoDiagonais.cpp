#include <iostream>
using std::cin;
using std::cout;
/*Escreva um algoritmo que leia uma matriz M(10,10) e a escreva. Troque, a seguir:
os elementos da diagonal principal pelos elementos da diagonal secundária
os elementos da linha 5 com os da coluna 10. Escreva a matriz modificada.*/
int const n = 10;
int main() {
    int M[n][n], aux;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "\nM[" << i+1 << "][" <<j+1 << "]: ";
            cin >> M[i][j];
        }
    }
    cout << "\nMATRIZ ORIGINAL\n\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n\nTROCANDO OS ELEMENTOS DAS DIAGONAIS\n\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                aux = M[i][j];
                M[i][j] = M[i][(n-1)-j];
                M[i][(n-1)-j] = aux;
                break;
            }
        }
    }
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n\nTROCANDO A LINHA 5 PELA COLUNA 10\n\n";
    for(int j = 0; j < n; j++){
        aux =  M[j][9];
        M[j][9] = M[4][j];
        M[4][j] = aux;
    }
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }
}

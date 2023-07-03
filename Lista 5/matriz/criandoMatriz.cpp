#include <iostream>
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia duas matrizes M(4,6) e N(4,6) e crie uma matriz que seja: 
a) o produto de M por N;
b) a soma de M com N;
c) a diferença de M com N;
Escrever as matrizes calculadas.*/
int const l = 2, c = 3;
int main() {
    int M[l][c], N[l][c], prod[l][c], soma[l][c], dif[l][c];
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << "\nM[" << i+1 << "][" <<j+1 << "]: ";
            cin >> M[i][j];
            cout << "\nN[" << i+1 << "][" <<j+1 << "]: ";
            cin >> N[i][j];
            prod[i][j] = M[i][j]*N[i][j];
            soma[i][j] = M[i][j]+N[i][j];
            dif[i][j] = M[i][j]-N[i][j];           
        }
    }
    cout << "\nMATRIZ ORIGINAL M\n\n";
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }

     cout << "\nMATRIZ ORIGINAL N\n\n";
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << N[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n\nPRODUTO DAS MATRIZES\n\n";
    for(int i = 0; i < l; i++){
         for(int j = 0; j < c; j++){
            cout << prod[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n\nSOMA DAS MATRIZES\n\n";
    for(int i = 0; i < l; i++){
         for(int j = 0; j < c; j++){
            cout << soma[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n\nDIFERENCA DAS MATRIZES\n\n";
    for(int i = 0; i < l; i++){
         for(int j = 0; j < c; j++){
            cout << dif[i][j] << "\t";
        }
        cout << "\n";
    }   
}

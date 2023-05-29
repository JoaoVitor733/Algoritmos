#include <iostream>
using std::cout;
using std::cin;
/*Elabore um algoritmo que leia uma matriz A[12][12] e retorna a média aritmética dos elementos abaixo da 
diagonal principal.*/
const short int n = 4;
int main(){
    short int A[n][n], value = 0, cont = 0; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "A[" << i+1 << "][" << j+i << "]: ";
            cin >> A[i][j];
            if(i > j){
                value+=A[i][j];
                cont++;
            }
        }
    }
    cout << "\nValores abaixo da diagonal principal: \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i > j) cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\nMedia dos valores abaixo da diagonal principal: " << value/cont;
}

#include <iostream>
using std::cout;
using std::cin;
/*Elabore um algoritmo que leia uma matriz MxN, verifique e escreva as coordenadas (linha e coluna) do maior 
e do menor elementos.*/
const short int m = 3, n = 3;
int main(){
    short int M[m][n],xMaior, xMenor, yMaior, yMenor, maior, menor;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "\nA[" <<i+1<<"][" <<j+1 <<"]: ";
            cin >> M[i][j];
            if((i == 0) && (j == 0)){
                maior = M[i][j];
                menor = M[i][j];
                xMaior = i;
                xMenor = i;
                yMaior = j;
                yMenor = j;
            }else if(maior < M[i][j]){
                        maior = M[i][j];
                        xMaior = i;
                        yMaior = j;
                    }else if(menor > M[i][j]){
                            menor = M[i][j];
                            xMenor = i;
                            yMenor = j;
                        }
        }
    }
    cout << "\nMaior elemento " << maior << " na posicao [" << xMaior << "][" << yMaior << "]";
    cout << "\n\nMenor elemento " << menor << " na posicao [" << xMenor << "][" << yMenor << "]\n";
}

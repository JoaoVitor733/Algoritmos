#include <iostream>
using std::cout;
using std::cin;
/*Escreva um algoritmo que leia uma matriz A(15,5) e a escreva. Verifique, a seguir, quais os elementos de A 
que estão repetidos e quantas vezes cada um está repetido. Escrever cada elemento repetido com uma 
mensagem dizendo quantas vezes cada elemento aparece em A.*/
const short int n = 4, m = 2;
int main(){
    int A[4][2], aux[n*m], unicos[n*m];
    short int cont = 0, cont1 = 1, vezes;
    bool unico;
    for(int i = 0; i < n; i++){
        for(int j=0; j < m; j++){
            cout << "\nA[" <<i+1<<"][" << j+1 << "]: ";
            cin >> A[i][j];
            aux[cont] = A[i][j];
            cont++;
        }
    }
    cout << "\nMatriz A: \n";
    for(int i = 0; i < n; i++){
        for(int j=0; j < m; j++){
            cout <<  "\t"<<  A[i][j] << " ";
        }
        cout << "\n";
    }

    for(int i = 0; i < cont; i++){
        unico = true;
        if(i == 0) unicos[i] = aux[i];
        else{
            for(int j = 0; j < i; j++){
                if(aux[i] == unicos[j]) unico = false;
            }
            if(unico) {
                unicos[cont1] = aux[i];
                cont1++;
            }
        }
    }
    
    for(int i = 0; i < cont1; i++){
        vezes = 0;
        for(int j = 0; j < cont; j++){
            if(unicos[i] == aux[j]) vezes++;
        }
        if(vezes>1) cout << "\nO numero " << unicos[i] << " apareceu " << vezes << " vezes na matriz A!\n";
    }
}

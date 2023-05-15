#include <iostream>
using std::cin;
using std::cout; 
/*Elabore um algoritmo que leia um vetor ORIGINAL de 20 posições de inteiro, verifique e informe se os seus 
elementos estão em ordem crescente, ordem decrescente ou ordem aleatória.*/
int main() {
    int original[5];
    bool crescente = false, decrescente = false;
    for(int i = 0; i < 5; i++){
        cout << "\nDigite o valor da " << i+1 << "a. posicao: ";
        cin >> original[i];
        if(i != 0){
            if(original[i] > original[i-1]) crescente = true;
            else if(original[i] < original[i-1]) decrescente = true;          
        }
    }
    cout << "\nO vetor esta ";
    if(crescente && decrescente) cout << " em ordem aleatoria!";
    else if(crescente) cout << " em ordem crescente!";
        else if(decrescente) cout << " em ordem decrescente!";
             else cout << " com elementos iguais!";  
}

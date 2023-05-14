#include <iostream>
using namespace std;
/* Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e 
escreva-os na ordem solicitada. */
int main(){
    short int  v1, v2,v3, aux;
    char ordem;
    cout << "\nDigite 1o. valor: ";
    cin >> v1;
    cout << "\nDigite 2o. valor: ";
    cin >> v2;
    if(v2 < v1){ aux = v2; v2 = v1; v1 = aux;} //troca de valores
    cout << "\nDigite 3o. valor: ";
    cin >> v3;  
    if(v3 < v2){aux = v3; v3 = v2; v2 = aux;} //troca de valores
    if(v2 < v1){ aux = v2; v2 = v1; v1 = aux;} //troca de valores
    cout << "\nDigite 'c' para ordenar em ordem crescente e 'd' para decrescente: ";
    cin >> ordem;
    if(ordem == 'c') cout << "\n" << v1 << " " << v2 << " " << v3;
    else if(ordem == 'd') cout << "\n" << v3 << " " << v2 << " " << v1;
         else cout << "\nOrdem invalida!";
}

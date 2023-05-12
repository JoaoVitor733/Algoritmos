#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo
vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e
assim sucessivamente. Ao final, escreva os vetores A e B.*/
int main(){
    int A[5],B[5];
    for(int i=0; i < 5; i++){
        cout << "Digite o valor da " << i+1 << "a. posicao: ";
        cin >> A[i];
        B[4-i] = A[i];
    }
    cout << "A\tB\n";
    for(int i=0; i < 5; i++){
        cout << A[i] << "\t" << B[i] << "\n";
    }
}
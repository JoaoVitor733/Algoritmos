#include <iostream>
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia um vetor V de 10 posições de inteiros, não permitindo que sejam digitados 
números negativos. Em seguida, leia um número inteiro qualquer e verifique se o número existe no vetor. Se 
existir, informe o seu índice. Se não existir, informe a mensagem “Número não localizado!”.
*/
int main(){
    int v[5], n;
    bool flag = true, primeiraVez = true;
    for (int i = 0; i < 5; i++){
        do{
            cout << "\nDigite o valor da " << i + 1 << "a. posicao: ";
            cin >> v[i];
        }while(v[i] < 0);
    }
    cout << "\nDigite um numero: ";
    cin >> n;
    cout << "\nO valor " << n;
    for (int i = 0; i < 5; i++){
        if(n == v[i]){
            if(primeiraVez){ 
                cout << " existe no vetor na posicao: ";
                primeiraVez = false;
            }
            cout << "|"<< i+1 << "| ";
            flag = false;
        }
    }
    if(flag) cout << " nao foi localizado no vetor!";
}

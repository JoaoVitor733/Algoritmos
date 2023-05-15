#include <iostream>
using std::cin;
using std::cout;
/*Elabore um algoritmo que: 
Solicite um número inteiro N ao usuário. 
Declare um vetor V com N elementos inteiros. 
Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro 
do anterior. 
Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor 
elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário. Mostre o vetor 
antes e depois da mudança. ”.
*/
int main(){
    int n,x;
    bool flag = true;
    do{
        cout << "\nDigite um numero(maior que 0 e inteiro): ";
        cin >> n;
    }while(n < 0);
    int v[n];
    v[0] = n;
    for (int i = 1; i < n; i++){
        v[i] = v[i-1] * 2;
    }
    cout << "\nVetor original: ";
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << "\n\nDigite um valor x: ";
    cin >> x;
    for(int i = 0; i < n; i++){
        if(v[i] == x){
            flag = false;
            v[i] = n;
            v[0] = x;
        }
    }
    if(flag) cout << "\nO valor x nao existe no vetor!";
    else{
        cout << "\nVetor final: ";
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
         }
    }
}

#include <iostream>
using std::cin;
using std::cout;
/*. Elabore um algoritmo que leia 20 números inteiros obrigatoriamente diferentes e armazene-os em um vetor. 
Cada vez que o número digitado já existir no vetor, o algoritmo deverá computar mais um erro. Ao final 
escreva o vetor e o total de erros que o usuário cometeu..*/
int const tam = 5;
int main(){
    int v[tam];
    bool naoSair;
    short int erros=0;
    for(int i = 0; i < tam; i++){
        do{ 
            naoSair = false;
            cout << "\nDigite o " << i+1 << "o. elemento: ";
            cin >> v[i];
            if(i != 0){
                for(int j=0; j<i; j++){
                    if(v[i] == v[j]) naoSair = true;
                }
                if(naoSair){ 
                    cout << "\nValor existente, digite novamente!\n";
                    erros++;
                }
            }
            
        }while(naoSair);
    }
    cout << "\nVetor final: ";
    for(int i = 0; i < tam; i++){
        cout << v[i] << " ";
    }
    cout << "\n\nQuatidade de erros: " << erros;
}

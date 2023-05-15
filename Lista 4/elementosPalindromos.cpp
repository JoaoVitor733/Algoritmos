#include <iostream>
using std::cin;
using std::cout;
/*. Elabore um algoritmo que leia um vetor de 20 posições de inteiros e verifique se ele é um palíndromo, ou 
seja, se a sua leitura em qualquer direção é a mesma. Exemplo: O vetor 1 2 3 4 5 6 6 5 4 3 2 1 é um palíndromo, 
pois se for lido de frente para trás ou de trás para frente terá exatamente os mesmos elementos. */
int main() {
    int v[5];
    bool flag = true;
    for(int i = 0; i < 5; i++){
        cout << "\nDigite o valor da " << i+1 << "a. posicao: ";
        cin >> v[i];
    }

    for(int i = 0; i < 2; i++){
        if(v[i] != v[4-i]) flag = false;
    }
    if(flag) cout << "\nEh um palindromo!!";
    else cout << "\nNao eh um palindromo!!";
}

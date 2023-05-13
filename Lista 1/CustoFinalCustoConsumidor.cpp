#include <iostream>
using namespace std;
/* O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do 
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem 
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de 
fábrica de um carro e escreva o custo ao consumidor. */
int main() {
    float custoFabrica, custoConsumidor;
    cout << "\nCusto de fabrica de um carro: ";
    cin >> custoFabrica;
    custoConsumidor = custoFabrica*1.73;
    cout << "\nValor final: " << custoConsumidor;
}

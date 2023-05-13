#include <iostream>
using namespace std;
/*Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o 
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter.  */
int main() {
    int qtdD;
    float c;
    cout << "Digite a quantidade de dolar a ser convertido: ";
    cin >> qtdD;
    cout << "\nDigite a cotacao do dolar em R$: ";
    cin >> c;
    cout << "\nValor em reais: R$" << c*qtdD; 
}

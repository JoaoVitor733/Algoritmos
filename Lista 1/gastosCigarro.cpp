#include <iostream>
using namespace std;
/*
Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das 
informações número de anos que ele fuma, quantidade] de cigarros fumados por dia e preço de 
uma carteira.
*/

int main() {
    int a,c;
    float p;

    cout << "Digite a quantidade de anos que voce fuma: ";
    cin >> a;
    cout << "\nDigite a quantida de cigarros fumados por dia: ";
    cin >> c;
    cout << "\nDigite o valor medio da carteira durante esse tempo: ";
    cin >> p;

    cout << "\nValor gasto: R$" << ((365*a)*c*p)/20;
        
}
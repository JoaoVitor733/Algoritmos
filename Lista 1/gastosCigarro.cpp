#include <iostream>
using namespace std;
/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das 
informações número de anos que ele fuma, quantidade, de cigarros fumados por dia e preço de 
uma carteira.*/
int main() {
    int anos,qtd;
    float preco;
    cout << "Digite a quantidade de anos que voce fuma: ";
    cin >> anos;
    cout << "\nDigite a quantidade de cigarros fumados por dia: ";
    cin >> qtd;
    cout << "\nDigite o valor medio da carteira durante esse tempo: ";
    cin >> preco;
    cout << "\nValor gasto: R$" << ((365*anos)*qtd*preco)/20;        
}

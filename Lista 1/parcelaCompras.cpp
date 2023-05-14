#include <iostream>
using namespace std;
/*Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de 
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos 
a vista ou parcelado em até 10 vezes sem juros. */
int main(){
    float valor;
    int parcelas;
    cout << "\nDigite o valor da sua compra: ";
    cin >> valor;
    cout << "\nParcelamos em ate 10 vezes sem juros, deseja parcelar em qaunatas vezes? ";
    cin >> parcelas;
    cout << "\nValor de cada parcela: " << valor/parcelas;
}

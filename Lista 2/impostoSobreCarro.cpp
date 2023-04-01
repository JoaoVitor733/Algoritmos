
#include <iostream>
using namespace std;
/*
Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros 
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide 
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o 
imposto a ser pago. 
*/

int main(){
    int a;
    float p;

    cout << "\nDigite o ano de fabricacao de seu carro: ";
    cin >> a;
    cout << "\nDigite o preco de seu carro:";
    cin >> p;

    if(a < 1990) cout << "\nImposto a ser pago: " << p*0.01;     
    else  cout << "\nImposto a ser pago: " << p*0.15; 
}

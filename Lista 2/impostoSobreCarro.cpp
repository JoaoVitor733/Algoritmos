#include <iostream>
using namespace std;
/*Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros 
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide 
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o 
imposto a ser pago. */
int main(){
    int ano;  
    float preco;
    cout << "\nDigite o ano de fabricacao do seu carro: ";
    cin >> ano;
    cout << "\nDigite o preco do seu carro:";
    cin >> preco;
    if(ano < 1990) cout << "\nImposto a ser pago: " << preco*0.001;     
    else  cout << "\nImposto a ser pago: " << preco*0.015; 
}    

#include <iostream>
using namespace std;
/*
Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por 
um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela 
abaixo: 
CONSUMO (Km/l) MENSAGEM 
Menor que 8 Venda o carro! 
Entre 8 e 12 Econômico! 
Maior que 12 Super econômico!*/
int main(){
    float distancia, gasolina, consumo;

    cout << "Digite os Km de um percurso: ";
    cin >> distancia;
    cout << "Digite o consumo de gasolina desse percurso: ";
    cin >> gasolina;
    consumo = distancia/gasolina;

    if(consumo < 8) cout << "Venda o carro!!";
    else if((consumo >= 8) && (consumo <= 12)) cout << "Economico!!";
         else cout << "\nSuper economico!!";
}
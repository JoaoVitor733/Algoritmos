#include <iostream>
using namespace std;
/*Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por 
um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela 
abaixo: 
CONSUMO (Km/l) MENSAGEM 
Menor que 8 Venda o carro! 
Entre 8 e 12 Econômico! 
Maior que 12 Super econômico!*/
int main(){
    float distancia, gasolina, consumo;
    cout << "\nDigite a distancia do percurso: ";
    cin >> distancia;
    cout << "\nDigite a quantidade gasta de gasolina: ";
    cin >> gasolina;
    consumo = distancia/gasolina;
    if(consumo < 8) cout << "\nVenda o carro!!";
    else if((consumo >= 8) && (consumo <= 12)) cout << "\nEconomico!!";
         else cout << "\nSuper economico!!";
}

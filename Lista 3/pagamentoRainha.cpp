#include <iostream>
using namespace std;
/* Uma rainha requisitou os serviços de um monge, o qual exigiu o pagamento em grãos de trigo da seguinte 
maneira: os grãos de trigo seriam dispostos em um tabuleiro de xadrez, de tal forma que a primeira casa 
do tabuleiro tivesse um grão, e as casas seguintes o dobro da anterior. Considere que o tabuleiro de 
xadrez é 8x8 e que o número da casa varia de 1-8 para a primeira linha, de 9-16 para a segunda linha e 
assim sucessivamente. Construa um algoritmo que calcule quantos grãos de trigo a Rainha deverá pagar 
ao monge a partir da leitura do número da casa desejada.*/
int main(){
    short int valueHouse;
    double value = 1;
    cout << "\nEnter the value of the house: ";
    cin >> valueHouse;
    for(int i=0; i < valueHouse; i++){
       value *= 2;
    }
    cout << "\nThe amount to be paid by the queen and: " << value << " seds!";
}
#include <iostream> 
using namespace std;
/*Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar, 
verifique e escreva se o parcelamento foi com juros ou se foi sem juros.*/
int main(){
    float valor, valorP;
    short int parcela;
    cout << "\nDigite o valor da sua compra: ";
    cin >> valor;
    cout << "\nDigite o valor das parcelas: ";
    cin >> valorP;
    cout << "\nDigite em quantas vezes foi parcelado: ";
    cin>>parcela;
    if(parcela*valorP > valor) cout << "\nSeu parcelamento foi com juros de: R$" << (parcela*valorP) - valor;
    else if(parcela*valorP == valor) cout << "\nSeu parcelamento foi sem juros";
        else cout << "\nAlgum valor foi digitado incorretamente!!";
}
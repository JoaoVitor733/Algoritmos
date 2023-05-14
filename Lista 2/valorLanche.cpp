
#include <iostream>
using namespace std;
/*O cardápio de uma lanchonete é o seguinte: 
Sanduíche Código Descrição Preço Unitário 
100 Cachorro quente 1,10 
101 Baurú simples 1,30 
102 Baurú com ovo 1,50 
103 Hamburger 1,10 
104 Cheesburger 1,30 
Bebida 
Código Descrição Preço Unitário 
105 Refrigerante 1,00 
106 Suco 2,00 
107 Nescau 1,50 
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade 
de cada um e calcule o valor a ser pago por aquele lanche. */
int main(){
    int cLanche, cBebida, qtdLanche, qtdBebida;
    float p;
    cout << "\nDigite o codigo do pedido do seu lanche(100,101,102 ou 104) e sua quantidade: ";
    cin >> cLanche >> qtdLanche;
    switch(cLanche){
        case 100: p = qtdLanche * 1.1; break;
        case 101: p = qtdLanche * 1.3; break;
        case 102: p = qtdLanche * 1.5; break;
        case 103: p = qtdLanche * 1.1; break;
        case 104: p = qtdLanche * 1.3; break;
        default: cout << "\nCodigo invalido, o preco nao vai conter o valor do lanche\n";
        p = 0;
    }
    cout << "\nDigite o codigo da sua bebida(105,106 ou 107) e sua quatidade: ";
    cin >> cBebida >> qtdBebida;
    switch(cBebida){
        case 105: p += qtdLanche * 1.0; break;
        case 106: p += qtdLanche * 2; break;
        case 107: p += qtdLanche * 1.5; break;
        default: cout << "\nCodigo invalido, o preco nao vai conter o valor da bebida\n";
    }
    cout << "\nValor da compra R$" << p;    
}

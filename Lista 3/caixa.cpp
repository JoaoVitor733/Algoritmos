#include <iostream>
using namespace std;
/*Elabore um algoritmo que simule o caixa de um supermercado. Para cada produto da compra, o algoritmo 
deve ler o seu código, o valor unitário e a quantidade adquirida. Após as informações do produto, o 
algoritmo deve mostrar o subtotal da compra e perguntar se o usuário deseja continuar (S-sim, N-não). 
Caso o usuário escolha ‘S’, o algoritmo deverá pedir os dados do próximo produto. Caso escolha ‘N’, o 
algoritmo deverá informar o total da compra e a quantidade total de produtos adquiridos. Em seguida 
deve ler o valor pago e informar se está correto, existe troco ou está insuficiente.*/
int main(){
    short int codigo, qtd, qtdTotal;
    float valor, valorT = 0;
    char escolha;
    do{
        cout << "\nDigite o codigo do produto: ";
        cin >> codigo;
        do{ cout << "\nDigite a quantidade do produto: ";
            cin >> qtd;
        }while(qtd <= 0);
        do{ cout << "\nDigite o valor unitario: ";
            cin >> valor;
        }while(valor <= 0);
        valorT += qtd*valor;
        cout << "\nO subtotal da compra: R$" << valorT;
        do{ cout << "\n\nDeseja continuar (s-sim, n-nao)?";
            cin >> escolha;
        }while(escolha != 's' && escolha != 'n');
        qtdTotal += qtd;
    }while(escolha == 's');
    cout << "\nDigite o valor a ser pago: ";
    cin >> valor;
    if(valor > valorT) cout << "\nO troco eh de: R$" << valor-valorT;
    else if(valor < valorT) cout << "\nVoce ficou devendo: R$" << valor-valorT;
         else cout << "\nO valor esta correto!";
}
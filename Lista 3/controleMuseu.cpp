#include <iostream>
using namespace std;
/*Escreva um algoritmo que auxilie o controle de entradas de um museu, dependendo da idade do 
visitante. Considere que:
- Crianças com idade < 6 anos não pagam. 
- Crianças de 6 a 12 anos pagam 30%. 
- De 13 a 18 anos, e acima de 60 anos, pagam 50%. 
- Os demais pagam 100%. 
O algoritmo deve ler, inicialmente, o preço da entrada para aquele dia (sem desconto). Em seguida deve 
solicitar a idade do visitante e informar o valor que ele deverá pagar. O algoritmo deve parar de solicitar 
a idade do visitante quando for digitado 0 para a idade. Ao final, o algoritmo deverá escrever dois totais: 
o total de dinheiro arrecadado e o total de desconto concedido pelo museu naquele dia.
*/
int main(){
    short int idade;
    float preco, valorT=0, valorD=0;
    do{ cout << "\nDigite o preco da entrada do dia(sem desconto): R$";
        cin >> preco;
    }while(preco <= 0);
    do{
        do{ cout << "\nDigite sua idade: ";
            cin >> idade;
        }while(idade < 0);
        if(idade > 6){
            if(idade >= 6 && idade <= 12) valorD+=(preco*0.3);
            else if(idade >= 13 && idade <= 18) valorD+=(preco*0.5);
            else valorT+=preco;
        }
    }while(idade != 0);
    cout << "\nValor arrecadado: " << valorT+valorD << "\n\nDesconto concedido: " << valorD;
}
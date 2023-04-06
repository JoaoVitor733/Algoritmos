
#include <iostream>
using namespace std;
/*Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que todos 
pagam R$ 100 mais um adicional conforme a seguinte tabela: 
• Crianças com menos de 10 anos pagam R$80; 
• Conveniados com idade entre 10 e 30 anos pagam R$50; 
• Conveniados com idade entre 31 e 60 anos pagam R$ 95; 
• Conveniados com mais de 60 anos pagam R$130.*/
int main(){
    short int idade, valor = 100;
    cout << "\nDigite a sua idade: ";
    cin >> idade;
    if(idade >= 0 && idade < 200){
        if(idade < 10) valor += 80;
        else if(idade >= 10 && idade <= 30) valor += 50;
             else if(idade >= 31 && idade <=60) valor += 95; 
                  else valor += 130;
    }else cout << "\nIdade invalida!!";
    cout << "\nO plano de saude a ser pago eh no valor de: R$" <<valor;
}
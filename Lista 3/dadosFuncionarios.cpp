#include <iostream>
using namespace std;
/*Uma loja tem, para cada um dos seus 10 funcionários, uma ficha contendo a identidade, o número de 
horas trabalhadas e a quantidade de dependentes do mesmo. Considerando que:
a) A empresa paga 12 reais por hora e 40 reais por dependentes (salário bruto).
b) Sobre o salário bruto são feitos descontos de 8,5% para o INSS e 5% para o IR (salário líquido).
Elabore um algoritmo que leia os dados de todos os funcionários, calcule e escreva os salários bruto 
(total) e líquido (total – descontos) de cada funcionário e a identidade de todos os funcionários com mais 
de 3 dependentes.*/
int main(){
    short int rg, qtdDependentes;
    float horasTrabalhadas, salaririoBruto, salarioLiquido;
    for(int i=0; i < 10; i++){
        cout << "\nDigite seu RG: ";
        cin >> rg;
        do{ cout << "\nDigite sua horas trabalhadas: ";
            cin >> horasTrabalhadas;
        }while(horasTrabalhadas < 0);
        do{ cout << "\nDigite a quantidade de dependentes: ";
            cin >> qtdDependentes;
        }while(qtdDependentes < 0);
        salaririoBruto = (12*horasTrabalhadas*qtdDependentes);
        salarioLiquido = salaririoBruto-((salaririoBruto*0.085)-(alaririoBruto*0.05));
        cout << "\nSalario bruto: R$" << salaririoBruto << " salario liquido: R$\n" << salarioLiquido;
        if(qtdDependentes > 3) cout << "\nRG da pessoa com mais de 3 dependentes: \n";
    }
}
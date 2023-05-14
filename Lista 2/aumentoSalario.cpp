#include <iostream>
using namespace std;
/*Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, 
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e 
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de 
aumento. Mostre o salário antigo, o novo salário e a diferença. */
int main(){
    int codigo;
    float salario,novoSalario; 
    cout << "\nDigite o seu salario: ";
    cin >> salario;
    cout << "\nDigite o codigo de seu cargo: ";
    cin >> codigo;
    if(codigo == 101) novoSalario = salario*1.1;
    else if(codigo == 102) novoSalario = salario*1.2;
          else if(codigo == 103) novoSalario = salario*1.3;
                else novoSalario = salario*1.4;
    cout << "\nSalario antigo: " << salario << "\n\nAtual: " << novoSalario << "\n\nDiferenca: " <<novoSalario-salario;   
}

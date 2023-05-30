#include <iostream>
using std::cin;
using std::cout;
using std::string;
/*Uma empresa tem para cada um dos seus 200 funcionários uma ficha contendo o nome, 
número de horas trabalhadas e o número de dependentes. Considerando que:
- A empresa paga 12 reais por hora e 40 reais por dependentes;
- Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
Elabore um algoritmo que declare o registro do funcionário, e leia seus dados enquanto o 
usuário desejar cadastrar (não permitindo o cadastro de mais de 200 funcionários). Após a 
leitura, escreva o nome, salário bruto, os valores descontados para cada tipo de imposto e 
qual o salário líquido de cada um dos funcionários que foram cadastrados.*/
struct tFuncionarios{
    string nome;
    short int horasTra;
    short int dependetes;
    float salario;
};
int main(){
    tFuncionarios funcionario[200];
    short int i = 0, horas, depen;
    char sair;
    do{
        cout << "\nDigite o nome do " << i+1<< "o. funcionario: ";
        getline(cin, funcionario[i].nome);
        cout << "\nDigite as horas trabalhas do " << i+1<< "o. funcionario: ";
        cin >> funcionario[i].horasTra;
        cout << "\nDigite a quantidade de dependentes do " << i+1<< "o. funcionario: ";
        cin >> funcionario[i].dependetes;
        cout <<"\nNovo Cliente (S/N)? ";
        cin >> sair;
        horas = funcionario[i].horasTra;
        depen = funcionario[i].dependetes;
        funcionario[i].salario = (horas*12)+(40*depen);
        i++;
        getchar();
    }while(i < 200 && sair != 'N');
    for(int j= 0; j < i; j++){
        cout << "\n\nNome do " << j+1<< "o. funcionario: " << funcionario[j].nome;
        cout << "\n\nSalario bruto do " << j+1 << "o. funcionario: R$" << funcionario[j].salario;
        cout << "\n\nImposto do INSS: R$" << funcionario[j].salario*0.05;
        cout << "\n\nImposto de renda: R$" << funcionario[j].salario*0.085;
        cout << "\n\nSalario liquido do " << j+1 << "o. funcionario: " << funcionario[j].salario-(0.135*funcionario[j].salario);
    }
}


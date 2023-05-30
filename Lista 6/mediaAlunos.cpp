#include <iostream>
using std::cin;
using std::cout;
using std::string;
/*Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome, 
endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de 
todos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final.
*/
struct tAlunos{
    short int matricula;
    string nome;
    string endereco;
    float mediaGeral;
};
const short int n = 2;
int main(){
    tAlunos alunos[n];
    for(int i = 0; i < n; i++){
        cout << "\nDigite a matricula do " << i+1 << "o. aluno: ";
        cin >> alunos[i].matricula;     
        cout << "\nDigite o nome do " << i+1 << "o. aluno: ";
        getchar();
        getline(cin,alunos[i].nome);
        cout << "\nDigite o enderecodo " << i+1 << "o. aluno: ";
        getline(cin,alunos[i].endereco);
        cout << "\nDigite a media geral do " << i+1 << "o. aluno: ";
        cin >> alunos[i].mediaGeral;
    }
    cout << "\nAlunos: ";
    for(int i = 0; i < n; i++){
        cout << "\n\nMatricula: " << alunos[i].matricula; ;
        cout << "\nNome: " << alunos[i].nome;
        cout << "\nEndereco: " << alunos[i].endereco;
        cout << "\nMedia geral: " << alunos[i].mediaGeral;
        if(alunos[i].mediaGeral > 5) cout << "\nParabens, voce ganhou mais 0.5 pontos na media geral\n";
    }
}
#include <iostream>
using namespace std;
/* Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma, 
até que seja digitada uma média negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos 
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar 
as matrículas de todos os alunos que obtiveram médias superiores a 9.*/
int main(){
    short int matricula, cont=0, qtdApro = 0, qtdRep = 0, qtdRec = 0;
    float mediaF;
    cout << "\nDigite '-1' na media final para que o programa seja finalizado!";
    do{
        cont++;
        do{ cout << "\nDigite a media final do " << cont <<"o. aluno: ";
            cin >> mediaF;
        }while(mediaF < -2 || mediaF > 10);
        cout << "\nDigite a matricula do " << cont << "o. aluno: ";
        cin >> matricula;
        if(mediaF >= 7){
            qtdApro++;
            if(mediaF > 9) cout << "\nMatricula do aluno com media maior que 9: " << matricula;
        }else if(mediaF < 3) qtdRep++;
             else qtdRep++;
    }while(mediaF != -1);
    cout << "\nalunos aprovados: " << qtdApro << "\n\nalunos em recuperacao: " << qtdRec << "\n\nAlunos reprovados: " << qtdRep;
}
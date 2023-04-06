#include <iostream>
using namespace std;
/*Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a 
aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos N 
motoristas:
- O número da carteira de motorista (inteiro);
- Número de multas;
- O valor de cada uma das multas.
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados 
(somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista 
que obteve o maior número de multas*/
int main(){
    short int numCarteira, numMultas, qtdMotoristas, numCarteiraMaiorD;
    float valor = 0, valorF = 0, maiorValor = 0;   
    do{ cout << "\nDigite a quantidade de motoristas multados: ";
        cin >> qtdMotoristas;
    }while(qtdMotoristas < 0);
    for (int i=0; i < qtdMotoristas ; i++){
        cout << "\nO numero da carteira do " << i+1 << "o. motorista: ";
        cin >> numCarteira;
        do{ cout<< "\nDigite a quantidade de multas dele: ";
            cin >> numMultas;
        }while(numMultas < 0);
        for(int j=0; j < numMultas; j++){
            cout << "\nDigite o valor da " <<j+1 << "a. multa: ";
            cin >> valor;
            valorF += valor;
        }
        if(maiorValor  < valor-maiorValor){
            numCarteiraMaiorD = numCarteira;
            maiorValor = valor;
        }
    }   
    cout << "\nValor arrecadado pelo DETRAN: R$" << valorF;
    cout << "\n\nNumero da carteira com maior divida eh" << numCarteiraMaiorD ;
}
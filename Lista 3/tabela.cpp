#include <iostream>
using namespace std;
/*Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva 
uma tabela de resultados (formatada com linhas verticais e horizontais). A tabela deverá conter cada 
valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha). Finalizar a 
entrada de dados quando os 4 valores digitados forem iguais a zero. Se for digitado algum número 
negativo, solicitar que o usuário digite novamente até que o número seja positivo.*/
int main(){
    short int numberOne, numberTwo, numberThree, numberFor;
    do{
        do{ cout << "\nEnter number one: ";
            cin >> numberOne;
        }while(numberOne < 0);
        do{ cout << "\nEnter number two: ";
            cin >> numberTwo;
        }while(numberTwo < 0);
        do{ cout << "\nEnter number three: ";
            cin >> numberThree;
        }while(numberThree < 0);
        do{ cout << "\nEnter number for: ";
            cin >> numberFor;
        }while(numberFor < 0);
        cout << "\n" << numberOne << "\t" << numberTwo << "\t" << numberThree << "\t" << numberFor;
        cout << "\n" << numberOne*numberOne << "\t" << numberTwo*numberTwo << "\t" << numberThree*numberThree << "\t"<< numberFor*numberFor;
        cout << "\n" << numberOne*numberOne*numberOne << "\t" << numberTwo*numberTwo*numberTwo  << "\t" << numberThree*numberThree*numberThree << "\t" << numberFor*numberFor*numberFor;
    }while((numberOne == numberTwo) && (numberTwo == numberThree) && (numberThree == numberFor) && (numberFor != 0));
}
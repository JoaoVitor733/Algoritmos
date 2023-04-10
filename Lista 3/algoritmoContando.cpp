#include <iostream>
using namespace std;
/*Escreva um algoritmo que conte de 100 a 999 (inclusive) e exiba, um por linha, o produto dos três dígitos 
dos números. Por exemplo, inicialmente o programa irá exibir:
100 = 0 (1*0*0)
101 = 0 (1*0*1)
102 = 0 (1*0*2)
(...)
110 = 0 (1*1*0)
111 = 1 (1*1*1)
112 = 2 (1*1*2)
(...)
999 = 9*9*9=729
Faça o seu algoritmo dar uma pausa a cada 20 linhas para que seja possível ver todos os números pouco 
a pouco. Solicite que seja pressionada alguma tecla para ver a próxima sequência de números.
*/
int main(){
    short int value = 121, number1, number2, number3, flag;
    for(int i = 100; i < value; i++){
        number1 = i/100;
        number2 = ((i%100)/10);
        number3 = i%10;
        cout << "\n" << i << " = " <<number1*number2*number3 << " ("<< number1 << "*" << number2 << "*" << number3 << ")";
        if(i == value-1){
            do{ cout << "\n\nEnter a number one(1): ";
                cin >> flag;
            }while(flag != 1);
            if(value < 980) value+=20;
            else value += 19;
        }
    }
}
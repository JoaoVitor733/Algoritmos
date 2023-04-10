#include <iostream>
using namespace std;
/* Elabore um algoritmo que leia vários pares de dois números inteiros, calcule e escreva, para cada par, o 
resultado do primeiro elevado ao segundo (sem utilizar a função de potência) e a soma dos dois números 
em módulo. Considere que o módulo de um número representa a distância desse número à origem 
(ponto zero da reta real). Exemplo: Módulo de 9 = 9; módulo de -9 = 9.*/
int main(){
    short int num1, num2, cont;
    float result;
    char resp;
    do{
        result=1;
        cont = 0;
        cout << "\nEnter a number one(integer): ";
        cin >> num1;
        cout << "\nEnter a number two(integer): ";
        cin >> num2;
        if(num2 < 0){
            while(cont > num2){
                result *= num1;
                cont--;
            }
            result = 1/result;
        }else{
            while(cont < num2){
                result *= num1;
                cont++;
            }
        }
        cout << "\n" << num1 << "^" << num2 << "=" << result;
        if(num1 < 0) num1 *= -1;
        else if(num2 < 0) num2 *= -1;
        cout << "\n\nO modulo eh: " << num1+num2;
        do{cout << "\n\nDeseja continuar('n' - Nao e 's' - sim): ";
          cin >> resp;
        }while(resp != 'n'&& resp != 's');
    }while(resp != 'n');
}
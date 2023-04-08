#include <iostream>
using namespace std;
/*Elabore um algoritmo que implemente uma calculadora real: o usuário digita um número, depois a 
operação (+, -, *, /), outro número, outra operação, outro número, e assim continua até que ele digite 
enfim o sinal “=”, quando então a calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 
4 = 6. O algoritmo deve resolver a expressão na ordem de digitação*/
int main(){
    float result, number;
    char operation;
    cout << "\nEnter a number: ";
    cin >> number;
    result = number;
    do{   
        do{ cout << "\nEnter a operation('=','+','-','/' ou '*'): ";
            cin >> operation;
        }while((operation != '=') && (operation != '+')&& (operation != '-') && (operation != '/')&& (operation != '*'));    
        if(operation != '='){
            cout << "\nEnter a number: ";
            cin >> number;
        }
        switch(operation){
            case '+': result += number;
                break;
            case '-': result -= number;
                break;
            case '/': if(number != 0) result /= number;
                      else cout << "\ncannot divide by 0!\n";
                break;
            case '*': result *= number;
                break;
        }
    }while(operation != '=');
    cout << result;
}
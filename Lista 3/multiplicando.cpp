#include <iostream>
using namespace std;
/*Elabore um algoritmo leia várias vezes dois números inteiros quaisquer, multiplique-os sem utilizar a 
operação de multiplicação e escreva o resultado. O algoritmo deve parar quando os dois números 
digitados forem um positivo e o outro negativo (não necessariamente nesta ordem). Por exemplo: 4 * 2 
= 4 + 4.*/
int main(){
    short int number1, number2, result;
    do{
        result=0;
        cout << "\nEnter a number one(Integer): ";
        cin >> number1;
        cout << "\nEnter a number two(Integer): ";
        cin >> number2;
        for(int i = 0; i  < number2; i++){
            result += number1;
        }
        cout << "\n" << number1 << "*" << number2 << "="<< result << endl;
    }while(number1 >= 0 && number2 >= 0);
}
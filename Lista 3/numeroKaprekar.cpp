#include <iostream>
using namespace std;
/*O número 3025 possui a seguinte característica: 30+25 = 55 e 552 = 3025. Elaborar um algoritmo que leia 
N números de 4 algarismos e escreva a mensagem “positivo” se o número tiver essa característica e 
“negativo” se não tiver.
*/
int main(){
    short int number, sum, square,n;
    cout << "\nEnter a quantity of numbers: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        do{ cout << "\nEnter a number(between 1000 and 9999): ";
            cin >> number;
        }while(number < 1000 || numeber > 9999);
        sum = ((number/100)+(number%100));
        square = sum*sum;
        if(square == number) cout << "\nPositive!"
        else cout << "\nNegative!";
    }
}
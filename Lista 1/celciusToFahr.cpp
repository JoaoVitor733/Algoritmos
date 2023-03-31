#include <iostream>
using namespace std;
/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A 
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura 
em Celsius.
    */
int main() {
    float c;

    cout << "\nDigite a temperatura(celsius): ";
    cin >> c;

    cout << "\nConvertendo para gruas Fahrenheit fica: "
     << (9*c+160)/5;
}
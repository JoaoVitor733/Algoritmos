
#include <iostream>
using namespace std;
/*Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e 
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada. */
int main(){
    int n;
    char letra;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Digite 'a' para somar os 10 proximos antecessores e 's' para os sucessores: ";
    cin >> letra;
    if(letra == 'a') cout << "Soma dos antecessores: " << 5*((n-1)+(n-10));    
    else if(letra == 's') cout << "Soma dos sucessores: " << 5*((n+1)+(n+10));  
          else cout << "\nValor invalido!!";
}            

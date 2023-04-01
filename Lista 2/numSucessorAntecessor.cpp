
#include <iostream>
using namespace std;
/*
Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e 
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada. 
*/

int main(){
    int v;
    char l;

    cout << "Digite um valor: ";
    cin >> v;
    cout << "Digite 'a' para somar os 10 proximos antecessores e 's' para os sucessores: ";
    cin >> l;

    if(l == 'a') cout << "Soma dos antecessores: " << 5*((v-1)+(v-10));    
    else if(l == 's') cout << "Soma dos sucessores: " << 5*((v+1)+(v+10));  
          else cout << "\nValor invalido!!";
}

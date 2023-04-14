#include <iostream>
using namespace std;
/*Escreva um algoritmo que encontre o n-ésimo número primo maior que 11, sendo n um número digitado 
pelo usuário*/
int main(){
    unsigned short int n, cont=0, primo;
    cout << "\nDigite o valor de n: ";
    cin >> n;
    while(cont != 11){
        if(n%2!=0){
            primo = n;
            cont++;
        }
        n++;
    }
    cout << "\nEnesimo numero primo: " << primo;
}
#include <iostream>
using namespace std;
/*. Leia 3 números inteiros e escreva uma das seguintes mensagens: 
• Todos os números são iguais; 
• Todos os números são diferentes; 
• Apenas dois números são iguais.*/
int main(){
    int n1,n2,n3;
    cout << "\nDigite o 1o., 2o. e 3o. numero: ";
    cin >> n1 >> n2 >> n3;
    if((n1==n2) && (n2==n3)) cout << "\nTodos os numeros sao iguais!";
    else if((n1==n2) || (n2==n3)) cout << "\nApenas dois numeros sao iguais!";
         else cout << "\nTodos os numeros sao diferentes";
}
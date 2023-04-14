#include <iostream>
using namespace std;
/*Elabore um algoritmo que leia N números inteiros, calcule e escreva a soma dos
números primos no conjunto digitado. O valor de N deve ser digitado pelo
usuário*/
int main() {
  unsigned short int n, divisor, cont, somaNumPrimos = 0;
  char resp;
  do {
    cont = 0;
    divisor = 1;
    cout << "\nDigite um valor inteiros: ";
    cin >> n;
    while (cont <= 3 && divisor <= n) {
      if (n % divisor == 0) {
        cont++;
        cout << divisor << " ";
      }
      divisor++;
    }
    if (cont == 2) somaNumPrimos += n;
    cout << "\nDeseja continuar ('s' = sim e 'n' = nao): \n";
    cin >> resp;
  } while (resp != 's' || resp != 'S');
    cout << "\nSoma dos valores primos do conjuto digitado: " << somaNumPrimos;
}
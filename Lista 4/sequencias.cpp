#include <iostream>
using std::cin;
using std::cout;
/* Elabore um algoritmo que gere automaticamente um vetor de 30 elementos
contendo a sequencia de números inteiros escolhida pelo usuário no menu abaixo:
Menu Principal
------------------------------------------------------
1 - Sequência de Fibonacci
2 - Números Triangulares
3 - Números Primos
4 - Números Quadrangulares
5 - Divisíveis por 3 e 5 simultaneamente
6 - Sair*/
int main() {
    int sequencia[10];
    short int opcao, aux, cont, divisor, divisores;
    do {
    cout << "\n1 - Sequência de Fibonacci";
    cout << "\n2 - Números Triangulares";
    cout << "\n3 - Números Primos";
    cout << "\n4 - Números Quadrangulares";
    cout << "\n5 - Divisíveis por 3 e 5 simultaneamente";
    cout << "\n6 - Sair\n: ";
    cin >> opcao;
    cout << "[";
    switch (opcao) {
    case 1:
        for (int i = 0; i < 10; i++) {
            if (i <= 1) sequencia[i] = 1;
            else sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
            cout << " " << sequencia[i] << " ";
        }
      break;
    case 2:
        aux = 0;
        for (int i = 0; i < 10; i++) {
          aux += (i + 1);
          sequencia[i] = aux;
          cout << " " << sequencia[i] << " ";
        }
      break;
    case 3:
        cont = 0;
        aux = 1;
        while(cont < 10){ 
            divisor = 1;
            divisores = 0;
            while(divisores < 3 && divisor <= aux){
               if(aux % divisor == 0)
                   divisores++;
                divisor++;
            }  
            if(divisores == 2){
                sequencia[cont] = aux;
                cout << " " << sequencia[cont] << " ";
                cont++;
            }
            aux++;
        }
      break;
    case 4:
        for (int i = 1; i <= 10; i++) {
          sequencia[i] = i * i;
          cout << " " << sequencia[i] << " ";
        }
      break;
    case 5:
        cont = 0;
        aux = 1;
        while(cont < 10){
            if((aux % 3 == 0) && (aux % 5 == 0)){
                sequencia[cont] = aux;
                cout << " " << sequencia[cont] << " ";
                cont++;
            }
            aux++;
        }
      break;
    case 6: cout << "Saindo...";
        break;
    default: cout << "\nOpcao invalida, digite novamente!";
    }
    cout << "]";
    } while (opcao != 6);
}

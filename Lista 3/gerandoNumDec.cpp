#include <iostream>
using namespace std;
/*Elabore um algoritmo que leia N dígitos numéricos, e gere um único número decimal. Ex: (2,3,2,0) = 2320*/
int main(){
    unsigned short int valor, acumulador = 0, fator=1;
    char resp;
    do{
        do{ cout << "\nDigite um valor entre 0 e 9: ";
            cin >> valor;
        }while(valor < 0 || valor > 10);
        do{ cout << "\nDiseja continuar('s' - sim e 'n' - nao): ";
            cin >> resp;
        }while(resp != 'n' && resp != 'N' && resp != 's' && resp != 'S');
        acumulador += fator*valor;
        fator*=10;
    }while(resp != 'n' && resp != 'N');
    cout << "\nNumero decimal formado: " << acumulador;
}

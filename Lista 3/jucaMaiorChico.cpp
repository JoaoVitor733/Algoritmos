#include <iostream>
using namespace std;
/*Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por 
ano. Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja 
maior que Chico.*/
int main(){
    short int anos = 0, tamanhoChico = 150, tamanhoJuca = 110;
    do{
        tamanhoChico += 2;
        tamanhoJuca += 3;
        anos++;
    }while(tamanhoChico > tamanhoJuca);
    cout << "\nSao necessarios " << anos << " anos para que Juca seja maior que Chico";
}
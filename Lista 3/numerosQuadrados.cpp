#include <iostream>
using namespace std;
/* Elabore um algoritmo que leia um número inteiro qualquer e verifique se ele é quadrangular. Se for, 
mostrar os próximos 10 quadrangulares depois dele. Se não for, informar. OBS: Os números 
quadrangulares são 1, 4, 9, 16, 25, ..., ou seja, 1x1, 2x2, 3x3, 4x4, ...*/
int main(){
    short int value;
    int number;
    bool flag = true;
    do{ cout << "\nEnter a number: ";
        cin >> number;
    }while(number <= 0);
    for(int i = 1; i < number; i++){
        if(number == i*i){
            flag = false;
            value = i;
            break;
        }
    }
    if(flag) cout << "\nIt's not a perfect square!";
    else for(int i = value+1; i < value+10; i++){
            cout << " " << i*i;
         }
} 

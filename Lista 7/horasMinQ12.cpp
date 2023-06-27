#include <iostream>
using std::cin;
using std::cout;
/*Escreva uma função hm que converta minutos em horas-e-minutos. A função 
recebe um inteiro mnts e os endereços de duas variáveis inteiras, h e m, e atribui valores 
a essas variáveis de modo que m seja menor que 60 e que 60*h + m seja igual a mnts. 
Elabore um algoritmo que teste a função hm.*/
void hm(int min, int *m, int *h){
    *h = min/60;
    *m = min-(*h*60);
}
int main(){
    int mnts, m, h;
    cout << "\nDigite minutos para a conversao: ";
    cin >> mnts;
    hm(mnts, &m, &h);
    cout << h << "h : " << m << " m";
}
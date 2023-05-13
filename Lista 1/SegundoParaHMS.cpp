#include <iostream>
using namespace std;
/*Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso 
em horas, minutos e segundos. */
int main() {
    int s,h,m;
    cout << "Digite o tempo de duracao do evento: ";
    cin >> s; 
    h = s/3600; //horas
    s = s%3600;
    m = s/60;//segundos
    s = s%60;
    cout << h << "h "<< m << "m " << s << "s";
}

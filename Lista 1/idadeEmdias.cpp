#include <iostream>
using namespace std;
/*Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.*/
int main() {
    int a , m,d,dias;
    cout << "Ano de nascimento: ";
    cin >> a;
    cout << "Mes de nascimento: ";
    cin >> m;
    cout << "Dia de nascimento: ";
    cin >> d;
    dias = ((2023-a)*365)+((m-3)*30)+(29-d);
    cout << a << "/" << m << "/" << d << " = " << dias << " dias";
}

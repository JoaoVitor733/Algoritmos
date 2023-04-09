#include <iostream>
using namespace std;
/*Elabore um algoritmo que apresente um menu contendo as opções 1-Triângulo, 2-Quadrado, 3-
Retângulo, 4-Trapézio, 5-Círculo, 6-Sair. Em seguida, de acordo com a opção escolhida pelo usuário, o 
algoritmo deve solicitar as informações necessárias para cálculo da área, efetuar o cálculo e escrever o 
resultado. O algoritmo só deverá finalizar quando o usuário escolher a opção 6-Sair.
*/
int main(){
    short int opcao;
    float result, lenght, height, side, baseL, baseS,radius;
    do{
        cout<< "\n1-Triangle";
        cout<< "\n2-Square";
        cout<< "\n3-Rectangle";
        cout<< "\n4-Trapezoid";
        cout<< "\n5-Circle";
        cout<< "\n6-Exit";
        cout << "\n:";
        cin >> opcao;
        switch (opcao){
        case 1: cout << "\nEnter the value of the lenght: ";
                cin >> lenght;
                cout << "\nEnter the value of the height: ";
                cin >> height;
                result = (lenght*height)/2;
            break;    
        case 2: cout << "\nEnther the value of the side: ";
                cin >> side;
                result = side*side;
            break; 
        case 3:cout << "\nEnter the value of the lenght: ";
                cin >> lenght;
                cout << "\nEnter the value of the height: ";
                cin >> height;
                result = (lenght*height);
            break; 
        case 4: cout << "\nEnter the value of the large base: ";
                cin >> baseL;
                cout << "\nEnter the value of the smaller base: ";
                cin >> baseS;
                cout << "\nEnter the value of the height: ";
                cin >> height;
                result = ((baseL+baseS)*height)/2;
            break; 
        case 5: cout << "\nEnter the value of the radius: ";
                cin >> radius;
                result = 3.14*(radius*radius);
            break;
        case 6: cout << "\ngoing out!";
            break;     
        default: cout << "\nIvalid number!";
            break;
        }
        cout << "\nArea: " << result;
    }while(opcao!=6);
}
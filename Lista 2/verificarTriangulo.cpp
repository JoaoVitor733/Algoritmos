#include <iostream>
using namespace std;
/*. Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um 
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles 
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades: 
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados; 
• Equiláteros: tem os comprimentos dos três lados iguais; 
• Isósceles: tem os comprimentos de dois lados iguais; • Escaleno: tem os comprimentos dos três 
lados diferentes.*/
int main(){
    short int x,y,z;
    cout << "\nDigite os valors de x,y e z, respectivamente: ";
    cin >> x >> y >> z;
    if((x+y > z) && (y+z>x) && (x+z > y)){
        if((x==y)&&(y==z)) cout << "\nO triangulo eh equilatero!!";
        else if((x==y)||(y==z) || (x==z)) cout << "\nO triangulo eh isosceles!!";
             else cout << "\nO triangulo eh escaleno!!";
    }else cout << "\nNao eh um triangulo!!";
}
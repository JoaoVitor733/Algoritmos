
#include <iostream>
using namespace std;
/*Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino). 
Utilize as seguintes fórmulas para cálculo do peso ideal: 
• Masculino = (72,7 x altura) - 58 
• Feminino = (62,1 x altura) - 44,7 */
int main(){
    float altura;  
    char sexo;
    cout << "\nDigite a sua altura(em metros): ";
    cin >> altura;
    cout << "\nDigite seu sexo('m'-masculino ou 'f' feminino: ";
    cin >> sexo;
    if(sexo == 'm') cout << "\nSeu peso ideal: " << (72.7*altura)-58;
    else if(sexo == 'f') cout << "\nSeu peso ideal: " << (62.1*altura) - 44.7; 
    else cout << "letra invalida!!";    
}

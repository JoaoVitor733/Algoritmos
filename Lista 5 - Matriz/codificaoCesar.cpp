#include <iostream>
using std::string;
using std::cin;
using std::cout;
/* O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na
qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo
de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim
por diante. Elabore um algoritmo que utilize o Código de César (n posições, sendo n informado pelo usuário),
entre com uma string e escreva a string codificada.
Exemplo: para n=3, a string “a ligeira raposa marrom saltou sobre o cachorro cansado” seria codificada para 
“D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR”.
*/
int main(){
    string frase;
    cout << "\nDigite uma frase: ";
    getline(cin, frase);
    short int posicoes, novaPosi;
    cout << "\nDigite a quantidade de posicoes que cada letra da sua frase tem que pular na codificacao: ";
    cin >> posicoes;
    cout << "\nFrase codificada: ";
    for(int i = 0; i < frase.size(); i++){
        if(((int)frase[i] >= 97) && ((int)frase[i] <= 120)){
            novaPosi = (((((int)frase[i])+posicoes)-97)+65); //letras maiusculas
            if(novaPosi > 90) novaPosi = (novaPosi-90)+65; //permitindo apenas letras
            frase[i] = ((char) novaPosi);
        }  
         cout << frase[i];
    }
}

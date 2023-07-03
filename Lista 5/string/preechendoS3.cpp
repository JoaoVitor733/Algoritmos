#include <iostream>
using std::string;
using std::cout;
using std::cin;
/*  Elabore num algoritmo que que seja capaz de embaralhar uma string S1 com uma string S2 e colocar o 
resultado em uma string S3. Para embaralhar S1 com S2 preencha os índices pares de S3 com os elementos 
de S1 e os ímpares com os elementos de S2 até que os elementos de uma das duas strings termine. Os demais 
elementos de S3 serão preenchidos com os elementos da string restante.*/
int main(){
    string s1,s2,s3;
    short int maior;
    cout << "\nDigite um conjunto de caracter: ";
    getline(cin, s1);
    cout << "\nDigite outro conjunto de caracter: ";
    getline(cin,s2);
    if(s1.size() > s2.size()) maior = s1.size();
    else maior = s2.size();
    for(int i = 0; i < maior; i++){
        if(i%2==0){
            if(i < s1.size()) s3+=s1[i];
            else s3+=s2[i];
        } 
        else{
            if(i < s2.size()) s3+=s2[i];
            else s3+=s1[i];
        }
    }

    for(int i = 0; i < maior; i++){
        cout << s3[i];
    }
}

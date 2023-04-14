 #include <iostream>
 using namespace std;
 /*
 Elabore um algoritmo que leia um número inteiro e escreva o seu fatorial. Ex.: Fatorial de 4 = 4! = 4 X 3 X 
2 X 1 = 24. Após o fatorial, verifique e escreva o próximo número divisível pelo número digitado. 8*/
int main(){
    unsigned short int n, acumuladora = 1;
    cout << "\nDigite um valor inteiro: ";
    cin >> n;
    cout << "\n" << n << " = " << n << "! = ";
    for(int i=n; i > 0; i--){
        cout << i;
        if(i > 1) cout << " x ";
        acumuladora *= i;
    }
    cout << " = " << acumuladora;
}
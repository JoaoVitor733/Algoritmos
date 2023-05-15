#include <iostream>
using std::cin;
using std::cout;
/* Elabore um algoritmo que leia um vetor de 6 elementos inteiros representando o conjunto de números 
sorteados na mega sena. Leia, a seguir, para cada um dos N apostadores, um vetor contendo os 6 números 
da sua aposta. Verifique para cada apostador o seu número total de acertos na mega sena (para cada número 
correto, o apostador ganha 1 acerto) e escrever se ele “não ganhou”, “ganhou a quadra”, “ganhou a quina”
ou “ganhou a mega”. O algoritmo deverá finalizar quando o usuário desejar.*/
int main() {
    short int numerosMegaSena[6], numerosJogador[6], cont = 0, acertos = 0, aux;
    bool flag, naoPodeSair ;
    for(int i = 0; i < 6; i++){
        do{//Impedir valores iguais
            naoPodeSair = false;
            do{ //Impedir valores fora da faixa
                cout << "\nDigite o " << 1+i << "o. valor sorteado(entre 1 e 60): ";
                cin >>numerosMegaSena[i];
            }while(numerosMegaSena[i] < 1 || numerosMegaSena[i] > 60);
            if(i != 0){
                for(int j = 0; j < i; j++){
                    if(numerosMegaSena[i] == numerosMegaSena[j]) naoPodeSair = true;
                }
                if(naoPodeSair) cout << "\nValor existente, digite outro valor!\n";
            }
        }while(naoPodeSair);
    }
    cout << "\nNUMEROS DOS JOGADORES: \n";
    do{
        cout << "\n" << cont+1 << "o. Jogador: \n";
        for(int i = 0; i < 6; i++){
            do{//Impedir valores iguais
                naoPodeSair = false;
                do{//Impedir valores fora da faixa
                    cout << "\nDigite o " << 1+i << "o. numero do jogador(entre 1 e 60): ";
                    cin >>numerosJogador[i];
                }while(numerosJogador[i] < 1 || numerosJogador[i] > 60);
                if(i != 0){
                for(int j = 0; j < i; j++){
                    if(numerosJogador[i] == numerosJogador[j]) naoPodeSair = true;
                }
                if(naoPodeSair) cout << "\nValor existente, digite outro valor!\n";
            }
            }while(naoPodeSair);
            aux = numerosJogador[i];
            for(int j = 0; j < 6; j++){
                if(numerosMegaSena[j] == aux){
                    acertos++;
                    break;
                }
            }         
        }
        cont++;
        switch(acertos){
            case 6: cout << "\nGanhou a sena!\n";
                break;
            case 5: cout << "\nGanhou a quina!\n";
                break;
            case 4: cout << "\nGanhou a quadra!\n";
                break;
            default:  cout << "\nNao ganhou!\n";
        }
        acertos = 0;
        cout << "\nDigite 0 para sair e 1 para continuar: ";
        cin >> flag;
    }while(flag);
}

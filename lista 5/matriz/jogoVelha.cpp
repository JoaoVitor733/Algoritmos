#include <iostream>
using std::cin;
using std::cout;

int main(){
    char malha[3][3], vez;
    short int linhaCasa, colunaCasa, cont = 1;
    bool naoVazio, naoVenceu = true;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            malha[i][j] = ' ';
        }
     }
    cout << "\n\nJOGO DA VELHA\n\n";
    while(cont < 10 && naoVenceu){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(j == 1) cout  <<  "| " << malha[i][j] << " |";
                else  cout  << " " <<malha[i][j] << " ";
            }
            cout << "\n";
        }
        if(cont%2!=0) vez = 'X';
        else vez = 'O';
        do{
            naoVazio = false;
            cout << "\nJOGADOR DA VEZ: " << vez;
            do{ cout << "\n\nDigite a linha da casa que voce deseja jogar(1 a 3): ";
                cin  >> linhaCasa ;
            }while(linhaCasa < 1 || linhaCasa > 3);
            do{ cout << "Digite a coluna da casa que voce deseja jogar(1 a 3):";
                cin >> colunaCasa;
            }while(colunaCasa < 1 || colunaCasa > 3);
            if(malha[linhaCasa-1][colunaCasa-1] != ' '){ 
                naoVazio = true;
                cout << "\nPosicao invalida, digite novamente!\n";
            }
        }while(naoVazio);
        malha[linhaCasa-1][colunaCasa-1] = vez;
        cont++;
        for(int i = 0; i < 3; i++){
            if((malha[i][0] == malha[i][1]) && (malha[i][1] == malha[i][2]) && (malha[i][0] != ' ')) naoVenceu = false; //linhas 
            else if ((malha[0][i] == malha[1][i]) && (malha[1][i] == malha[2][i]) && (malha[0][i] != ' ')) naoVenceu = false; //colunas
        }
        if((malha[2][0] == malha[1][1]) && (malha[0][2] == malha[1][1]) && (malha[1][1] != ' ')) naoVenceu = false;//diagonal secundaria
        else if((malha[1][1] == malha[2][2]) && (malha[2][2] == malha[0][0]) && (malha[1][1] != ' ')) naoVenceu = false;//Diagonal principal
    }
    if(naoVenceu) cout << "\nVelha!\n";
    else cout << "\nJogador " << vez << " venceu!\n";
    cout << "\nFim de programa!";
}
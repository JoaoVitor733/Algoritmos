include <iostream>
using std::cin;
using std::cout;

int main() {
    short int n;
    do{ cout << "\nDigite o tamanho da matriz: ";
        cin >> n;
    }while(n < 1);
    int matriz[n][n], aux = n, cont = 0;
    do{
        for(int i = cont; i < (n-cont); i ++){
            for(int j = cont; j < (n-cont); j++){
                matriz[i][j] = cont+1;
            }
        }
        cont++;
    }while(cont < n);
    cout << "\nMatriz:\n\n";
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }
    
}

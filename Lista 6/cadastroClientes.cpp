#include <iostream>
using std::cin;
using std::cout;
using std::string;

struct tCliente{
    string identidade;
    string nome;
    string endereco;
    string telefone;
};
int main(){
    tCliente clientes[20];
    short int i = 0;
    char sair;
    do{
        cout << "\nIdentidade do " << i+1 << "o. cliente: ";
        getline(cin,clientes[i].identidade);
        cout << "\nNome do " << i+1 << "o. cliente: ";
        getline(cin,clientes[i].nome);
        cout << "\nEndereco do " << i+1 << "o. cliente: ";
        getline(cin,clientes[i].endereco);
        cout << "\nTelefone do " << i+1 << "o. cliente: ";
        getline(cin,clientes[i].telefone);
        cout <<"\nNovo Cliente (S/N)? ";
        cin >> sair;
        i++;
        getchar();
    }while(i < 20 && sair != 'N');
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    short int op;
    string identidade;
    bool flag;
    do{
        flag = true;
        cout << "\n---------MENU---------";
        cout << "\n1-Relatorio geral";
        cout << "\n2-Consultar cliente";
        cout << "\n3-sair\n: ";
        cin >> op;
        switch (op){
        case 1: cout << "\n---------------------";
                for(int j = 0; j < i; j++){
                    cout << "\n\nIdentidade: " << clientes[j].identidade;
                    cout << "\nNome do: "  << clientes[j].nome;
                    cout << "\nEndereco do: " << clientes[j].endereco;
                    cout << "\nTelefone do: " << clientes[j].telefone;
                    cout << "\n\n---------------------\n";
                }
            break;
        case 2: cout << "\n---------------------";
                cout << "\nDigite a sua identidade: ";
                getchar();
                getline(cin, identidade);
                for(int j = 0; j < i; j++){
                    if(identidade == clientes[j].identidade){
                        flag = false;
                        cout << "\n\nIdentidade: " << clientes[j].identidade;
                        cout << "\nNome do: "  << clientes[j].nome;
                        cout << "\nEndereco do: " << clientes[j].endereco;
                        cout << "\nTelefone do: " << clientes[j].telefone;
                    }
                }
                if(flag) cout << "\nCliente nao cadastrado!";
                cout << "\n\n---------------------\n";
            break;
        case 3: cout << "\nSaindo...";
            break;
        default: cout << "\nValor invalido, digite novamente!";
        }      
    }while(op != 3);
}

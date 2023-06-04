#include <iostream>
using std::cin;
using std::cout;
using std::string;

struct tProduto {
    string descricao;
    int quantidade;
    float precoUnitario;
    float subTotal;
};
struct tNotaFiscal {
    int numero;
    string data;
    tProduto itens[5];
    float total = 0;
};
int main() {

    tNotaFiscal notasFiscais[5];
    short int op, op2, j = 0, qtdPro[5] = {0,0,0,0,0} ,l, aux, qtdVendas;
    float mediaTot;
    int numero;
    bool flag;
    string descricao;

    do{ cout << "\n------------------------------------------------------------------------------\n";
        cout << "\n\t\t\t\tMENU PRINCIPAL";
        cout << "\n------------------------------------------------------------------------------\n";
        cout << "\n1 - CADASTRAR NOTAS FISCAIS";
        cout << "\n2 - RELATORIO DE NOTAS FISCAIS";
        cout << "\n3 - BUSCAR NOTA POR NUMERO";
        cout << "\n4 - EXIBIR NOTA COM MAIOR VALOR TOTAL";
        cout << "\n5 - EXIBIR A QUANTIDADE TOTAL VENDIDA DE UM PRODUTO A PARTIR DA SUA DESCRICAO";
        cout << "\n6 - EXIBIR MEDIA DO TOTAL DAS NOTAS";
        cout << "\n7 - SAIR";
        cout << "\n------------------------------------------------------------------------------\n";
        cout << "\n\nOpcao:";
        cin >> op;
        switch (op) {
            case 1: if(j < 5){
                        flag = false;
                        do{
                            do{
                                cout << "\nDigite o numero da nota fiscal: ";
                                cin >> notasFiscais[j].numero;
                            }while (notasFiscais[j].numero < 0);
                            for(int i = 0; i < j; i++){
                                if(i != 0){
                                    if(notasFiscais[j].numero == notasFiscais[j-1].numero) flag = true;
                                }
                            }
                            if(flag) cout << "\nNumero de nota ja existente, digite outro novamente!";
                        }while(flag);
                        cout << "\nDigite a data da compra: ";
                        getchar();
                        getline(cin, notasFiscais[j].data);
                        do{ cout << "\n------------------------------------------------------------------------------\n";
                            cout << "\n\t\t\t\tMENU SECUNDARIO";
                            cout << "\n------------------------------------------------------------------------------\n";
                            cout << "\n1 - CADASTRAR PRODUTOS";
                            cout << "\n2 - RELATORIO DE PRODUTOS";
                            cout << "\n3 - SAIR";
                            cout << "\n------------------------------------------------------------------------------\n";
                            cout << "\n\nOpcao:";
                            cin >> op2;
                            l = qtdPro[j];
                            switch(op2){
                                case 1: cout << "\n------------------------------------------------------------------------------\n";
                                        if(l < 5){
                                            getchar();
                                            cout << "\nDigite a descricao do produto: ";
                                            getline(cin, notasFiscais[j].itens[l].descricao);
                                            cout << "\nDigite o seu preco unitario: ";
                                            cin >> notasFiscais[j].itens[l].precoUnitario;
                                            cout << "\nDigite a sua quantidade: ";
                                            cin >> notasFiscais[j].itens[l].quantidade;
                                            qtdPro[j] += 1;
                                            notasFiscais[j].itens[l].subTotal = notasFiscais[j].itens[l].precoUnitario*notasFiscais[j].itens[l].quantidade;
                                            notasFiscais[j].total = notasFiscais[j].itens[l].subTotal;
                                        }else cout << "\nVoce ja cadastrou a quantidade maxima de produtos!\n";
                                        cout << "\n------------------------------------------------------------------------------\n";
                                    break;
                                case 2: cout << "\n------------------------------------------------------------------------------\n";
                                        if(l > 0){          
                                            for(int k = 0; k < l; k++){
                                                cout << "\n\nDescricao: " << notasFiscais[j].itens[k].descricao;
                                                cout << "\tQuantidade: " << notasFiscais[j].itens[k].quantidade;
                                                cout << "\t\tPreco:R$" << notasFiscais[j].itens[k].precoUnitario;
                                                cout << "\t\t\tSubtotal: " << notasFiscais[j].itens[k].subTotal;
                                            }
                                            cout << "\n------------------------------------------------------------------------------\n";    
                                        }else{
                                            cout << "\n\nNenhum produto cadastrado no sistema atualmente!\n";
                                            cout << "\n------------------------------------------------------------------------------\n";
                                        }
                                    break;
                                case 3: cout << "\nSaindo...";
                                    break;
                                default: cout << "\nValor invalido, digite novamente!";                                 
                            }
                        }while(op2 != 3);
                        j++;
                    }else cout << "\nVoce ja cadastrou a quantidade maxima de notas ficais!\n";
                    cout << "\n------------------------------------------------------------------------------\n";
                break;
            case 2: cout << "\n------------------------------------------------------------------------------\n";
                    if(j > 0){
                        for(int i = 0; i < j; i++){
                            cout << "\nCodigo: " << notasFiscais[i].numero;
                            cout << "\t\t\tData" << notasFiscais[i].data;
                            cout << "\n------------------------------------------------------------------------------\n";
                            cout << "\n\t\tProdutos";
                            for(int k = 0; k < qtdPro[i]; k++){
                                cout << "\nDescricao: " << notasFiscais[i].itens[k].descricao;
                                cout << "\tQuantidade: " << notasFiscais[i].itens[k].quantidade;
                                cout << "\t\tPreco: R$" << notasFiscais[i].itens[k].precoUnitario;
                                cout << "\t\t\tSubtotal: " << notasFiscais[i].itens[k].subTotal;
                            }
                            cout << "\n------------------------------------------------------------------------------\n";
                        }
                    }else{
                        cout << "\n\nNenhuma nota fiscal cadastrada no sistema atualmente!\n";
                        cout << "\n------------------------------------------------------------------------------\n";
                    }
                break;
            case 3: cout << "\n------------------------------------------------------------------------------\n";
                    if(j > 0){
                        cout << "\nDigite o numero da nota fiscal: ";
                        cin >> numero;
                        flag = true;
                        cout << "\n------------------------------------------------------------------------------\n";
                        for(int i = 0; i < j; i++){
                            if(notasFiscais[i].numero == numero){
                                flag = false;
                                cout << "\nCodigo: " << notasFiscais[i].numero;
                                cout << "\t\t\tData" << notasFiscais[i].data;
                                cout << "\n------------------------------------------------------------------------------\n";
                                cout << "\n\t\tProdutos";
                                for(int k = 0; k < qtdPro[i]; k++){
                                    cout << "\nDescricao: " << notasFiscais[i].itens[k].descricao;
                                    cout << "\tQuantidade: " << notasFiscais[i].itens[k].quantidade;
                                    cout << "\t\tPreco: R$" << notasFiscais[i].itens[k].precoUnitario;
                                    cout << "\t\t\tSubtotal: " << notasFiscais[i].itens[k].subTotal;
                                }
                            }
                        }
                        if(flag) cout << "\n\nA nota fiscal com o numero digitado nao foi encontrada!\n";
                    }else cout << "\n\nNenhuma nota fiscal cadastrada no sistema atualmente!\n";
                    cout << "\n------------------------------------------------------------------------------\n";
                break;
            case 4: cout << "\n------------------------------------------------------------------------------\n";
                    if(j > 0){
                        aux = 0;
                        for(int i = 0; i < j; i++){//procurar nota com maior total;
                            if(i != 0){
                                if(notasFiscais[i].total > notasFiscais[aux].total) aux = i;
                            }
                        }
                        cout << "\nCodigo: " << notasFiscais[aux].numero;
                        cout << "\t\t\tData" << notasFiscais[aux].data;
                        cout << "\n------------------------------------------------------------------------------\n";
                        cout << "\n\t\tProdutos";
                        for(int k = 0; k < qtdPro[aux]; k++){
                            cout << "\nDescricao: " << notasFiscais[aux].itens[k].descricao;
                            cout << "\tQuantidade: " << notasFiscais[aux].itens[k].quantidade;
                            cout << "\t\tPreco: R$" << notasFiscais[aux].itens[k].precoUnitario;
                            cout << "\t\t\tSubtotal: " << notasFiscais[aux].itens[k].subTotal;
                        }                 
                    }else cout << "\n\nNenhuma nota fiscal cadastrada no sistema atualmente!\n";
                    cout << "\n------------------------------------------------------------------------------\n";
                break;
            case 5: cout << "\n------------------------------------------------------------------------------\n";
                    if(j > 0){
                        qtdVendas = 0;
                        cout << "\nDigite a descricao do produto que voce deseja visualizar: ";
                        getchar();
                        getline(cin,descricao);
                        flag = false;
                        for(int i = 0; i < j; i++){
                            for(int k = 0; k < qtdPro[i]; k++){
                                if(notasFiscais[i].itens[k].descricao == descricao){
                                    qtdVendas += notasFiscais[i].itens[k].quantidade;
                                    flag = true;
                                }
                            }
                        }
                        if(flag){
                            cout << "\nProduto: " << descricao;
                            cout << " unidades vendidas: " << qtdVendas << "\n";
                        }else cout << "\nProduto com a descricao digitada nao foi encontrado em nenhuma nota fiscal!\n";
                    }else cout << "\n\nNenhuma nota fiscal cadastrada no sistema atualmente!\n";
                    cout << "\n------------------------------------------------------------------------------\n";
                break;
            case 6: cout << "\n------------------------------------------------------------------------------\n";
                    if(j > 0){
                        mediaTot = 0;
                        for(int i = 0; i < j; i++){
                            mediaTot +=notasFiscais[i].total;
                        }
                        cout << "\nMedia total: R$" << mediaTot/j << "\n";
                    }else cout << "\n\nNenhuma nota fiscal cadastrada no sistema atualmente!\n";
                    cout << "\n------------------------------------------------------------------------------\n";
                break;
            case 7: cout << "\nSaindo...";
                break;
            default: cout << "\nValor invalido, digite novamente!";
        }
    } while (op != 7);
    cout << "\nFim de programa!";
}

#include <iostream>
using std::cin;
using std::cout;
/*Considerando uma lista encadeada de valores inteiros definida pela struct abaixo: 
struct noh{ 
int valor; 
lista *proximo; 
}; 
Noh meuNoh; 
Elabore um algoritmo que apresente o menu abaixo e execute as operações de acordo 
com a escolha do usuário. 
-------------------------------------------------------
 MENU PRINCIPAL 
-------------------------------------------------------
1 - ADICIONAR ELEMENTO 
2 - REMOVER ELEMENTO 
3 - MOSTRAR TODOS OS ELEMENTOS 
4 - SAIR 
-------------------------------------------------------
Opção 1: o algoritmo deverá ler um elemento inteiro, inseri-lo em um novo noh e 
adicioná-lo no fim da lista utilizando a função adicionar que deve ser elaborada. Opção 
2: o algoritmo deverá ler um elemento inteiro, busca-lo na lista e, caso seja encontrado, 
removê-lo utilizando a função remover que deve ser elaborada. 
Opção 3: o algoritmo deverá exibir todos os elementos da lista utilizando a função 
relatorio que deve ser elaborada.*/

struct noh{ 
    int valor; 
    noh *proximo; 
}; 

int main(){
    short int op, valor, cont1, cont2;
    bool naoPrimeiraVez = false, naoAchei;
    noh *p1, *p2, *p3, *primeiroNoh = NULL, *nohAnterior, *nohAnteriorAux;

    do{
        cout << "\n-------------------------------------------------------";
        cout << "\n\t\tMENU PRINCIPAL ";
        cout << "\n -------------------------------------------------------";
        cout << "\n1 - ADICIONAR ELEMENTO ";
        cout << "\n2 - REMOVER ELEMENTO ";
        cout << "\n3 - MOSTRAR TODOS OS ELEMENTOS ";
        cout << "\n4 - SAIR ";
        cout << "\n------------------------------------------------------- \n: ";
        cin >> op;
        cout << "\e[H\e[2J";
        switch (op){
        case 1: cout << "\nDigite um valor: ";
                cin >> valor;
                p1 = (struct noh*) malloc(sizeof(struct noh));
                if(primeiroNoh != NULL)  {
                    nohAnterior->proximo = p1;
                    p1->proximo = NULL;
                    p1->valor = valor;
                }else{
                    primeiroNoh = p1;
                    primeiroNoh->proximo =NULL;
                    primeiroNoh->valor = valor;
                } 
                nohAnterior = p1;
            break;   
        case 2: cout << "\nDigite um valor: ";
                cin >> valor; 
                p2 = primeiroNoh;
                if(p2 != NULL){
                    naoPrimeiraVez = false;
                    naoAchei = true;
                    cont1 = 0;
                    cont2 = 0;
                    do{ cont1++;
                        if(valor == p2->valor){
                            cont2++;
                            naoAchei = false;
                            if(naoPrimeiraVez){
                                nohAnteriorAux->proximo = p2->proximo;
                            }else{
                                primeiroNoh = primeiroNoh->proximo;
                                nohAnteriorAux = primeiroNoh;
                            }               
                        }else nohAnteriorAux =  p2;
                        p2 = p2->proximo;               
                        naoPrimeiraVez = true;
                    }while((p2 != NULL)); 
                    if(cont1 == cont2) primeiroNoh = NULL;
                    if(naoAchei) cout << "\nElemento nao encontrado!\n";
                    else cout << "\nRemocao realizada com sucesso!\n";
                }else cout << "\nLista vazia!\n";     
            break;  
        case 3: p3 = primeiroNoh;
                if(p3 != NULL){
                    cout << "\nLista: [";
                    do{
                        cout  << " " << p3->valor << " ";
                        p3 = p3->proximo;
                    }while((p3 != NULL)); 
                    cout << "] \n";
                }else cout << "\nLista vazia!\n";
            break;  
        case 4:  cout << "\nSaindo...";      
            break;     
        default: cout << "\nOpcao invalida, digite novamente!";
            break;
        }
    }while(op!= 4);
}

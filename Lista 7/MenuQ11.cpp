#include <iostream>
using std::cin;
using std::cout;
/*11. Elabore um algoritmo que apresente o menu abaixo e, de acordo com a opção 
escolhida pelo usuário, realize a respectiva operação conforme detalhamento. 
-------------------------------------------------------
 MENU PRINCIPAL 
-------------------------------------------------------
1 - ORDEM 
2 - DATA 
3 - SALÁRIO 
4 - MULTA 
5 - CALCULAR 
6 - SAIR 
-------------------------------------------------------
Opção 1: leia três valores inteiros e um char (‘c’ – crescente, ‘d’ – decrescente), passeos 
para uma função que deverá ordená-los de acordo com a ordem escolhida e retorná-los 
para o chamador, que deverá escrever o resultado da ordenação. 

Opção 2: Declare o registro Data contendo 3 campos inteiros, dia, mês e ano, e leia 5 
datas em um vetor de datas. Passe o vetor lido para uma função que que deverá verificar 
e retornar um vetor booleano contendo true em cada posição cuja data for válida e false 
em cada posição que a tada não for válida. Considerar meses de 30 e 31, desconsiderar 
anos bissextos. O chamador, após receber o resultado da função, deverá escrever uma 
mensagem de “Data Válida” ou “Data Válida” para cada resultado recebido no vetor. 
Exemplo: Vetor de Datas: 21/1/2000, 31/12/2012, 45/3/2000, 1/40/2000, 31/02/1999 
Saída da função: true, true, false, false, false 

Opção 3: leia o salário de uma pessoa e a sua quantidade de filhos e mande-os para uma 
função. A função deverá retornar quanto do salário da pessoa será dedicado a cada um 
dos seus filhos (considerando 10% para cada filho, desde que não exceda o 50% do valor 
total do salário. Se exceder, o valor para cada filho deverá ser 50% do salário dividido 
pelo total de filhos. O chamador deverá informar o valor do salário por filho ou, se a 
pessoa não tiver filhos, a mensagem “O seu salário é 100% para o seu próprio custeio”. 

Opção 4: leia a velocidade máxima permitida em uma avenida e a velocidade com que o 
motorista estava dirigindo nela, envie-os para uma função void que deverá calcular se a 
pessoa vai pagar multa e, se for, qual o valor da multa. Considere que serão pagos como 
multa: a) 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex.: 
velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h); b) 100 reais, se o 
motorista ultrapassar de 11 a 30 km/h a velocidade permitida. c) 200 reais, se estiver 
acima de 31km/h da velocidade permitida. A mensagem informando o valor da multa 
deverá ser escrita pelo chamador após a execução da função. 

Opção 5: leia o gabarito correto de uma prova e o gabarito de um aluno em uma matriz 
2x10 (10 respostas do gabarito na primeira linha da matriz e 10 repostas do aluno na 
segunda linha da matriz) e envie para uma função. A função deverá calcular e retornar o 
percentual de acerto do aluno na prova (int) e a sua nota (float), considerando que cada 
questão vale 1,5 ponto. Escreva os resultados retornados pela função. 
Opção 6: Escreva a mensagem “Fim de Programa” e encerre o algoritmo.*/

struct tData{
    short int dia, mes, ano;
};

struct tNotas{
    int pct;
    float nota;
};

short int* ordenar(short int v[],char opcao);
bool* dataValida(tData *dt, bool* valido);
float salarioFilho(float salario, short int qtdFilhos);
void calcularMulta(short int velocidade, short int velocidadeMax, short int* multa);
tNotas* calcularNota(char (&gabarito)[2][4], tNotas *nota);

int main(){
    short int op;
    do{
        cout<< "\n-------------------------------------------------------";
        cout<< "\n\t\tMENU PRINCIPAL ";
        cout<< "\n-------------------------------------------------------";
        cout<< "\n1 - ORDEM ";
        cout<< "\n2 - DATA ";
        cout<< "\n3 - SALARIO ";
        cout<< "\n4 - MULTA ";
        cout<< "\n5 - CALCULAR ";
        cout<< "\n6 - SAIR ";
        cout<< "\n-------------------------------------------------------\n: ";
        cin >> op;
        cout << "\e[H\e[2J";
        switch (op){
        case 1: short int v[3], *p;
                char ordem;
                for(int i = 0; i < 3; i++){
                    cout << "\nDigite o " << i+1 << "o. valor: ";
                    cin >> v[i];
                }
                do{
                    cout << "\nDigite a ordem dos valores['C' - crescente e 'D' - decrescente]: ";
                    cin >> ordem;
                }while(ordem!= 'C' && ordem != 'D');
                p = ordenar(v,ordem);
                cout << "\nValores ordenados: [";
                for(int i = 0; i < 3; i++){
                    cout <<" " << *p << " ";
                    p++;
                }
                cout << "]\n";
            break;
        case 2: 
                tData dt[5];
                bool valido[5], *pValido;

                for(int  i = 0; i < 5; i++){
                    cout << "\n\n" << i+1 << "a. data: \n";
                    cout << "\nDia: ";
                    cin >> dt[i].dia;
                    cout << "Mes: ";
                    cin >> dt[i].mes;
                    cout << "Ano: ";
                    cin >> dt[i].ano;
                }

                pValido = dataValida(dt, valido);
                for(int i = 0; i < 5; i++){
                    cout << "\n" << dt[i].dia << "/" << dt[i].mes << "/" << dt[i].ano;
                    if(*pValido) cout << " e uma data valida!";
                    else cout << " nao eh uma data valida!";     
                    pValido++;    
                }
            break;
        case 3: float salario, salarioF;
                short int qtdFilhos;
                cout << "\nDigite o seu salario: R$";
                cin >> salario;
                do{
                    cout << "\nDigite a quantidade de filhos: ";
                    cin >> qtdFilhos;
                }while(qtdFilhos < 0);
                salarioF = salarioFilho(salario, qtdFilhos);
                if(salarioF != 0){
                    cout << "\n" <<(salarioF/salario)*100 << "% do seu salario sera dedicado para cada um de seus filhos!\n";
                }else cout << "\nO seu salario e 100% para o seu proprio custeio!\n";
            break;
        case 4: short int velocidade, velocidadeMax, multa;
                cout << "\nDigite a velocidade maxima permitida na psita: ";
                cin >> velocidadeMax;
                cout << "\nDigite a velocidade que o motorista estava nela: ";
                cin >> velocidade;
                calcularMulta(velocidade, velocidadeMax, &multa);
                if(multa != 0) cout << "\nO valor da multa foi: " << multa;
                else cout << "\nMotorista dentro do permitido!";
            break;
        case 5: char gabarito[2][4];
                tNotas nota, *pNota;
                for(int i = 0; i < 2; i++){
                    if(i == 0 ) cout << "\nGabarito da prova: \n";
                    else cout << "\nResposta do aluno: \n";
                    for(int j = 0; j <  4; j++){
                        cout << "Questao "  << j+1 << ": ";
                        cin >>  gabarito[i][j];
                    }
                }
               pNota = calcularNota(gabarito, &nota);
               cout << "\nPercentual de certo do aluno: " << pNota->pct << "%";
               cout << "\nNota final do aluno: " <<pNota->nota;
            break;
        case 6: cout << "\nFim de Programa";
            break;    
        default:
            break;
        }
    }while(op != 6);
}

short int* ordenar(short int v[],char opcao){
    short int aux;
    for(int i = 0; i < 2; i++){
        for(int j = i+true; j < 3; j++){
            if(opcao == 'C'){
                if(v[i] > v[j]){
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                } 
            }else{
                if(v[i] < v[j]){
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }  
            }
        }
    }
    return v;
}

bool* dataValida(tData *dt, bool* valido){
    for(int i = 0; i < 5; i++){
        if(dt[i].mes < 1 || dt[i].mes > 12) valido[i] = false;
        else{
            if(dt[i].ano >= 1000){
                if(dt[i].dia >  0){
                    if((dt[i].mes == 2)){
                        if(dt[i].dia <= 28) valido[i] = true;
                        else valido[i] = false;
                    } else if((dt[i].mes == 4) || (dt[i].mes == 6) || (dt[i].mes == 9) || (dt[i].mes == 11)){
                                if((dt[i].dia <= 30)) valido[i] = true;
                                else valido[i] = false;
                            }else  if(dt[i].dia <= 31){ 
                                      valido[i] = true;
                                    }else valido[i] = false;
                }else valido[i] = false;
            }else valido[i] = false;
        }
    }
    return valido;
}

float salarioFilho(float salario, short int qtdFilhos){
    float salarioF;
    if(qtdFilhos <= 5) salarioF =  ((salario*0.1)*qtdFilhos);
    else if(qtdFilhos >= 5) salarioF = ((salario*0.5)/qtdFilhos);
    return salarioF;
}

void calcularMulta(short int velocidade, short int velocidadeMax, short int *multa){
    if(velocidade <= velocidadeMax) *multa = 0;
    else if(velocidade - velocidadeMax <= 10) *multa = 50;
         else if(velocidade - velocidadeMax <= 30) *multa = 100;
              else *multa = 31;
}  

tNotas* calcularNota(char (&gabarito)[2][4], tNotas *nota){
    short int pontos = 0;
    for(int j = 0 ; j < 4; j++){
        if(gabarito[0][j] == gabarito[1][j]) pontos++;
    }
    nota->nota = pontos*1.5;
    nota->pct = (((float)pontos/4))*100;
    return nota;
}

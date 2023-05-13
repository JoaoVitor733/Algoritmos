#include <iostream>
using namespace std;
/*ENTRADA leia o custo de fábrica
PROCESSAMENTO custo ao consumidor: custo de fábrica +  percentagem do distribuidor e dos impostos
SAIDA custo ao consumidor cf = custo de fábrica*/
int main() {
  int cf;
  cout << "\nCusto de fabrica de um carro: ";
  cin >> cf;
  cout << "\nValor final: " << cf+(0.28*cf)+(0.45*cf);
}

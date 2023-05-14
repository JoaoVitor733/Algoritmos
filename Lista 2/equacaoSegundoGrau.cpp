#include <iostream> 
 #include <cmath> 
 using namespace std; 
 /*Calcule as raízes de uma equação de 2º grau. Observe que:  
 • x = −b ± √∆/2a, onde ∆ = B2 − 4ac; 
 • ax2 + bx + c = 0 representa uma equação de 2º grau;  
 • A variável a tem que ser diferente de zero. Caso seja igual, escreva a mensagem “Não é equação de  
 segundo grau”;  
 • Se ∆ < 0, não existe real. Escreva a mensagem “Não existe raiz”; 
 • Se ∆ = 0, existe uma raiz real. Escreva a raiz e a mensagem “Raiz única”;  
 • Se ∆ ≥ 0, escreva as duas raízes reais. */ 
 int main(){ 
     float a,b,c, delta; 
     cout << "Digite os valores de 'a','b', e 'c': "; 
     cin >> a >> b >> c; 
     delta = (b*b)-4*a*c; 
     if(a != 0){ 
         if(delta>0) cout << "\nAs raizes são: " << (-b+(sqrt(delta)))/(2*a) << " " << (-b-(sqrt(delta)))/(2*a);  
         else if(delta == 0) cout << "\nA raiz eh: " << (-b)/(2*a); 
             else cout << "\nNao existe raiz real!";   
     }else cout << "\nNao eh uma equacao do segundo grau!";         
 }
// Exercicio 2
#include <iostream>
using namespace std;

// variaveis
int num, cont = 0;
bool primo;

//funcoes
// veirifica se é par
void ver_par (int x){
    if (x % 2 == 0){
        cout<<"O Número "<<x<<" é par."<<endl;
    }
    else{
        cout<<"O Número "<<x<<" é impar."<<endl; 
    }
}

// verificar numero é primo
void ver_primo (int y){
    for (int i = 1; i <= y; i++){
        if (y % i == 0){
            cont++;
        }
    }
    if (cont == 2){
        primo = true;
    }
    else{
        primo = false;
    }
    cout<<"O número é primo (True = Sim | False = Não): "<<boolalpha<<primo;

}

//

// principal
int main (){
    cout<<"Digite um número: "<<endl;
    cin>>num;
    
    ver_par(num);
    ver_primo(num);
    
    
    return 0;
}
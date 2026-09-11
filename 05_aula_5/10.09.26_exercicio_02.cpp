// Exercicio 2

#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    
    int n=6, i=0, num;
    int num_par[n];
    
    for(i=0; i<6;){
        system("cls");
        cout<<"Digite o "<<i+1<<" numero par: ";
        cin>>num;
        
        if (num % 2 == 0){
            num_par[i]=num;
            i=i+1;
        }
        else{
            cout<<endl<<"Valor incorreto, digite novamente."<<endl<<endl;
        }
    }

    cout<<endl<<"Abaixo a lista de numeros pares digitados"<<endl;
    for(i>0; i--;){
        cout<<num_par[i]<<" ";
    }
return 0;
}
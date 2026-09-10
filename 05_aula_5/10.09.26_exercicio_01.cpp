// Exercicio 1

#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    
    int n=9, i=0;
    int num_user[n], num_qdr[n];
    
    for(i=0; i<10; i++){
        system("cls");
        cout<<"Digite o "<<i+1<<" numero: ";
        cin>>num_user[i];
    }
    
    for (i=0;i<10;i++){
        num_qdr[i] = num_user[i]*num_user[i];
    }
    
    cout<<endl<<"Lista com numeros digitados: "<<endl;
    for (i=0;i<10;i++){
        cout<<num_user[i]<<" ";    
    }
    
    cout<<endl<<endl<<"Lista com quadrados: "<<endl;
    for (i=0;i<10;i++){
        cout<<num_qdr[i]<<" ";
    }
    
return 0;
}
// Exercício 1 

/*
Teste de mesa
---------------------
Entrada --> 5
---------------------
Variáveis
num	i	aux
5	0	1
5	1	3
5	2	5
5	3	7
5	4	9
5	X	X	
---------------------
Saída --> 1 3 5 7 9
---------------------
*/

// Exercício 2

#include <iostream>

using namespace std;

int main() {
    int soma_impar, num ;

    num = 20;

    for (int i = 0; i <= num; i++) {
        if (i % 2 == 0){
            cout<< i <<"\n";
        }
        else{
            soma_impar = soma_impar + i;
        }
    }
    cout<< "total impar: " << soma_impar;
    return 0;
}

//Exercício 3

#include <iostream>

using namespace std;

int main() {
    int soma_impar, num, i, cont;
    float media;

    num = 99;
    i = 1;

    for (i; i <= num; i++) {
        if (i % 2 != 0){
            soma_impar = soma_impar + i;
            cont = cont + 1;
        }
    }
    media = soma_impar / cont;
    cout<< "total total: " << soma_impar<<"\n";
    cout<< "total media: " << media;
    return 0;
}

// Exercício 4

#include <iostream>

using namespace std;

int main() {
    int n, cont = 1;

    cout<<"Escreva um numero para saber o fatorial: ";
    cin>> n;

    for (int i = 1; i <= n; i++) {
        cont=  cont*i;
    }
    cout<< "Fatorial é: : " << cont<<"\n";
    return 0;
}

// Exercicio 1

# include <iostream>

using namespace std;

int main (){
    float n1,n2,n3, multiplicacao, media;
    int soma, subtracao;

    cout<<"Digite os três números: ";
    cin>>n1>>n2>>n3;
    
    soma=n1+n2+n3;
    subtracao=n1-n2-n3;
    multiplicacao =n1*n2*n3;
    media = soma/3;

    cout<<"Soma: "<<soma<<endl;
    cout<<"Subtração: "<<subtracao<<endl;
    cout<<"Multiplicação: "<<multiplicacao<<endl;
    cout<<"Media: "<<media<<endl;

    return 0;
}

// Exercicio 2

#include <iostream>

using namespace std;

#define PI 3.1415

int main (){
    
    
    float raio, perimetro, area;

    cout<<"Digite o raio: ";
    cin>>raio;
    
    perimetro=2 * PI * raio;
    area = PI * (raio*raio);

    cout<<"Perimetro: "<<perimetro<<endl;
    cout<<"Area: "<<area<<endl;
        
    return 0;
}
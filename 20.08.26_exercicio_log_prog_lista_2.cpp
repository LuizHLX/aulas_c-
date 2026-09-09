// Exercicio 1

# include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"Digite um numero qualquer, para saber se é par:\n";
    cin>> x;

    if (x % 2 == 0) {
        cout<<"O número que você digitou é par\n";
        }
    else{
        cout<<"O número digitado é impar\n";
        }
return 0;
}

// Exercicio 2

# include <iostream>
using namespace std;

int main() {
    int nota1, nota2, nota3;
    float media;
    cout<<"Digite a 1° nota: \n -->";
    cin>> nota1;

    cout<<"Digite a 2° nota: \n -->";
    cin>> nota2;

    cout<<"Digite a 3° nota: \n -->";
    cin>> nota3;

    media = (nota1+nota2+nota3)/3;

    cout<<media;

    if (media == 10){
        cout<<"\nExelente!";
    }
    else if (media >= 9 && media < 10){
        cout<<"\nMuito bom!";
    }
    else if (media >= 7 && media < 9){
        cout<<"\nBom";
    }
    else if (media >= 6 && media < 7){
        cout<<"\nRegular";
    }
    else if (media < 6){
        cout<<"\nInsuficiente";
    }    
return 0;
}

// Exercicio 3

#include <iostream>
using namespace std;
int main() {
    int option, num1, num2, resultado;
    cout<<"Digite o primeiro número:\n";
    cin>>num1;

    cout<<"Digite o segundo número:\n";
    cin>>num2;

    cout<<"Digite a operação matematica desejada:\n";
    cout<<"Opção 1 - Soma\n";
    cout<<"Opção 2 - Subtração\n";
    cout<<"Opção 3 - Divisão\n";
    cout<<"Opção 4 - Multiplicação\n";

    cin>> option;
    switch(option) {
        case 1:
            resultado = num1 + num2;
            cout<<"\nAqui está o resultado\n-->";
            cout<<resultado;
            break;
        
        case 2:
            resultado = num1 - num2;
            cout<<"\nAqui está o resultado\n-->";
            cout<<resultado;
            break;
        
        case 3:
            resultado = num1 / num2;
            cout<<"\nAqui está o resultado\n-->";
            cout<<resultado;
            break;

        case 4:
            resultado = num1 * num2;
            cout<<"\nAqui está o resultado\n-->";
            cout<<resultado;
            break;

        default:
            cout<<"Você escolheu uma opção inválida!\n";
}
return 0;
}

// Exercicio 5

#include <iostream>
using namespace std;
int main() {
    int num1;
    cout<<"Digite o numero:\n";
    cin>>num1;

    switch(num1) {
        case 1:
            cout<<"\nNumero por extenso: Um";
            break;
        
        case 2:
            cout<<"\nNumero por extenso: Dois";
            break;        

        case 3:
            cout<<"\nNumero por extenso: Três";
            break;

        case 4:
            cout<<"\nNumero por extenso: Quatro";
            break;

        case 5:
            cout<<"\nNumero por extenso: Cinco";
            break;

        case 6:
            cout<<"\nNumero por extenso: Seis";
            break;

        case 7:
            cout<<"\nNumero por extenso: Sete";
            break;

        case 8:
            cout<<"\nNumero por extenso: Oito";
            break;

        case 9:
            cout<<"\nNumero por extenso: Nove";
            break;

        case 10:
            cout<<"\nNumero por extenso: Dez";
            break;

        default:
            cout<<"Você escolheu uma opção inválida!\n";
}
return 0;
}
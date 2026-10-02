// Exercicio 1
#include <iostream>

using namespace std;

// Função recursiva para calcular a soma de 1 até N
int soma(int N)
{
    // Caso base
    if (N == 1)
    {
        return 1;
    }

    // Chamada recursiva
    return N + soma(N - 1);
}

int main()
{
    int numero;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    cout << "A soma de 1 ate " << numero << " e: ";
    cout << soma(numero) << endl;

    return 0;
}
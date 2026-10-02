// Exercicio 2
#include <iostream>

using namespace std;

// Função recursiva para somar os elementos do vetor
int somaVetor(int vetor[], int tamanho)
{
    // Caso base
    if (tamanho == 0)
    {
        return 0;
    }

    // Soma o último elemento e chama a função novamente
    return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);
}

int main()
{
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int vetor[tamanho];

    // Preenchendo o vetor
    for (int i = 0; i < tamanho; i++)
    {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Chamando a função recursiva
    int resultado = somaVetor(vetor, tamanho);

    cout << "A soma dos elementos do vetor e: " << resultado << endl;

    return 0;
}
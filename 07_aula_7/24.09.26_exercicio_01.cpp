#include <iostream>

using namespace std;

// Funcao para carregar os valores da matriz
void carregarMatriz(int matriz[4][3])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o valor da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Funcao para somar duas matrizes
void somarMatriz(int A[4][3], int B[4][3], int C[4][3])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Funcao para mostrar a matriz
void mostrarMatriz(int matriz[4][3])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << "\t";
        }

        cout << endl;
    }
}

int main()
{
    int A[4][3];
    int B[4][3];
    int C[4][3];

    cout << "CARREGANDO A MATRIZ A" << endl;
    carregarMatriz(A);

    cout << endl;

    cout << "CARREGANDO A MATRIZ B" << endl;
    carregarMatriz(B);

    // Soma das matrizes A e B
    somarMatriz(A, B, C);

    cout << endl;

    cout << "MATRIZ C (A + B):" << endl;
    mostrarMatriz(C);

    return 0;
}
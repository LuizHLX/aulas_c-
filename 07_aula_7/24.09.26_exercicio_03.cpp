#include <iostream>

using namespace std;

// Funcao para carregar a matriz
void carregarMatriz(int matriz[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o valor da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Funcao para verificar os elementos repetidos
void verifica_repetidos(int matriz[3][3])
{
    int repetidos[9];
    int quantidadeRepetidos = 0;

    // Percorre todos os elementos da matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int valor = matriz[i][j];
            int quantidade = 0;

            // Verifica quantas vezes o valor aparece
            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    if (matriz[x][y] == valor)
                    {
                        quantidade++;
                    }
                }
            }

            // Se apareceu mais de uma vez, e ainda nao foi armazenado
            if (quantidade > 1)
            {
                bool jaExiste = false;

                for (int k = 0; k < quantidadeRepetidos; k++)
                {
                    if (repetidos[k] == valor)
                    {
                        jaExiste = true;
                    }
                }

                if (jaExiste == false)
                {
                    repetidos[quantidadeRepetidos] = valor;
                    quantidadeRepetidos++;
                }
            }
        }
    }

    // Mostra o resultado
    if (quantidadeRepetidos == 0)
    {
        cout << endl;
        cout << "Nao existem elementos repetidos." << endl;
    }
    else
    {
        cout << endl;
        cout << "Quantidade de elementos repetidos: "
             << quantidadeRepetidos << endl;

        cout << "Elementos repetidos: ";

        for (int i = 0; i < quantidadeRepetidos; i++)
        {
            cout << repetidos[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int matriz[3][3];

    cout << "CARREGANDO A MATRIZ 3x3" << endl;

    carregarMatriz(matriz);

    cout << endl;
    cout << "VERIFICANDO ELEMENTOS REPETIDOS..." << endl;

    verifica_repetidos(matriz);

    return 0;
}
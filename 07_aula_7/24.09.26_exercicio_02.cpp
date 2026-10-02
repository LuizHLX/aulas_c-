#include <iostream>

using namespace std;

int main()
{
    int matriz[4][4];

    // Preenchendo a matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 0;
            }
            else if (i > j)
            {
                matriz[i][j] = i;
            }
            else
            {
                matriz[i][j] = j;
            }
        }
    }

    // Mostrando a matriz
    cout << "MATRIZ 4x4:" << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matriz[i][j] << "\t";
        }

        cout << endl;
    }

    return 0;
}
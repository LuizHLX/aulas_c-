#include <iostream>

using namespace std;

int main() {

    int n;
    float num_list[100];
    bool contado[100] = {false};

    // Entrada da quantidade de números
    cout << "Digite a quantidade de numeros que deseja avaliar: ";
    cin >> n;

    // Entrada dos números
    for (int i = 0; i < n; i++) {
        cout << "Digite o " << i + 1 << " numero: ";
        cin >> num_list[i];
    }

    // Verifica quantas vezes cada número aparece
    for (int i = 0; i < n; i++) {

        // Se esse número já foi contado, não conta novamente
        if (contado[i]) {
            continue;
        }

        int contador = 0;

        // Compara o número atual com todos os números da sequência
        for (int j = 0; j < n; j++) {

            if (num_list[i] == num_list[j]) {
                contador++;
                contado[j] = true;
            }
        }

        cout << num_list[i] << " ocorre "
             << contador << " vez(es)" << endl;
    }

    return 0;
}

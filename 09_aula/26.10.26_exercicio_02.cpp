// Exercicio 2
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string A, B;
    int numerosA = 0, numerosB = 0;
    int minusculasA = 0, minusculasB = 0;

    cout << "Digite a string A: ";
    getline(cin, A);

    cout << "Digite a string B: ";
    getline(cin, B);

    for (int i = 0; i < A.size(); i++) {
        if (isdigit(A[i])) {
            numerosA++;
        }
        if (islower(A[i])) {
            minusculasA++;
        }
    }

    for (int i = 0; i < B.size(); i++) {
        if (isdigit(B[i])) {
            numerosB++;
        }
        if (islower(B[i])) {
            minusculasB++;
        }
    }

    cout << "\nString A:" << endl;
    cout << "Quantidade de caracteres: " << A.size() << endl;
    cout << "Quantidade de numeros: " << numerosA << endl;

    cout << "\nString B:" << endl;
    cout << "Quantidade de caracteres: " << B.size() << endl;
    cout << "Quantidade de numeros: " << numerosB << endl;

    cout << "\nComparacao de letras minusculas: ";

    if (minusculasA > minusculasB) {
        cout << "A" << endl;
    } else if (minusculasB > minusculasA) {
        cout << "B" << endl;
    } else {
        cout << "Mesma quantidade" << endl;
    }

    return 0;
}
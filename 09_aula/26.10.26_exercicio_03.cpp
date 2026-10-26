// Exercicio 3
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;

    cout << "Digite seu nome: ";
    getline(cin, nome);

    cout << "Digite sua idade: ";
    cin >> idade;

    ofstream arquivo;
    arquivo.open("dados_iniciais.txt");

    if (arquivo.is_open()) {
        arquivo << nome << endl;
        arquivo << idade << endl;

        arquivo.close();

        cout << "Dados gravados com sucesso!" << endl;
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
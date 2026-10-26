// Exercicio 04
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nome, endereco, telefone, email;

    cout << "Digite o nome completo: ";
    getline(cin, nome);

    cout << "Digite o endereco: ";
    getline(cin, endereco);

    cout << "Digite o telefone: ";
    getline(cin, telefone);

    cout << "Digite o e-mail: ";
    getline(cin, email);

    ofstream agenda;
    agenda.open("agenda.txt", ofstream::app);

    if (agenda.is_open()) {
        agenda << "Nome: " << nome << endl;
        agenda << "Endereco: " << endereco << endl;
        agenda << "Telefone: " << telefone << endl;
        agenda << "E-mail: " << email << endl;
        agenda << "--------------------" << endl;

        agenda.close();

        cout << "Contato salvo com sucesso!" << endl;
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
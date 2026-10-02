//Exercicio 3
#include <iostream>

using namespace std;

// Estrutura para guardar os dois resultados
struct Resultado
{
    double dolar;
    double euro;
};

// Função para converter o valor
Resultado converteMoeda(double valor, double taxaDolar = 5.5, double taxaEuro = 6.1)
{
    Resultado resultado;

    resultado.dolar = valor / taxaDolar;
    resultado.euro = valor / taxaEuro;

    return resultado;
}

int main()
{
    double valor;

    cout << "Digite o valor em reais: ";
    cin >> valor;

    // 1. Usando apenas o valor em reais
    Resultado resultado1 = converteMoeda(valor);

    cout << "\n--- Caso 1 ---" << endl;
    cout << "Valor em dolares: " << resultado1.dolar << endl;
    cout << "Valor em euros: " << resultado1.euro << endl;


    // 2. Usando o valor em reais e uma taxa de dolar diferente
    Resultado resultado2 = converteMoeda(valor, 5.2);

    cout << "\n--- Caso 2 ---" << endl;
    cout << "Valor em dolares: " << resultado2.dolar << endl;
    cout << "Valor em euros: " << resultado2.euro << endl;


    // 3. Usando o valor em reais e taxas personalizadas
    Resultado resultado3 = converteMoeda(valor, 5.0, 6.0);

    cout << "\n--- Caso 3 ---" << endl;
    cout << "Valor em dolares: " << resultado3.dolar << endl;
    cout << "Valor em euros: " << resultado3.euro << endl;

    return 0;
}
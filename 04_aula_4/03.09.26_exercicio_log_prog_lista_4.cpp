//=================================
// Exercicio 1 utilizando do-while
//=================================

#include <iostream>

using namespace std;

int main() {
	int num, sum;
    
    do {
    cout<<"Insira os números a serem somados: ";
    cin>>num;
    
    sum+=num;
}
while (num != 0);
    
        cout<<"O a soma dos números digitados é: " <<sum;
    
    return 0;
}

//=================================
// Exercicio 2 utilizando do-while
//=================================

#include <iostream>
#include <random>

using namespace std;

int main() {
    int num_aleatorio, num;

    // Gerando num aleatorio
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1,50);
    num_aleatorio = distrib(gen);
    
    do {
    cout<<"Insira o número e tente a sorte: ";
    cin>>num;
        
}
while (num != num_aleatorio);
      if (num == num_aleatorio) {

    cout<<"Você acertou, o número era: " <<num_aleatorio;
    }
    return 0;
}


//=================================
// Exercicio 3 teste de mesa
//=================================
// TESTE DE MESA
// ------------------------------------------------
// | i  | x  | Condição (i<=x) | y  | Ação        |
// ------------------------------------------------
// | 10 | 15 | 10<=15 = TRUE   | -  | y=15+10=25 |
// | 15 | 15 | 15<=15 = TRUE   | 25 | y=15+15=30 |
// | 20 | 15 | 20<=15 = FALSE  | 30 | Fim        |
// ------------------------------------------------
// Saída: 30
// Resposta: b) 30

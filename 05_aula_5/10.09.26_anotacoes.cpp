/*
Definindo uma Array 

int nota [2] --> Precisa ser sempre do mesmo valor

tipos de dados que podemos incluir dentro da Array:
- int
- float
- char

O tamanho da Array deve ser definido no momento da execução do programa.

Iniciando uma array:

<tipo><nome>[tamanho do vetor]

Exemplo: float v [3]; // declara o vetor "v" com três floats.

como inicializar:

V[0]=4.3
V[1]=7.0 
V[2]=-1.2

Outro modo de inicializar

float V[3]={4.3, 7.0, -1.2};

=============================
// Exemplo 1

#include <iostream>

using namespace std;

int main () {
	int pares [5];
	for (int i=0; i<5; i++){
		pares[i] = 2 * i

	}

return 0;
}

=============================
// Exemplo 2

#include <iostream>

using namespace std;

int main () {
	int pares [5];
	for (int i=0; i<5; i++){
		pares[i] = 2 * i
	}
	for (int i=0; i<5; i++){
		cout<<pares[i]<<endl;

	}

return 0;
}
=============================

O contador é reutilizado, mas sempre zerando o 0 no inicio do looping for

for(i=0;i<4;i++){
}




*/
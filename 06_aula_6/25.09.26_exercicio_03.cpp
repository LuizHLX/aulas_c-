//Exercicio 3
#include <iostream>

using namespace std;

float converterFahrenheit(float celsius){
    float fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    return fahrenheit;
}

int main(){
    float celsius;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    float fahrenheit = converterFahrenheit(celsius);

    cout << "Temperatura em Fahrenheit: " << fahrenheit << " °F" << endl;

    return 0;
}
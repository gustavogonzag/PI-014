#include <iostream>
using namespace std;

// Função para converter temperatura de Celsius para Fahrenheit
double celsiusParaFahrenheit(double temperaturaCelsius) {
    return (temperaturaCelsius * 9.0 / 5.0) + 32.0;
}

// Função para obter a temperatura em Celsius do usuário
double obterTemperaturaCelsius() {
    double temperaturaCelsius;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> temperaturaCelsius;
    return temperaturaCelsius;
}

// Função para exibir a temperatura em Fahrenheit
void exibirTemperaturaFahrenheit(double temperaturaFahrenheit) {
    cout << "A temperatura em graus Fahrenheit é: " << temperaturaFahrenheit << "°F" << endl;
}

int main() {
    double temperaturaCelsius, temperaturaFahrenheit;

    temperaturaCelsius = obterTemperaturaCelsius();
    temperaturaFahrenheit = celsiusParaFahrenheit(temperaturaCelsius);
    exibirTemperaturaFahrenheit(temperaturaFahrenheit);

    return 0;
}

#include <iostream>

using namespace std;

double converterParaFahrenheit(double tempCelsius) {
    return (tempCelsius * 9.0 / 5.0) + 32.0;
}

double obtertempCelsius() {
    double temp;
    cout << "Digite a temperatura em Celsius: ";
    cin >> temp;
    return temp;
}

void exibirtempFahrenheit(double tempFahrenheit) {
    cout << "A temperatura em Fahrenheit é: " << tempFahrenheit << " graus Fahrenheit." << endl;
}

int main() {
    double tempCelsius = obtertempCelsius();
    double tempFahrenheit = converterParaFahrenheit(tempCelsius);
    exibirtempFahrenheit(tempFahrenheit);
    return 0;
}

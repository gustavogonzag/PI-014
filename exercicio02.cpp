#include <iostream>

double celsiusParaFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

void converterTemperatura()
{
    double celsius;
    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> celsius;

    double fahrenheit = celsiusParaFahrenheit(celsius);

    std::cout << "A temperatura em Fahrenheit é: " << fahrenheit << std::endl;
}

int main()
{
    converterTemperatura();

    return 0;
}
#include <iostream>
#include <cmath>

struct Ponto
{
    double x;
    double y;
};

double calcularDistancia(Ponto ponto1, Ponto ponto2)
{
    double deltaX = ponto2.x - ponto1.x;
    double deltaY = ponto2.y - ponto1.y;
    double distancia = std::sqrt(std::pow(deltaX, 2) + std::pow(deltaY, 2));
    return distancia;
}

int main()
{
    Ponto ponto1;
    Ponto ponto2;

    std::cout << "Digite as coordenadas do primeiro ponto (x y): ";
    std::cin >> ponto1.x >> ponto1.y;

    std::cout << "Digite as coordenadas do segundo ponto (x y): ";
    std::cin >> ponto2.x >> ponto2.y;

    double distancia = calcularDistancia(ponto1, ponto2);

    std::cout << "A distância entre os dois pontos é: " << distancia << std::endl;

    return 0;
}
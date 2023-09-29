#include <iostream>
#include <cmath>

using namespace std;

struct Ponto {
    double x;
    double y;

    Ponto(double _x, double _y) : x(_x), y(_y) {}
};

double calcularDistancia(const Ponto& ponto1, const Ponto& ponto2) {
    double diferencaX = ponto1.x - ponto2.x;
    double diferencaY = ponto1.y - ponto2.y;
    return sqrt(diferencaX * diferencaX + diferencaY * diferencaY);
}

int main() {
    Ponto pontoA(1.0, 2.0);
    Ponto pontoB(4.0, 6.0);

    double distancia = calcularDistancia(pontoA, pontoB);

    cout << "A distância entre os pontos A(" << pontoA.x << ", " << pontoA.y << ") e B(" << pontoB.x << ", " << pontoB.y << ") é: " << distancia << endl;

    return 0;
}

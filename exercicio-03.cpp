#include <iostream>
#include <cmath> // Para a função sqrt
using namespace std;

// Definição da estrutura Ponto
struct Ponto {
    double x;
    double y;
};

// Função para calcular a distância entre dois pontos
double calcularDistancia(Ponto ponto1, Ponto ponto2) {
    double deltaX = ponto2.x - ponto1.x;
    double deltaY = ponto2.y - ponto1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    Ponto pontoA, pontoB;
    
    // Entrada das coordenadas do ponto A
    cout << "Digite as coordenadas do ponto A:" << endl;
    cout << "x: ";
    cin >> pontoA.x;
    cout << "y: ";
    cin >> pontoA.y;

    // Entrada das coordenadas do ponto B
    cout << "Digite as coordenadas do ponto B:" << endl;
    cout << "x: ";
    cin >> pontoB.x;
    cout << "y: ";
    cin >> pontoB.y;

    // Calcular a distância entre os pontos e exibir
    double distancia = calcularDistancia(pontoA, pontoB);
    cout << "A distância entre os pontos A e B é: " << distancia << endl;

    return 0;
}

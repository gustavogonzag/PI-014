#include <iostream>

using namespace std;

// Função para calcular o fatorial de um número inteiro
unsigned long long calcularFatorial(int numero) {
    if (numero < 0) {
        return 0; // Não é possível calcular o fatorial de números negativos
    } else if (numero == 0) {
        return 1; // O fatorial de 0 é 1
    } else {
        unsigned long long resultado = 1;
        for (int i = 1; i <= numero; ++i) {
            resultado *= i;
        }
        return resultado;
    }
}

int main() {
    int num1, num2, num3;

    cout << "Digite o primeiro número para calcular o fatorial: ";
    cin >> num1;
    cout << "Fatorial de " << num1 << " é: " << calcularFatorial(num1) << endl;

    cout << "Digite o segundo número para calcular o fatorial: ";
    cin >> num2;
    cout << "Fatorial de " << num2 << " é: " << calcularFatorial(num2) << endl;

    cout << "Digite o terceiro número para calcular o fatorial: ";
    cin >> num3;
    cout << "Fatorial de " << num3 << " é: " << calcularFatorial(num3) << endl;

    return 0;
}

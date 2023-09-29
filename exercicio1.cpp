#include <iostream>

using namespace std;

unsigned long long calcularFatorial(int numero) {
    if (numero < 0) {
        cout << "Erro: O fatorial não é definido para números negativos." << endl;
        return 0;
    }
    
    if (numero == 0 || numero == 1) {
        return 1;
    }
    
    unsigned long long resultado = 1;
    for (int i = 2; i <= numero; i++) {
        resultado *= i;
    }
    
    return resultado;
}

int main() {
    int numero1 = 7;
    int numero2 = 13;
    int numero3 = 5;

    cout << "Fatorial de " << numero1 << " é " << calcularFatorial(numero1) << endl;
    cout << "Fatorial de " << numero2 << " é " << calcularFatorial(numero2) << endl;
    cout << "Fatorial de " << numero3 << " é " << calcularFatorial(numero3) << endl;

    return 0;
}

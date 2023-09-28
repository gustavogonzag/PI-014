#include <iostream>

using namespace std;

double leTemperaturaCelsius(){
    double temperaturaCelsius;
    cout << "Digite a temperatura em graus celsius" << endl;
    cin >> temperaturaCelsius;
    return temperaturaCelsius;
}

string imprimeTemperaturaFarenheit(double temperaturaFarenheit){
    return to_string(temperaturaFarenheit)+"°F";
}

double converteCelsiusFarenheit(double temperaturaCelsius){
    return (temperaturaCelsius*9/5)+32;
}

int main(void){
    double tC = leTemperaturaCelsius();
    double tF = converteCelsiusFarenheit(tC);
    cout << "A temperatura em Farenheit eh: "+imprimeTemperaturaFarenheit(tF);
    return 0;
}
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Ponto
{
    double x,y;
};

double distancia(Ponto p1, Ponto p2){
    return sqrt( pow(p1.x-p2.x,2)+ pow(p1.y-p2.y,2) );
}

string imprimePonto(Ponto p){
    return "("+ to_string(p.x) + ", " + to_string(p.y) + ")";
}
Ponto definePonto(){
    Ponto p;
    cout << "Digite as coordenadas x,y do ponto" << endl;
    cin >> p.x >> p.y;
    return p;
}

int main(void){
    Ponto p1 = definePonto();
    Ponto p2 =definePonto();
    cout << "A distancia entre os pontos " << imprimePonto(p1) << " e " << imprimePonto(p2) << " eh: " << distancia(p1,p2) << endl;





    return 0;
}
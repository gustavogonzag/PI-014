#include <string>

using namespace std;

struct CaracteristicasBasicas {
    string marca;
    string modelo;
    string sistemaOperacional;
    double tamanhoTela;
    int capacidadeArmazenamentoGB;
};

struct CorDesign {
    string cor;
    string material;
    double dimensoes;
};

struct Bateria
{
    int capacidademAh;
    double tempoUsoRestante;
};

struct Camera {
    int megapixelsPrincipal;
    int megapixelsFrontal;
    std::string recursos;
};

struct Conectividade
{

};

struct Smartphone
{
    CaracteristicasBasicas basicas;
    CorDesign corDesign;
    Bateria bateria;
    Camera camera;
    Conectividade conectividade;
};

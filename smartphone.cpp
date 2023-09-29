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

};

struct Camera
{

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

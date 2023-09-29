# Instruções para a calculadora:
A calculadora deve ter as seguintes funcionalidades:
- soma
- subtração
- divisão
- multiplicação
- resto da divisão

Cada membro da equipe fica responsável por desenvolver uma dessas funções. Importante levar em consideração que o retorno dessas funções tem que ser o resultado da conta.

## Protótipo das funções:
- int soma(int a, int b);
- int subtracao(int a, int b);
- double divisao(double a, double b);
- int multiplicacao(int a, int b);
- int restoDivisao(int a, int b);

# Instruções para o smartphone:

**Exercício em Equipe: Abstração e Modularização - Representando um Smartphone**

Neste exercício, nossa equipe irá praticar conceitos de abstração e modularização em programação, dividindo um objeto complexo da vida real, um smartphone, em partes menores representadas por structs em C++. Em seguida, vamos juntar todas essas structs para formar uma representação completa do objeto.

**Passo 1: Identificar as Características e Comportamentos do Smartphone**

Começaremos identificando as principais características e comportamentos de um smartphone. Essa lista será a base para as nossas structs. As características incluem informações estáticas sobre o smartphone, enquanto os comportamentos são ações que ele pode realizar.

**Características do Smartphone:**
1. Marca
2. Modelo
3. Sistema Operacional
4. Tamanho da Tela (em polegadas)
5. Capacidade de Armazenamento (em GB)
6. Cor
7. Material de Fabricação
8. Dimensões
9. Capacidade da Bateria (em mAh)
10. Tempo de Uso Restante da Bateria (em horas)
11. Câmera Principal (em megapixels)
12. Câmera Frontal (em megapixels)
13. Recursos da Câmera (como zoom, flash, etc.)
14. Wi-Fi
15. Bluetooth
16. Suporte a 4G/5G

**Comportamentos do Smartphone:**
1. Ligar
2. Desligar
3. Fazer Chamadas
4. Enviar Mensagens
5. Tirar Fotos
6. Navegar na Internet
7. Verificar Bateria
8. Instalar Aplicativos

**Passo 2: Dividir o Smartphone em Partes Menores (Structs)**

Agora, dividiremos o smartphone em partes menores representadas por structs em C++. Cada membro da equipe será responsável por criar uma struct que represente uma parte específica do smartphone. Aqui estão as partes a serem criadas:

1. **Características Básicas:** Marca, Modelo, Sistema Operacional, Tamanho da Tela, Capacidade de Armazenamento.

2. **Cor e Design:** Cor, Material de Fabricação, Dimensões.

3. **Bateria:** Capacidade da Bateria, Tempo de Uso Restante da Bateria.

4. **Câmera:** Câmera Principal, Câmera Frontal, Recursos da Câmera.

5. **Conectividade:** Wi-Fi, Bluetooth, Suporte a 4G/5G.

Cada membro da equipe deve criar sua struct com os campos apropriados para representar a parte designada do smartphone.

**Passo 3: Criar a Struct Principal (Smartphone)**

Depois que todas as structs individuais estiverem prontas, iremos criar uma struct principal chamada "Smartphone" que incorpora todas as partes menores. Essa struct deve ser capaz de representar o smartphone como um todo, incluindo todas as suas características e comportamentos.

**Passo 4: Exemplo de Uso e Teste**

Finalmente, iremos criar uma instância do "Smartphone" e demonstrar o uso de alguns dos comportamentos definidos, como ligar, fazer chamadas, tirar fotos, entre outros.

Lembrando que este é um exercício de equipe, e cada membro deve colaborar na criação das structs e garantir que todas as partes estejam bem integradas na struct principal "Smartphone".

Vamos trabalhar juntos para criar uma representação completa e modular do smartphone. Boa sorte!
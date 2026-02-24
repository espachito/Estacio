/*

DESAFIO 1 - NÍVEL AVENTUREIRO

Calculando Densidade Populacional e PIB per Capita

No nível anterior, o código estava somente cadastrando as cartas do Super Trunfo. Agora, o código adiciona mais detalhes
e complexidade ao nosso jogo! Neste nível, é implementada a lógica para calcular e exibir duas novas propriedades
importantes para cada cidade: a densidade populacional e o PIB per capita.

Autor: Elder de Souza Pachito - Matrícula: 202505123303

*/

// Inclusão da biblioteca necessária para a entrada e exibição de dados:
#include <stdio.h>

// Início do bloco principal do código:
int main() {

    // Declaração das variáveis que armazenarão os dados da primeira carta (Carta 1):
    char estado_1;            // Variável que armazenará uma letra de A a H, representando um dos 8 estados
    char codigo_1[4];         // Variável que armazenará o código da carta
    char cidade_1[30];        // Variável que armazenará o nome da cidade
    int populacao_1;          // Variável que armazenará a população da cidade
    float area_1;             // Variável que armazenará a árem em Km2 da cidade
    float PIB_1;              // Variável que armazenará o valor em reais do PIB da cidade
    int qtde_pturist_1;       // Variável que armazenará a quantidade de pontos turísticos da cidade
    float dens_pop_1;         // Variável que armazenará a densidade populacional da cidade
    float PIB_percapita_1;    // Variável que armazenará o PIP per capita da cidade;

    // Declaração das variáveis que armazenarão os dados da segunda carta (Carta 2):
    char estado_2;            // Variável que armazenará uma letra de A a H, representando um dos 8 estados
    char codigo_2[4];         // Variável que armazenará o código da carta
    char cidade_2[30];        // Variável que armazenará o nome da cidade
    int populacao_2;          // Variável que armazenará a população da cidade
    float area_2;             // Variável que armazenará a árem em Km2 da cidade
    float PIB_2;              // Variável que armazenará o valor em reais do PIB da cidade
    int qtde_pturist_2;       // Variável que armazenará a quantidade de pontos turísticos da cidade
    float dens_pop_2;         // Variável que armazenará a densidade populacional da cidade
    float PIB_percapita_2;    // Variável que armazenará o PIP per capita da cidade;

    // Solicitação dos dados da primeira carta (Carta 1) ao usuário:
    printf("ENTRADA DE DADOS PARA A PRIMEIRA CARTA - CARTA 1:\n\n");
    printf("- Digite uma letra entre 'A' e 'H', em caixa-alta, para o estado da primera carta: ");
    scanf("%s", &estado_1);       // Obtém a letra do estado da primeira carta
    printf("- Digite o código da primeira carta no formato X99: ");
    scanf("%s", &codigo_1);       // Obtém o código da primeira carta
    printf("- Informe o nome da cidade da primeira carta: ");
    scanf("%s", &cidade_1);       // Obtém o nome da cidade da primeira carta
    printf("- Entre com a população da cidade da primeira carta: ");
    scanf("%d", &populacao_1);    // Obtém a população da cidade da primeira carta
    printf("- Informe a área (em Km2) da cidade da primeira carta: ");
    scanf("%f", &area_1);         // Obtém a área da cidade da primeira carta
    printf("- Informe o PIB (em reais) da cidade da primeira carta: ");
    scanf("%f", &PIB_1);          // Obtém o PIB da cidade da primeira carta
    printf("- Entre com a quantidade de pontos turísticos da cidade da primeira carta: ");
    scanf("%d", &qtde_pturist_1); // Obtém a quantidade de pontos turísticos da cidade da primeira carta
    printf("\n");

    // Calcula a densidade populacional da cidade da primeira carta:
    dens_pop_1 = (float) populacao_1 / area_1;

    // Calcula o PIP per capita da cidade da primeira carta;
    PIB_percapita_1 = (float) PIB_1 / populacao_1;

    // Exibe os dados coletados para a primeira carta - Carta 1:
    printf("CONFIRMAÇÃO DOS DADOS COLETADOS PARA A PRIMEIRA CARTA - CARTA 1:\n\n");
    printf("- Estado: %c\n", estado_1);
    printf("- Código: %s\n", codigo_1);
    printf("- Nome da Cidade: %s\n", cidade_1);
    printf("- População: %d habitantes\n", populacao_1);
    printf("- Área: %.2f Km2\n", area_1);
    printf("- PIB: R$ %.2f\n", PIB_1);
    printf("- Quantidade de Pontos Turísticos: %d\n", qtde_pturist_1);

    // Exibe os valores calulados para a densidade populacional e o PIB per capita da cidade da primeira carta
    printf("- Densidade Populacional: %.2f Hab/Km2\n", dens_pop_1);
    printf("- PIB per Capita: %.2f R$/Hab\n", PIB_percapita_1);
    printf("\n");

    // Solicitação dos dados da segunda carta (Carta 2) ao usuário:
    printf("ENTRADA DE DADOS PARA A SEGUNDA CARTA - CARTA 2:\n\n");
    printf("- Digite uma letra entre 'A' e 'H', em caixa-alta, para o estado da segunda carta: ");
    scanf("%s", &estado_2);       // Obtém a letra do estado da segunda carta
    printf("- Digite o código da segunda carta no formato X99: ");
    scanf("%s", &codigo_2);       // Obtém o código da segunda carta
    printf("- Informe o nome da cidade da segunda carta: ");
    scanf("%s", &cidade_2);       // Obtém o nome da cidade da segunda carta
    printf("- Entre com a população da cidade da segunda carta: ");
    scanf("%d", &populacao_2);    // Obtém a população da cidade da segunda carta
    printf("- Informe a área (em Km2) da cidade da segunda carta: ");
    scanf("%f", &area_2);         // Obtém a área da cidade da segunda carta
    printf("- Informe o PIB (em reais) da cidade da segunda carta: ");
    scanf("%f", &PIB_2);          // Obtém o PIB da cidade da segunda carta
    printf("- Entre com a quantidade de pontos turísticos da cidade da segunda carta: ");
    scanf("%d", &qtde_pturist_2); // Obtém a quantidade de pontos turísticos da cidade da segunda carta
    printf("\n");

    // Calcula a densidade populacional da cidade da segunda carta:
    dens_pop_2 = (float) populacao_2 / area_2;

    // Calcula o PIP per capita da cidade da segunda carta;
    PIB_percapita_2 = (float) PIB_2 / populacao_2;

    // Exibe os dados coletados para a segunda carta - Carta 2:
    printf("CONFIRMAÇÃO DOS DADOS COLETADOS PARA A SEGUNDA CARTA - CARTA 2:\n\n");
    printf("- Estado: %c\n", estado_2);
    printf("- Código: %s\n", codigo_2);
    printf("- Nome da Cidade: %s\n", cidade_2);
    printf("- População: %d habitantes\n", populacao_2);
    printf("- Área: %.2f Km2\n", area_2);
    printf("- PIB: R$ %.2f\n", PIB_2);
    printf("- Quantidade de Pontos Turísticos: %d\n", qtde_pturist_2);

    // Exibe os valores calulados para a densidade populacional e o PIB per capita da cidade da segunda carta
    printf("- Densidade Populacional: %.2f Hab/Km2\n", dens_pop_2);
    printf("- PIB per Capita: %.2f R$/Hab\n", PIB_percapita_2);
    printf("\n");

    // Finalização do bloco principal do código:
    return 0;
}
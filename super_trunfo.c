/*

DESAFIO 1 - TEMA 3 - SUPER TRUNFO (Nível NOVATO)

Comparando Cartas do Super Trunfo

O código agora implementa a lógica para comparar duas cartas e determinar a vencedora com base em um único atributo numérico (como população, área, PIB, etc.). Este desafio é
uma continuação do desafio do tema anterior, sendo que o foco deste nível é a comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else.

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
    unsigned long int populacao_1;  // Variável que armazenará a população da cidade
    float area_1;             // Variável que armazenará a árem em Km2 da cidade
    double PIB_1;             // Variável que armazenará o valor em reais do PIB da cidade
    int qtde_pturist_1;       // Variável que armazenará a quantidade de pontos turísticos da cidade
    float dens_pop_1;         // Variável que armazenará a densidade populacional da cidade
    float PIB_percapita_1;    // Variável que armazenará o PIP per capita da cidade;
    float superpoder_1;       // Variável que armazenará o cálculo do superpoder da carta

    // Declaração das variáveis que armazenarão os dados da segunda carta (Carta 2):
    char estado_2;            // Variável que armazenará uma letra de A a H, representando um dos 8 estados
    char codigo_2[4];         // Variável que armazenará o código da carta
    char cidade_2[30];        // Variável que armazenará o nome da cidade
    unsigned long int populacao_2;  // Variável que armazenará a população da cidade
    float area_2;             // Variável que armazenará a árem em Km2 da cidade
    double PIB_2;             // Variável que armazenará o valor em reais do PIB da cidade
    int qtde_pturist_2;       // Variável que armazenará a quantidade de pontos turísticos da cidade
    float dens_pop_2;         // Variável que armazenará a densidade populacional da cidade
    float PIB_percapita_2;    // Variável que armazenará o PIP per capita da cidade;
    float superpoder_2;       // Variável que armazenará o cálculo do superpoder da carta

    // Solicitação dos dados da primeira carta (Carta 1) ao usuário:
    printf("ENTRADA DE DADOS PARA A PRIMEIRA CARTA - CARTA 1:\n\n");
    printf("- Digite uma letra entre 'A' e 'H', em caixa-alta, para o estado da primera carta: ");
    scanf("%s", &estado_1);       // Obtém a letra do estado da primeira carta
    printf("- Digite o código da primeira carta no formato X99: ");
    scanf("%s", &codigo_1);       // Obtém o código da primeira carta
    printf("- Informe o nome da cidade da primeira carta: ");
    scanf("%s", &cidade_1);       // Obtém o nome da cidade da primeira carta
    printf("- Entre com a população da cidade da primeira carta: ");
    scanf("%lu", &populacao_1);    // Obtém a população da cidade da primeira carta
    printf("- Informe a área (em Km2) da cidade da primeira carta: ");
    scanf("%f", &area_1);         // Obtém a área da cidade da primeira carta
    printf("- Informe o PIB (em reais) da cidade da primeira carta: ");
    scanf("%lf", &PIB_1);          // Obtém o PIB da cidade da primeira carta
    printf("- Entre com a quantidade de pontos turísticos da cidade da primeira carta: ");
    scanf("%d", &qtde_pturist_1); // Obtém a quantidade de pontos turísticos da cidade da primeira carta
    printf("\n");

    // Calcula a densidade populacional da cidade da primeira carta:
    dens_pop_1 = (float) populacao_1 / area_1;

    // Calcula o PIP per capita da cidade da primeira carta:
    PIB_percapita_1 = (float) PIB_1 / populacao_1;

    // Calcula o Super Poder da primeira carta:
    superpoder_1 = (float) populacao_1 + area_1 + PIB_1 + qtde_pturist_1 + PIB_percapita_1 + (1 / dens_pop_1);

    // Exibe os dados coletados para a primeira carta - Carta 1:
    printf("CONFIRMAÇÃO DOS DADOS COLETADOS PARA A PRIMEIRA CARTA - CARTA 1:\n\n");
    printf("- Estado: %c\n", estado_1);
    printf("- Código: %s\n", codigo_1);
    printf("- Nome da Cidade: %s\n", cidade_1);
    printf("- População: %lu habitantes\n", populacao_1);
    printf("- Área: %.2f Km2\n", area_1);
    printf("- PIB: R$ %.2f\n", PIB_1);
    printf("- Quantidade de Pontos Turísticos: %d\n", qtde_pturist_1);

    // Exibe os valores calulados para a densidade populacional e o PIB per capita da cidade da primeira carta
    printf("- Densidade Populacional: %.2f Hab/Km2\n", dens_pop_1);
    printf("- PIB per Capita: %.2f R$/Hab\n", PIB_percapita_1);

    // Exibe o valor do Super Poder da primeira carta - Carta 1:
    printf("- SUPER PODER: %.2f\n", superpoder_1);
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
    scanf("%lu", &populacao_2);    // Obtém a população da cidade da segunda carta
    printf("- Informe a área (em Km2) da cidade da segunda carta: ");
    scanf("%f", &area_2);         // Obtém a área da cidade da segunda carta
    printf("- Informe o PIB (em reais) da cidade da segunda carta: ");
    scanf("%lf", &PIB_2);          // Obtém o PIB da cidade da segunda carta
    printf("- Entre com a quantidade de pontos turísticos da cidade da segunda carta: ");
    scanf("%d", &qtde_pturist_2); // Obtém a quantidade de pontos turísticos da cidade da segunda carta
    printf("\n");

    // Calcula a densidade populacional da cidade da segunda carta:
    dens_pop_2 = (float) populacao_2 / area_2;

    // Calcula o PIP per capita da cidade da segunda carta:
    PIB_percapita_2 = (float) PIB_2 / populacao_2;
    
    // Calcula o Super Poder da segunda carta:
    superpoder_2 = (float) populacao_2 + area_2 + PIB_2 + qtde_pturist_2 + PIB_percapita_2 + (1 / dens_pop_2);

    // Exibe os dados coletados para a segunda carta - Carta 2:
    printf("CONFIRMAÇÃO DOS DADOS COLETADOS PARA A SEGUNDA CARTA - CARTA 2:\n\n");
    printf("- Estado: %c\n", estado_2);
    printf("- Código: %s\n", codigo_2);
    printf("- Nome da Cidade: %s\n", cidade_2);
    printf("- População: %lu habitantes\n", populacao_2);
    printf("- Área: %.2f Km2\n", area_2);
    printf("- PIB: R$ %.2f\n", PIB_2);
    printf("- Quantidade de Pontos Turísticos: %d\n", qtde_pturist_2);

    // Exibe os valores calulados para a densidade populacional e o PIB per capita da cidade da segunda carta
    printf("- Densidade Populacional: %.2f Hab/Km2\n", dens_pop_2);
    printf("- PIB per Capita: %.2f R$/Hab\n", PIB_percapita_2);
    
    // Exibe o valor do Super Poder da segunda carta - Carta 2:
    printf("- SUPER PODER: %.2f\n", superpoder_2);
    printf("\n");

    // Atributo escolhido para a determinação da carta vencedora: SUPER PODER
    
    // Imprime cabeçalho para a exibição do resultado final:
    printf("RESULTADO FINAL - IDENTIFICAÇÃO DA CARTA VENCEDORA:\n\n");
    printf("Atributo usado para determinação da carta vencedora: SUPER PODER\n\n");
    
    // Exibe o valor do atributo SUPER PODER de cada carta, compara as cartas e informa a carta vencedora:
    printf("- CARTA 1: %s (%c) - SUPER PODER: %.2f\n", cidade_1, estado_1, superpoder_1);
    printf("- CARTA 2: %s (%c) - SUPER PODER: %.2f\n", cidade_2, estado_2, superpoder_2);
    printf("\n");

    if (superpoder_1 > superpoder_2) {
        printf("A CARTA VENCEDORA PELO ATRIBUTO SUPER PODER É A CARTA 1: %s (%c) - VENCEU!!!\n", cidade_1, estado_1);
    } else {
        printf("A CARTA VENCEDORA PELO ATRIBUTO SUPER PODER É A CARTA 2: %s (%c) - VENCEU!!!\n", cidade_2, estado_2);
    }

    printf("\n");
    
    /* 
    BLOCO DE CÓDIGO UTILIZADO NO DESAFIO ANTERIOR E MANTIDO AQUI POR PRECAUÇÂO CASO SEJA NECESSÁRIO REAPROVEITÁ-LO NO FUTURO

    printf("Quesito População: %d\n", (populacao_1 < populacao_2) + 1);
    printf("Quesito Área: %d\n", (area_1 < area_2) + 1);
    printf("PIB: %d\n", (PIB_1 < PIB_2) + 1);
    printf("Quantidade de Pontos Turísticos: %d\n", (qtde_pturist_1 < qtde_pturist_2) + 1);
    printf("Densidade Populacional: %d\n", ((1 / dens_pop_1) < (1 / dens_pop_2)) + 1);
    printf("PIB per capita: %d\n", (PIB_percapita_1 < PIB_percapita_2) + 1);
    printf("SUPER PODER: %d\n", (superpoder_1 < superpoder_2) + 1);
    printf("\n");
    */

    // Finalização do bloco principal do código:
    return 0;
}
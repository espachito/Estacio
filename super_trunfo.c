/*

DESAFIO 1 - TEMA 3 - SUPER TRUNFO (Nível AVENTUREIRO)

Interatividade no Super Trunfo

Esta versão implementa um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países. Além disso, usa estruturas
de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa, considerando regras específicas para cada atributo. Este desafio é uma
continuação do desafio anterior.

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

    // Declaração de variáveis auxiliares:
    int atributo_escolhido;   // Variável que armazenará a opção escolhida pelo usuário para comparação entre as cartas, e será o controle do menu SWITCH

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

    // Cria um menu interativo para que o usuário escolha qual atributo será utilizado para comparação entre as cartas:
    printf("ESCOLHA O ATRIBUTO QUE SERÁ UTILIZADO PARA COMPARAÇÃO ENTRE AS CARTAS (Digite um número entre 1 e 7):\n");
    printf("   1 - População\n");
    printf("   2 - Área em Km2\n");
    printf("   3 - PIB\n");
    printf("   4 - Quantidade de Pontos Turísticos\n");
    printf("   5 - Densidade Populacional\n");
    printf("   6 - PIB per capita\n");
    printf("   7 - Super Poder\n");
    scanf("%d", &atributo_escolhido);

    // Utiliza o atributo escolhido como controle da estrutura SWITCH para que o código execute a comparação apropriada:
    switch (atributo_escolhido) {
        case 1:
            // Imprime cabeçalho para a exibição do resultado final:
            printf("RESULTADO FINAL - IDENTIFICAÇÃO DA CARTA VENCEDORA:\n\n");
            printf("Atributo usado para determinação da carta vencedora: POPULAÇÃO\n\n");
            // Exibe o valor do atributo POPULAÇÃO de cada carta, compara as cartas e informa a carta vencedora:
            printf("- CARTA 1: %s (%c) - POPULAÇÃO: %lu\n", cidade_1, estado_1, populacao_1);
            printf("- CARTA 2: %s (%c) - POPULAÇÃO: %lu\n", cidade_2, estado_2, populacao_2);
            printf("\n");
            // Compara o atributo POPULAÇÃO entre as cartas e exibe a carta vencedora ou se houve empate:
            if (populacao_1 > populacao_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO POPULAÇÃO É A CARTA 1: %s (%c) - VENCEU!!!\n", cidade_1, estado_1);
            } else if (populacao_1 < populacao_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO POPULAÇÃO É A CARTA 2: %s (%c) - VENCEU!!!\n", cidade_2, estado_2);
            } else {
                printf("EMPATE!!! - AS CARTAS POSSUEM O MESMO VALOR DE POPULAÇÃO.\n");
            }
            break;
        case 2:
            // Imprime cabeçalho para a exibição do resultado final:
            printf("RESULTADO FINAL - IDENTIFICAÇÃO DA CARTA VENCEDORA:\n\n");
            printf("Atributo usado para determinação da carta vencedora: ÁREA EM KM2\n\n");
            // Exibe o valor do atributo ÁREA EM KM2 de cada carta, compara as cartas e informa a carta vencedora:
            printf("- CARTA 1: %s (%c) - ÁREA EM KM2: %.2f\n", cidade_1, estado_1, area_1);
            printf("- CARTA 2: %s (%c) - ÁREA EM KM2: %.2f\n", cidade_2, estado_2, area_2);
            printf("\n");
            // Compara o atributo ÁREA EM KM2 entre as cartas e exibe a carta vencedora ou se houve empate:
            if (area_1 > area_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO ÁREA EM KM2 É A CARTA 1: %s (%c) - VENCEU!!!\n", cidade_1, estado_1);
            } else if (area_1 < area_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO ÁREA EM KM2 É A CARTA 2: %s (%c) - VENCEU!!!\n", cidade_2, estado_2);
            } else {
                printf("EMPATE!!! - AS CARTAS POSSUEM O MESMO VALOR DE ÁREA EM KM2.\n");
            }
            break;
        case 3:
            // Imprime cabeçalho para a exibição do resultado final:
            printf("RESULTADO FINAL - IDENTIFICAÇÃO DA CARTA VENCEDORA:\n\n");
            printf("Atributo usado para determinação da carta vencedora: PIB\n\n");
            // Exibe o valor do atributo PIB de cada carta, compara as cartas e informa a carta vencedora:
            printf("- CARTA 1: %s (%c) - PIB: R$ %.2f\n", cidade_1, estado_1, PIB_1);
            printf("- CARTA 2: %s (%c) - PIB: R$ %.2f\n", cidade_2, estado_2, PIB_2);
            printf("\n");
            // Compara o atributo PIB entre as cartas e exibe a carta vencedora ou se houve empate:
            if (PIB_1 > PIB_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO PIB É A CARTA 1: %s (%c) - VENCEU!!!\n", cidade_1, estado_1);
            } else if (PIB_1 < PIB_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO PIB É A CARTA 2: %s (%c) - VENCEU!!!\n", cidade_2, estado_2);
            } else {
                printf("EMPATE!!! - AS CARTAS POSSUEM O MESMO VALOR DE PIB.\n");
            }
            break;
        case 4:
            // Imprime cabeçalho para a exibição do resultado final:
            printf("RESULTADO FINAL - IDENTIFICAÇÃO DA CARTA VENCEDORA:\n\n");
            printf("Atributo usado para determinação da carta vencedora: QUANTIDADE DE PONTOS TURÍSTICOS\n\n");
            // Exibe o valor do atributo QUANTIDADE DE PONTOS TURÍSTICOS de cada carta, compara as cartas e informa a carta vencedora:
            printf("- CARTA 1: %s (%c) - QUANTIDADE DE PONTOS TURÍSTICOS: %d\n", cidade_1, estado_1, qtde_pturist_1);
            printf("- CARTA 2: %s (%c) - QUANTIDADE DE PONTOS TURÍSTIVOS: %d\n", cidade_2, estado_2, qtde_pturist_2);
            printf("\n");
            // Compara o atributo QUANTIDADE DE PONTOS TURÍSTICOS entre as cartas e exibe a carta vencedora ou se houve empate:
            if (qtde_pturist_1 > qtde_pturist_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO QUANTIDADE DE PONTOS TURÍSTICOS É A CARTA 1: %s (%c) - VENCEU!!!\n", cidade_1, estado_1);
            } else if (PIB_1 < PIB_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO QUANTIDADE DE PONTOS TURÍSTICOS É A CARTA 2: %s (%c) - VENCEU!!!\n", cidade_2, estado_2);
            } else {
                printf("EMPATE!!! - AS CARTAS POSSUEM A MESMA QUANTIDADE DE PONTOS TURÍSTICOS.\n");
            }
            break;
        case 5:
            // Imprime cabeçalho para a exibição do resultado final:
            printf("RESULTADO FINAL - IDENTIFICAÇÃO DA CARTA VENCEDORA:\n\n");
            printf("Atributo usado para determinação da carta vencedora: DENSIDADE POPULACIONAL\n\n");
            // Exibe o valor do atributo DENSIDADE POIPULACIONAL de cada carta, compara as cartas e informa a carta vencedora (menor DENSIDADE POPULACIONAL vence):
            printf("- CARTA 1: %s (%c) - DESNIDADE POPULACIONAL: %.2f Hab/Km2\n", cidade_1, estado_1, dens_pop_1);
            printf("- CARTA 2: %s (%c) - DESNIDADE POPULACIONAL: %.2f Hab/Km2\n", cidade_2, estado_2, dens_pop_2);
            printf("\n");
            // Compara o atributo DENSIDADE POPULACIONAL entre as cartas e exibe a carta vencedora ou se houve empate:
            if (dens_pop_1 < dens_pop_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO DENSIDADE POPULACIONAL É A CARTA 1: %s (%c) - VENCEU!!!\n", cidade_1, estado_1);
            } else if (dens_pop_1 > dens_pop_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO DENSIDADE POPULACIONAL É A CARTA 2: %s (%c) - VENCEU!!!\n", cidade_2, estado_2);
            } else {
                printf("EMPATE!!! - AS CARTAS POSSUEM O MESMO VALOR DE DENSIDADE POPULACIONAL.\n");
            }
            break;
        case 6:
            // Imprime cabeçalho para a exibição do resultado final:
            printf("RESULTADO FINAL - IDENTIFICAÇÃO DA CARTA VENCEDORA:\n\n");
            printf("Atributo usado para determinação da carta vencedora: PIB PER CAPITA\n\n");
            // Exibe o valor do atributo PIB PER CAPITA de cada carta, compara as cartas e informa a carta vencedora:
            printf("- CARTA 1: %s (%c) - PIB PER CAPITA: R$ %.2f por Habitante\n", cidade_1, estado_1, PIB_percapita_1);
            printf("- CARTA 2: %s (%c) - PIB PER CAPITA: R$ %.2f por Habitante\n", cidade_2, estado_2, PIB_percapita_2);
            printf("\n");
            // Compara o atributo PIB PER CAPITA entre as cartas e exibe a carta vencedora ou se houve empate:
            if (PIB_percapita_1 > PIB_percapita_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO PIB PER CAPITA É A CARTA 1: %s (%c) - VENCEU!!!\n", cidade_1, estado_1);
            } else if (PIB_percapita_1 < PIB_percapita_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO PIB PER CAPITA É A CARTA 2: %s (%c) - VENCEU!!!\n", cidade_2, estado_2);
            } else {
                printf("EMPATE!!! - AS CARTAS POSSUEM O MESMO VALOR DE PIB PER CAPITA.\n");
            }
            break;
        case 7:
            // Imprime cabeçalho para a exibição do resultado final:
            printf("RESULTADO FINAL - IDENTIFICAÇÃO DA CARTA VENCEDORA:\n\n");
            printf("Atributo usado para determinação da carta vencedora: SUPER PODER\n\n");
            // Exibe o valor do atributo SUPER PODER de cada carta, compara as cartas e informa a carta vencedora:
            printf("- CARTA 1: %s (%c) - SUPER PODER: %.2f\n", cidade_1, estado_1, superpoder_1);
            printf("- CARTA 2: %s (%c) - SUPER PODER: %.2f\n", cidade_2, estado_2, superpoder_2);
            printf("\n");
            // Compara o atributo SUPER PODER entre as cartas e exibe a carta vencedora ou se houve empate:
            if (superpoder_1 > superpoder_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO SUPER PODER É A CARTA 1: %s (%c) - VENCEU!!!\n", cidade_1, estado_1);
            } else if (superpoder_1 < superpoder_2) {
                printf("A CARTA VENCEDORA PELO ATRIBUTO SUPER PODER É A CARTA 2: %s (%c) - VENCEU!!!\n", cidade_2, estado_2);
            } else {
                printf("EMPATE!!! - AS CARTAS POSSUEM O MESMO VALOR DE SUPER PODER.\n");
            }
            break;
        default:
            printf("*** ERRO: Opção Inválida! Execute novamente e escolha uma opção válida, entre 1 e 7.\n");
    }
    
    // Salta uma linha na tela do terminal:
    printf("\n");
    
    // Finalização do bloco principal do código:
    return 0;
}
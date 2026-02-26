/*

DESAFIO 1 - TEMA 3 - SUPER TRUNFO (Nível MESTRE) - Desafio Final

Implementando Comparações Avançadas com Atributos Múltiplos em C

Esta versão final do desafio Super Trunfo permite que o jogador escolha dois atributos para comparar as cartas das cidades, implementa menus dinâmicos com switch e usa o
operador ternário. Este desafio é a culminação dos desafios anteriores, onde o código cadastrava as cartas e implementava a comparação com um único atributo.

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
    int atributo_escolhido_1; // Variável que armazenará a primeira opção escolhida pelo usuário para comparação entre as cartas
    int atributo_escolhido_2; // Variável que armazenará a segunda opção escolhida pelo usuário para comparação entre as cartas
    double pontos_somados_1;  // Variável que armazenará o cáclulo da soma dos pontos dos atributos de comparação da primeira carta - Carta 1
    double pontos_somados_2;  // Variável que armazenará o cáclulo da soma dos pontos dos atributos de comparação da segunda carta - Carta 2

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

    // Cria um menu interativo para que o usuário escolha o primeiro atributo que será utilizado para comparação entre as cartas:
    printf("ESCOLHA O PRIMEIRO ATRIBUTO QUE SERÁ UTILIZADO PARA COMPARAÇÃO ENTRE AS CARTAS (Digite um número entre 1 e 7):\n");
    printf("   1 - População\n");
    printf("   2 - Área em Km2\n");
    printf("   3 - PIB\n");
    printf("   4 - Quantidade de Pontos Turísticos\n");
    printf("   5 - Densidade Populacional\n");
    printf("   6 - PIB per capita\n");
    printf("   7 - Super Poder\n");
    scanf("%d", &atributo_escolhido_1);

    // Verifica se o usuário entrou com uma opção válida entre 1 e 7, terminando o programa em caso de entrada número fora da faixa:
    if (!(atributo_escolhido_1 >= 1 && atributo_escolhido_1 <= 7)) {
        printf("\n*** ERRO! - Opção Inválida!\n\n");
        return 0;
    }

    // Cria um menu interativo para que o usuário escolha o segundo atributo que será utilizado para comparação entre as cartas (excluindo o primeiro escolhido):
    printf("\nESCOLHA O SEGUNDO ATRIBUTO QUE SERÁ UTILIZADO PARA COMPARAÇÃO ENTRE AS CARTAS (Digite um número entre as opções restantes):\n");
    if (atributo_escolhido_1 != 1) {printf("   1 - População\n");}
    if (atributo_escolhido_1 != 2) {printf("   2 - Área em Km2\n");}
    if (atributo_escolhido_1 != 3) {printf("   3 - PIB\n");}
    if (atributo_escolhido_1 != 4) {printf("   4 - Quantidade de Pontos Turísticos\n");}
    if (atributo_escolhido_1 != 5) {printf("   5 - Densidade Populacional\n");}
    if (atributo_escolhido_1 != 6) {printf("   6 - PIB per capita\n");}
    if (atributo_escolhido_1 != 7) {printf("   7 - Super Poder\n");}
    scanf("%d", &atributo_escolhido_2);

    // Verifica se o usuário entrou com uma opção válida, terminando o programa em caso de entrada número fora da faixa:
    if ((!(atributo_escolhido_2 >= 1 && atributo_escolhido_2 <= 7)) || (atributo_escolhido_2 == atributo_escolhido_1)) {
        printf("\n*** ERRO! - Opção Inválida!\n\n");
        return 0;
    }
    
    // Salta uma linha na tela do terminal:
    printf("\n");
    
    // Imprime cabeçalho para a exibição do resultado final, e calcula a soma dos pontos dos atributos escolhidos:
    pontos_somados_1 = 0.0;      // inicia o contador de pontos para a Carta 1, para que este acrescente o valor/pontos do atributo escolhida, conforme cada SWICTH
    pontos_somados_2 = 0.0;      // Inicia o contador de pontos para a Carta 2, para que este acrescente o valor/pontos do atributo escolhida, conforme cada SWICTH
    printf("RESULTADO FINAL - IDENTIFICAÇÃO DA CARTA VENCEDORA:\n\n");
    switch (atributo_escolhido_1) {
        case 1:
            printf("Primeiro Atributo a ser comparado: POPULAÇÃO\n");
            printf("      Carta 1 - %s (%c) => População = %lu\n", cidade_1, estado_1, populacao_1);
            printf("      Carta 2 - %s (%c) => População = %lu\n", cidade_2, estado_2, populacao_2);
            pontos_somados_1 += (float) populacao_1;
            pontos_somados_2 += (float) populacao_2;
            break;
        case 2:
            printf("Primeiro Atributo a ser comparado: ÁREA EM KM2\n");
            printf("      Carta 1 - %s (%c) => Área = %.2f Km2\n", cidade_1, estado_1, area_1);
            printf("      Carta 2 - %s (%c) => Área = %.2f Km2\n", cidade_2, estado_2, area_2);
            pontos_somados_1 += (float) area_1;
            pontos_somados_2 += (float) area_2;
            break;
        case 3:
            printf("Primeiro Atributo a ser comparado: PIB\n");
            printf("      Carta 1 - %s (%c) => PIB = R$ %.2f\n", cidade_1, estado_1, PIB_1);
            printf("      Carta 2 - %s (%c) => PIB = R$ %.2f\n", cidade_2, estado_2, PIB_2);
            pontos_somados_1 += (float) PIB_1;
            pontos_somados_2 += (float) PIB_2;
            break;
        case 4:
            printf("Primeiro Atributo a ser comparado: QUANTIDADE DE PONTOS TURÍSTICOS\n");
            printf("      Carta 1 - %s (%c) => Quantidade de Pontos Turísticos = %d\n", cidade_1, estado_1, qtde_pturist_1);
            printf("      Carta 2 - %s (%c) => Quantidade de Pontos Turísticos = %d\n", cidade_2, estado_2, qtde_pturist_2);
            pontos_somados_1 += (float) qtde_pturist_1;
            pontos_somados_2 += (float) qtde_pturist_2;
            break;
        case 5:
            printf("Primeiro Atributo a ser comparado: DENSIDADE POPULACIONAL\n");
            printf("      Carta 1 - %s (%c) => Densidade Populacional = %.2f\n", cidade_1, estado_1, dens_pop_1);
            printf("      Carta 2 - %s (%c) => Densidade Populacional = %.2f\n", cidade_2, estado_2, dens_pop_2);
            pontos_somados_1 += (float) (1 / dens_pop_1);     // adota a regra do inverso da densidade populacional para pontuação
            pontos_somados_2 += (float) (1 / dens_pop_2);     // idem
            break;
        case 6:
            printf("Primeiro Atributo a ser comparado: PIB PER CAPITA\n");
            printf("      Carta 1 - %s (%c) => PIB per Capita = R$ %.2f por Habitante\n", cidade_1, estado_1, PIB_percapita_1);
            printf("      Carta 2 - %s (%c) => PIB per Capita = R$ %.2f por Habitante\n", cidade_2, estado_2, PIB_percapita_2);
            pontos_somados_1 += (float) PIB_percapita_1;
            pontos_somados_2 += (float) PIB_percapita_2;
            break;
        case 7:
            printf("Primeiro Atributo a ser comparado: SUPER PODER\n");
            printf("      Carta 1 - %s (%c) => Super Poder = %.2f\n", cidade_1, estado_1, superpoder_1);
            printf("      Carta 2 - %s (%c) => Super Poder = %.2f\n", cidade_2, estado_2, superpoder_2);
            pontos_somados_1 += (float) superpoder_1;
            pontos_somados_2 += (float) superpoder_2;
            break;
    }
    switch (atributo_escolhido_2) {
        case 1:
            printf("Segundo Atributo a ser comparado: POPULAÇÃO\n");
            printf("      Carta 1 - %s (%c) => População = %lu\n", cidade_1, estado_1, populacao_1);
            printf("      Carta 2 - %s (%c) => População = %lu\n\n", cidade_2, estado_2, populacao_2);
            pontos_somados_1 += (float) populacao_1;
            pontos_somados_2 += (float) populacao_2;
            break;
        case 2:
            printf("Segundo Atributo a ser comparado: ÁREA EM KM2\n");
            printf("      Carta 1 - %s (%c) => Área = %.2f Km2\n", cidade_1, estado_1, area_1);
            printf("      Carta 2 - %s (%c) => Área = %.2f Km2\n\n", cidade_2, estado_2, area_2);
            pontos_somados_1 += (float) area_1;
            pontos_somados_2 += (float) area_2;
            break;
        case 3:
            printf("Segundo Atributo a ser comparado: PIB\n");
            printf("      Carta 1 - %s (%c) => PIB = R$ %.2f\n", cidade_1, estado_1, PIB_1);
            printf("      Carta 2 - %s (%c) => PIB = R$ %.2f\n\n", cidade_2, estado_2, PIB_2);
            pontos_somados_1 += (float) PIB_1;
            pontos_somados_2 += (float) PIB_2;
            break;
        case 4:
            printf("Segundo Atributo a ser comparado: QUANTIDADE DE PONTOS TURÍSTICOS\n");
            printf("      Carta 1 - %s (%c) => Quantidade de Pontos Turísticos = %d\n", cidade_1, estado_1, qtde_pturist_1);
            printf("      Carta 2 - %s (%c) => Quantidade de Pontos Turísticos = %d\n\n", cidade_2, estado_2, qtde_pturist_2);
            pontos_somados_1 += (float) qtde_pturist_1;
            pontos_somados_2 += (float) qtde_pturist_2;
            break;
        case 5:
            printf("Segundo Atributo a ser comparado: DENSIDADE POPULACIONAL\n");
            printf("      Carta 1 - %s (%c) => Densidade Populacional = %.2f\n", cidade_1, estado_1, dens_pop_1);
            printf("      Carta 2 - %s (%c) => Densidade Populacional = %.2f\n\n", cidade_2, estado_2, dens_pop_2);
            pontos_somados_1 += (float) (1 / dens_pop_1);    // adota a regra do inverso da densidade populacional para pontuação
            pontos_somados_2 += (float) (1 / dens_pop_2);    // idem
            break;
        case 6:
            printf("Segundo Atributo a ser comparado: PIB PER CAPITA\n");
            printf("      Carta 1 - %s (%c) => PIB per Capita = R$ %.2f por Habitante\n", cidade_1, estado_1, PIB_percapita_1);
            printf("      Carta 2 - %s (%c) => PIB per Capita = R$ %.2f por Habitante\n\n", cidade_2, estado_2, PIB_percapita_2);
            pontos_somados_1 += (float) PIB_percapita_1;
            pontos_somados_2 += (float) PIB_percapita_2;
            break;
        case 7:
            printf("Segundo Atributo a ser comparado: SUPER PODER\n");
            printf("      Carta 1 - %s (%c) => Super Poder = %.2f\n", cidade_1, estado_1, superpoder_1);
            printf("      Carta 2 - %s (%c) => Super Poder = %.2f\n\n", cidade_2, estado_2, superpoder_2);
            pontos_somados_1 += (float) superpoder_1;
            pontos_somados_2 += (float) superpoder_2;
            break;
    }

    // Exibe a pontuação de cada carta, calculada com base na soma dos pontos dos atributos de comparação escolhidos pelo usuário
    printf("- PONTOS DA CARTA 1 - %s (%c): %.8f\n", cidade_1, estado_1, pontos_somados_1);
    printf("- PONTOS DA CARTA 2 - %s (%c): %.8f\n\n", cidade_2, estado_2, pontos_somados_2);

    // Compara a pontuação entre as cartas e exibe a carta vencedora ou se houve empate:
    if (pontos_somados_1 > pontos_somados_2) {
        printf("A CARTA VENCEDORA PELOS ATRIBUTOS ESCOLHIDOS É A CARTA 1: %s (%c) - VENCEU!!!\n", cidade_1, estado_1);
    } else if (pontos_somados_1 < pontos_somados_2) {
        printf("A CARTA VENCEDORA PELOS ATRIBUTOS ESCOLHIDOS É A CARTA 2: %s (%c) - VENCEU!!!\n", cidade_2, estado_2);
    } else {
        printf("EMPATE!!! - AS CARTAS POSSUEM A MESMA PONTUAÇÃO.\n");
    }

    // Salta uma linha na tela do terminal:
    printf("\n");
    
    // Finalização do bloco principal do código:
    return 0;
}
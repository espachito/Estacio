/*

DESAFIO 2 - TEMA 4 - XADREZ (Nível NOVATO)

Movimentando as Peças do xadrez

Esta primeira versão do código simula o movimento de três peças: Torre, Bispo e Rainha. Para cada peça, o código utiliza uma estrutura de repetição diferente (for, while ou
do-while) para simular seu movimento. O programa imprime no console a direção do movimento a cada casa percorrida pela peça.

Autor: Elder de Souza Pachito - Matrícula: 202505123303

*/

// Inclusão da biblioteca necessária para a entrada e exibição de dados:
#include <stdio.h>

// Início do bloco principal do código:
int main() {

    // Declaração das variáveis que armazenarão os dados sobre os movimentos de cada peça:
    int mov_torre = 5;       // Variável que armazenará a quantidade de casas que a TORRE irá mover
    int mov_bispo = 5;       // Vatiável que armazenará a quantidade de casas que o BISPO irá mover
    int mov_rainha = 8;      // Variável que armazenará a quantidade de casas que a RAINHA irá mover; 

    // Declaração de variáveis auxiliares:
    int i = 1;               // Variável de controle das estruturas WHILE e DO-WHILE;
    
    // Realiza a simulação do movimento da TORRE utilizando a estrutura WHILE, e exibe cada movimento numa mesma linha na tela:
    printf("MOVIMENTO DA TORRE:    ");
    while (i <= 5) {
        printf("-> DIREITA ");
        i++;
    }

    // Reinicializa a variável auxiliar i para iniciar um novo loop, para outra peça:
    i = 1;
    
    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Realiza a simulação do movimento do BISPO utilizando a estrutura DO-WHILE, e exibe cada movimento numa mesma linha na tela:
    printf("MOVIMENTO DO BISPO:    ");
    do {
        printf("-> CIMA+DIREITA ");
        i++;
    } while (i <= 5);

    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Realiza a simulação do movimento da RAINHA utilizando a estrutura FOR, e exibe cada movimento numa mesma linha na tela:
    printf("MOVIMENTO DA RAINHA:    ");
    for (i = 1; i <= mov_rainha; i++) {
        printf("ESQUERDA <- ");
    }

    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Finalização do bloco principal do código:
    return 0;
}
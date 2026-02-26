/*

DESAFIO 3 - TEMA 5 - BATALHA NAVAL (Nível NOVATO)

Posicionando Navios no Tabuleiro

Neste primeiro desafio, este código utiliza vetores (arrays unidimensionais) em C para representar um tabuleiro simplificado e posicionar dois navios nele: um na vertical e
outro na horizontal.

Autor: Elder de Souza Pachito - Matrícula: 202505123303

*/

// Inclusão da biblioteca necessária para a entrada e exibição de dados:
#include <stdio.h>

int main() {

    // Criando a matriz principal que representará o tabuleiro virtual do jogo em memória:
    int tabuleiro[10][10];

    // Criando os vetores que representarão os navios:
    int nav1[3] = {3,3,3};            // Navio 1 tem 3 posições de tamanho, conforme sugerido
    int nav2[3] = {3,3,3};            // Navio 2 tem 3 posições de tamanho, conforme sugerido
    int tamanho;                      // Variável para armazenar o tamanho de um navio
    int posicao_i, posicao_j;         // Variáveis auxiliares para posicionar uma parte do corpo de um navio nas coordenadas i e j
    int inc_i, inc_j;                 // Variáveis auxiliares para direcionar o posicionamento de uma parte do corpo de um navio através de incrementos em i e em j

    // Definindo as posições iniciais dos navios, através das coordenadas (i, j) de uma de suas extremidades, e da direção do seu posicionamento a partir de (i. j):
    // Legenda para a direção de um navio:  0 = Leste            3 = Noroeste            6 = Sul
    //                                      1 = Nordeste         4 = Oeste               7 = Sudeste
    //                                      2 = Norte            5 = Sudoeste
    
    int pos_nav1[3] = {3, 2, 0};  // i = 3; j = 2; e a direção = 0 (Leste)
    int pos_nav2[3] = {7, 6, 1};  // i = 7; j = 6; e a direção = 1 (Nordeste)

    // Inicializando o tabuleiro com água (0) em todas as suas posições:
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Colocando o Navio 1 no tabuleiro:
    tamanho = (int)(sizeof(nav1)/sizeof(nav1[0]));      // Obtém o tamanho do Navio 1
    posicao_i = pos_nav1[0];
    posicao_j = pos_nav1[1];
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[posicao_i][posicao_j] = nav1[i];
        switch (pos_nav1[2]) {
            case 0:                                     // Caso o navio esteja direcionado para o Leste
                inc_i = 0;                              
                inc_j = 1;
                break;
            case 1:                                     // Caso o navio esteja direcionado para o Nordeste
                inc_i = -1;
                inc_j = 1;
                break;
            case 2:                                     // Caso o navio esteja direcionado para o Norte
                inc_i = -1;
                inc_j = 0;
                break;
            case 3:                                     // Caso o navio esteja direcionado para o Noroeste
                inc_i = -1;
                inc_j = -1;
                break;
            case 4:                                     // Caso o navio esteja direcionado para o Oeste
                inc_i = 0;
                inc_j = -1;
                break;
            case 5:                                     // Caso o navio esteja direcionado para o Sudoeste
                inc_i = 1;
                inc_j = -1;
                break;
            case 6:                                     // Caso o navio esteja direcionado para o Sul
                inc_i = 1;
                inc_j = 0;
                break;
            case 7:                                     // Caso o navio esteja direcionado para o Sudeste
                inc_i = 1;
                inc_j = 1;
                break;
            default:
                printf("\n\n*** ERRO! - Direção inválida para o Navio 1\n\n");      // Em caso de direção inválida, exibe mensagem de erro e aborta a execução do programa
                return 0;
        }
        posicao_i += inc_i;         // Aponta para a próxima posição a ser ocupada pelo Navio 1, conforme os incrementos/decrementos aplicados em i e j
        posicao_j += inc_j;
    }

    // Colocando o Navio 2 no tabuleiro:
    tamanho = (int)(sizeof(nav2)/sizeof(nav2[0]));      // Obtém o tamanho do Navio 2
    posicao_i = pos_nav2[0];
    posicao_j = pos_nav2[1];
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[posicao_i][posicao_j] = nav2[i];
        switch (pos_nav2[2]) {
            case 0:                                     // Caso o navio esteja direcionado para o Leste
                inc_i = 0;
                inc_j = 1;
                break;
            case 1:                                     // Caso o navio esteja direcionado para o Nordeste
                inc_i = -1;
                inc_j = 1;
                break;
            case 2:                                     // Caso o navio esteja direcionado para o Norte
                inc_i = -1;
                inc_j = 0;
                break;
            case 3:                                     // Caso o navio esteja direcionado para o Noroeste
                inc_i = -1;
                inc_j = -1;
                break;
            case 4:                                     // Caso o navio esteja direcionado para o Oeste
                inc_i = 0;
                inc_j = -1;
                break;
            case 5:                                     // Caso o navio esteja direcionado para o Sudoeste
                inc_i = 1;
                inc_j = -1;
                break;
            case 6:                                     // Caso o navio esteja direcionado para o Sul
                inc_i = 1;
                inc_j = 0;
                break;
            case 7:                                     // Caso o navio esteja direcionado para o Sudeste
                inc_i = 1;
                inc_j = 1;
                break;
            default:
                printf("\n\n*** ERRO! - Direção inválida para o Navio 2\n\n");      // Em caso de direção inválida, exibe mensagem de erro e aborta a execução do programa
                return 0;
        }
        posicao_i += inc_i;         // Aponta para a próxima posição a ser ocupada pelo Navio 1, conforme os incrementos/decrementos aplicados em i e j
        posicao_j += inc_j;
    }

    // Exibindo o tabuleiro e seu conteúdi (navios):
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Finalização do bloco principal do código:
    return 0;
}
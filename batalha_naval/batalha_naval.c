/*

DESAFIO 3 - TEMA 5 - BATALHA NAVAL (Nível MESTRE)

Habilidades especiais e áreas de efeito

Neste desafio final, é adicionado um toque estratégico ao jogo de Batalha Naval, implementando habilidades especiais com áreas de efeito distintas e adicionando a lógica para
representar e exibir essas habilidades no tabuleiro.

Autor: Elder de Souza Pachito - Matrícula: 202505123303

*/

// Inclusão da biblioteca necessária para a entrada e exibição de dados:
#include <stdio.h>
#include <stdlib.h>

// Declarando a matriz principal que representará o tabuleiro virtual do jogo em memória, com ouma variável global estática:
static int tabuleiro[10][10];

// Declarando as matrizes de habilidades, como variáveis globais e estáticas:
static int hab_cone[3][5];
static int hab_cruz[3][5];
static int hab_octa[3][5];

// Procedimento que recebe o vetor NAVIO e o vetor POSICAO e o insere no tabuleiro:
void insere_navio(int * navio, int * posicao, int tamanho) {
    int posicao_i, posicao_j;                           // Variáveis auxiliares para posicionar uma parte do corpo de um navio nas coordenadas i e j
    int inc_i, inc_j;                                   // Variáveis auxiliares para direcionar o posicionamento de uma parte do corpo do navio através de incrementos em i e em j
    // Colocando o navio no tabuleiro:
    posicao_i = posicao[0];
    posicao_j = posicao[1];
    for (int i = 0; i < tamanho; i++) {
        if ((posicao_i >=0) && (posicao_i < 10) && (posicao_j >= 0) && (posicao_j < 10)) {
            if (tabuleiro[posicao_i][posicao_j] == 0) {
                tabuleiro[posicao_i][posicao_j] = navio[i];
            } else {
                printf("\n\n*** ERRO! - Posição de navio se sobrepões a navio existente.\n\n");      // Em caso de sobreposição, exibe mensagem de erro e aborta a execução do programa
                abort();
            }
        } else {
            printf("\n\n*** ERRO! - Posição de navio ultrapassa o tabuleiro.\n\n");                 // Em caso de posição fora dos limites do tabuleiro, exibe mensagem de erro e aborta a execução do programa
            abort();
        }
        
        tabuleiro[posicao_i][posicao_j] = navio[i];
        switch (posicao[2]) {
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
                printf("\n\n*** ERRO! - Direção inválida para um navio.\n\n");      // Em caso de direção inválida, exibe mensagem de erro e aborta a execução do programa
                abort();
        }
        posicao_i += inc_i;         // Aponta para a próxima posição a ser ocupada pelo Navio 1, conforme os incrementos/decrementos aplicados em i e j
        posicao_j += inc_j;
    }
}

// Procedimento para aplicar uma matriz de habilidade no tabuleiro, nas coordenadas recebidas como parâmetros, considerando a origem de aplicação, também recebida
void aplica_hab(int habilidades[3][5], int pos_i, int pos_j, int origem_i, int origem_j) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (habilidades[i][j] == 1) {
                tabuleiro[pos_i - origem_i + i][pos_j - origem_j + j] = 5;
            }
        }
    }
}

int main() {

    // Criando os vetores que representarão os navios:
    int nav1[3] = {3,3,3};            // Navio 1 tem 3 posições de tamanho;
    int nav2[3] = {3,3,3};            // Navio 2 tem 3 posições de tamanho;
    int nav3[4] = {3,3,3,3};          // Mavio 3 tem 4 posições de tamanho;
    int nav4[2] = {3,3};              // Navio 4 tem 2 posições de tamanha;
    int tamanho;                      // Variável para armazenar o tamanho de um navio
    int posicao_i, posicao_j;         // Variáveis auxiliares para posicionar uma parte do corpo de um navio nas coordenadas i e j
    int inc_i, inc_j;                 // Variáveis auxiliares para direcionar o posicionamento de uma parte do corpo de um navio através de incrementos em i e em j

    // Definindo as posições iniciais dos navios, através das coordenadas (i, j) de uma de suas extremidades, e da direção do seu posicionamento a partir de (i. j):
    // Legenda para a direção de um navio:  0 = Leste            3 = Noroeste            6 = Sul
    //                                      1 = Nordeste         4 = Oeste               7 = Sudeste
    //                                      2 = Norte            5 = Sudoeste
    
    int pos_nav1[3] = {3, 2, 0};  // i = 3; j = 2; e a direção = 0 (Leste)
    int pos_nav2[3] = {7, 6, 1};  // i = 7; j = 6; e a direção = 1 (Nordeste)
    int pos_nav3[3] = {9, 4, 3};  // i = 9, j = 1; e a direção = 2 (Noroeste)
    int pos_nav4[3] = {1, 8, 6};  // i = 1, j = 8; e a direção = 4 (Sul)

    // Inicializando o tabuleiro com água (0) em todas as suas posições:
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Colocando os Navios no tabuleiro:
    insere_navio(nav1, pos_nav1, 3);
    insere_navio(nav2, pos_nav2, 3);
    insere_navio(nav3, pos_nav3, 4);
    insere_navio(nav4, pos_nav4, 2);

    // Exibe o cabeçalho para o tabuleiro antes da inserção das habilidades:
    printf("TABULEIRO COM OS NAVIOS E SEM AS HABILIDADES:\n\n");

    // Exibindo o tabuleiro e seu conteúdi (navios):
    printf("     A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d - ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Salta linha(s) na tela do terminal:
    printf("\n");
    
    // Cria a matriz de habilidades CONE:
    printf("Matriz de Habilidades - CONE:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            hab_cone[i][j] = ((j == 2) || (i == 2) || ((i == 1) && ((j == 1) || (j == 3)))) ? 1 : 0;
            printf("%d ", hab_cone[i][j]);
        }
        printf("\n");
    }
    
    // Salta linha(s) na tela do terminal:
    printf("\n");
    
    // Cria a matriz de habilidades CRUZ:
    printf("Matriz de Habilidades - CRUZ:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            hab_cruz[i][j] = ((j == 2) || (i == 1)) ? 1 : 0;
            printf("%d ", hab_cruz[i][j]);
        }
        printf("\n");
    }
    
    // Salta linha(s) na tela do terminal:
    printf("\n");
    
    // Cria a matriz de habilidades OCTA:
    printf("Matriz de Habilidades - OCTAEDRO:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            hab_octa[i][j] = ((j == 2) || ((i == 1) && ((j >= 1) && (j <= 3)))) ? 1 : 0;
            printf("%d ", hab_octa[i][j]);
        }
        printf("\n");
    }

    // aplica as matrizes de habilidades no tabuleiro:
    aplica_hab(hab_cone, 2, 4, 0, 2);
    aplica_hab(hab_cruz, 8, 2, 1, 2);
    aplica_hab(hab_octa, 1, 7, 1, 2);

    // Salta linha(s) na tela do terminal:
    printf("\n");
    
    // Exibe o cabeçalho para o tabuleiro antes da inserção das habilidades:
    printf("TABULEIRO COM OS NAVIOS E COM AS HABILIDADES APLICADAS:\n\n");

    // Exibindo o tabuleiro e seu conteúdi (navios):
    printf("     A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d - ", i + 1);
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
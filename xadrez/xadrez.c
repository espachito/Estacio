/*

DESAFIO 2 - TEMA 4 - XADREZ (Nível MESTRE)

Criando Movimentos Complexos

Neste desafio final, o código aprimora o programa de xadrez que vem sendo desenvolvido, explorando técnicas avançadas de programação para simular os movimentos das peças.
Nesta versão, serão utilizados recursividade e loops complexos!

Autor: Elder de Souza Pachito - Matrícula: 202505123303

*/

// Inclusão da biblioteca necessária para a entrada e exibição de dados:
#include <stdio.h>

// Procedimento recursivo para o movimento da TORRE:
void movimenta_torre(int qtde_casas) {
    if (qtde_casas > 0) {
        printf("-> DIREITA ");
        movimenta_torre(qtde_casas - 1);
    }
}

// Procedimento recursivo para o movimento do BISPO:
void movimenta_bispo(int qtde_casas) {
    if (qtde_casas > 0) {
        printf("-> CIMA+DIREITA ");
        movimenta_bispo(qtde_casas - 1);
    }
}

// Procedimento recursivo para o movimento da RAINHA:
void movimenta_rainha(int qtde_casas) {
    if (qtde_casas > 0) {
        printf("-> ESQUERDA ");
        movimenta_rainha(qtde_casas - 1);
    }
}


// Início do bloco principal do código:
int main() {

    // Declaração das variáveis que armazenarão os dados sobre os movimentos de cada peça:
    int mov_torre = 5;       // Variável que armazenará a quantidade de casas que a TORRE irá mover
    int mov_bispo = 5;       // Vatiável que armazenará a quantidade de casas que o BISPO irá mover
    int mov_rainha = 8;      // Variável que armazenará a quantidade de casas que a RAINHA irá mover;

    // Declaração de variáveis auxiliares:
    int i = 1;               // Variável de controle das estruturas WHILE e DO-WHILE;
    int fim_do_salto = 0;    // Variável que controla se o salto do CAVALO terminou ou não
    
    // Imprime o rótulo do movimento e chama o procedimento recursivo que irá simular e exibir em tela o movimento da TORRE:
    printf("MOVIMENTO DA TORRE:    ");
    movimenta_torre(mov_torre);

    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Imprime o rótulo do movimento e chama o procedimento recursivo que irá simular e exibir em tela o movimento do BISPO:
    printf("MOVIMENTO DO BISPO:    ");
    movimenta_bispo(mov_bispo);

    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Imprime o rótulo do movimento e chama o procedimento recursivo que irá simular e exibir em tela o movimento da RAINHA:
    printf("MOVIMENTO DA RAINHA:   ");
    movimenta_rainha(mov_rainha);

    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Realiza a simulação do movimento do CAVALO utilizando estruturas complexas conforme requisitado, e exibe a simulação do movimento na tela:
    printf("MOVIMENTO DO CAVALO:   ");
    while (fim_do_salto == 0) {               // Enquanto o "fim do salto" ainda NÃO ocorreu, realiza a primeira parte do salto
        for (int i = 1, casa_atual = 1; (i <= 2) && (casa_atual <= 2); i++, casa_atual--) {   // Inclui condições complexas e variáveis múltiplas somente para atender ao requisitado
            printf("-> CIMA ");
            if (casa_atual == 2) {
                break;
            }
        }
        fim_do_salto = 1;                     // Muda o valor da variável FIM DO SALTO para 1, caracterizando que a primeira parte do salto terminou
    }
    printf("-> DIREITA");                       // Exibe a última parte do salto na tela

    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Imprime o rótulo do movimento e chama o procedimento recursivo que irá simular e exibir em tela o movimento do BISPO:
    printf("MOVIMENTO DO BISPO 2:  ");
    for (int i = 1; i <= mov_bispo; i++){       // Movimente vertical, loop de 5 vezes, conforme requisitado
        printf("-> CIMA");
        for (int j = 1; j <= 1; j++) {          // Movimento horizontal, loop de 1 vez, pois a cada loop vertical o horizontal anda junto 1 passo
            printf("+DIREITA ");
        }
    }

    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Finalização do bloco principal do código:
    return 0;
}
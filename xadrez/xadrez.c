/*

DESAFIO 2 - TEMA 4 - XADREZ (Nível AVENTUREIRO)

Movimentando o Cavalo

Esta versão do código implementa, no mesmo programa em C do desafio anterior, a lógica para o movimento do Cavalo. O Cavalo se move duas casas em uma direção (horizontal ou
vertical) e depois uma casa perpendicularmente, formando um "L". Para este desafio, o Cavalo deverá se mover duas casas para baixo e uma casa para a esquerda. Esta versão usa
dois loops aninhados, sendo um deles um loop FOR e o outro loop WHILE. Assim como nas outras peças, o código imprime a direção do movimento a cada casa percorrida.

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
    int fim_do_salto = 0;    // Variável que controla se o salto do CAVALO terminou ou não
    
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
    printf("MOVIMENTO DA RAINHA:   ");
    for (i = 1; i <= mov_rainha; i++) {
        printf("-> ESQUERDA ");
    }

    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Realiza a simulação do movimento do CAVALO utilizando a estrutura WHILE aninhada dentro de uma estrutura FOR, e exibe o movimento na tela:
    printf("MOVIMENTO DO CAVALO:   ");
    fim_do_salto = 0;                         // Estabelece que o "fim do salto" do CAVALO ainda não ocorreu, o que é representado pelo valor 0 (Falso)
    while (fim_do_salto == 0) {               // Enquanto o "fim do salto" ainda NÃO ocorreu, realiza a primeira parte do salto
        for (int i = 1; i <= 2; i++) {        // Na primeira parte do salto do CAVALO, e conforme solicitado, o CAVALO passará por cima de 2 casas para BAIXO
            printf("-> BAIXO ");
        }
        fim_do_salto = 1;                     // Muda o valor da variável FIM DO SALTO para 1, caracterizando que a primeira parte do salto terminou
    }
    printf("-> ESQUERDA");                       // Exibe a última parte do salto na tela

    // Salta linha(s) na tela do terminal:
    printf("\n\n");
    
    // Finalização do bloco principal do código:
    return 0;
}
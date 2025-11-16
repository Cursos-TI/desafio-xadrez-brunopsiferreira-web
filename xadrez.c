#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Bispo: recursivo (diagonal: cima + direita)
void moverBispo(int casas) {
    if (casas > 0) 
    {
        printf("Cima Direita\n");
        moverBispo(casas - 1);
    }
    
}

// Torre: recursivo (direita)
void moverTorre(int casas) {
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
    
}

// Rainha: recursivo (esquerda)
void moverRainha(int casas) {
    if (casas > 0) 
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
    
}



int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // ---------- BISPO ---------- 
    // Movimento: 5 casas em diagonal superior direira
    printf("Movimento do Bispo (5 casas diagonal: cima e direita):\n"); // Cima e direita simula o movimento do bispo em diagonal.
    int passosBispo = 5; // Bispo deve dar 5 casas.
    int contador = 1; 
    while (contador <= passosBispo) {
        printf("Cima Direita\n"); 
        contador++; // A cada loop do WHILE ele vai incrementar mais 1 passo e vai printar "Cima Direita", até o total de 5.
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // ---------- TORRE ----------
    // Movimento: 5 casas para a direita
    printf("Movimento da Torre (5 casas para a direita):\n"); 
    for (int i = 1; i <= 5; i++) { // Torre deve movimentar 5 casas. Para cada movimento do loop FOR ele vai incrementar +1 até o total de 5.
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // ---------- RAINHA ----------
    // Movimento: 8 casas para a esquerda
    printf("Movimento da Rainha (8 casas para a esquerda):\n"); 
    int passosRainha = 8; // Passos total da rainha.
    int j = 1;
    do {
        printf("Esquerda\n"); // Printa esquerda e acrescentar +1 passo.
        j++;
    } while (j <= passosRainha); // O WHILE vai "verificar" se os casas ainda são menores ou igual a 8 e continuar executando até o fim de 8x.
    printf("\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // ---------- CAVALO ----------
    printf("Movimento do Cavalo (2 casas para baixo e 1 para esquerda):\n"); 
    int passosCavalo = 1; // Cavalo começa com um movimento.

    while (passosCavalo--) // O WHILE executa porque o valor inicial é "1" (TRUE) e depois diminui (--), tornando "0" (FALSE) para garantir somente uma execução.
    {
        for (int i = 0; i < 2; i++){
            printf("Baixo\n"); // O loop vai acontecer enquanto "i" for menor que 2 e printar "Baixo" em cada execução, quando "i" atingir 2 ele vai parar.
        }
        printf("Esquerda\n"); // No final do loop interno FOR, ele vai printar "Esquerda" e finalizar o movimento de "L".
        printf("\n");
    }


  // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // ---------- BISPO (RECURSIVO) ----------
    printf("Movimento do Bispo - Recursivo (5 casas diagonal: cima e direita):\n");
    moverBispo(5);
    printf("\n");

    // ---------- TORRE (RECURSIVO) ----------
    printf("Movimento da Torre - Recursivo (5 casas para a direita):\n");
    moverTorre(5);
    printf("\n");

    // ---------- RAINHA (RECURSIVO) ----------
    printf("Movimento da Rainha - Recursivo (8 casas para a esquerda):\n");
    moverRainha(8);
    printf("\n");


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // ---------- BISPO (LOOPS ANINHADOS) ----------
    // Loop externo = movimento vertical (cima)
    // Loop interno = movimento horizontal (direita)
    // Para simular diagonal, bispo vai dar 1 passo para cima + 1 passo para a direita

    printf("Movimento do Bispo - Loops Aninhados (5 casas diagonal: cima e direita):\n");
    int casasDiagonal = 5;
    for (int v = 0; v < casasDiagonal; v++) { // Loop externo simula os passos verticais
        printf("Cima\n");
        for (int h = 0; h < 1; h++) {  // Loop interno simula os passos horizontais para direita
            printf("Direita\n");
        }
    }
    printf("\n");

    return 0;
}

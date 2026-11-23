#include <stdio.h>

// Comente a linha abaixo para compilar sem o modo de depuracao (ou use -DDEBUG no gcc)
#define DEBUG

int somaAteN(int n);

int main(void) {
    int n, total;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    total = somaAteN(n);
    printf("Soma total de 1 ate %d = %d\n", n, total);

    return 0;
}

/*
 * Documentacao da compilacao condicional:
 * 1) Com #define DEBUG ativo: o bloco dentro de #ifdef DEBUG eh mantido pelo
 *    pre-processador, exibindo o rastreamento da soma parcial a cada iteracao.
 * 2) Sem #define DEBUG: o pre-processador remove completamente o printf interno
 *    antes da compilacao, gerando um executavel limpo que exibe apenas o resultado final.
 */
int somaAteN(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
        printf("[DEBUG] Iteracao %d: soma parcial = %d\n", i, soma);
        #endif
    }

    return soma;
}

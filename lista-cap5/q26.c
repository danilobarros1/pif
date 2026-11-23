#include <stdio.h>

long fibonacci(int n);

int main(void) {
    int qtd;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Informe uma quantidade positiva de termos.\n");
        return 1;
    }

    printf("Sequencia de Fibonacci: ");
    for (int i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

/*
 * Por que fica lenta para valores grandes de n:
 * Cada chamada gera duas novas chamadas recursivas (arvore binaria de chamadas),
 * recalculando repetidamente os mesmos subproblemas varias vezes (ex.: fibonacci(2)
 * eh calculado dezenas de vezes). Isso gera complexidade de tempo exponencial O(2^n).
 */
long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

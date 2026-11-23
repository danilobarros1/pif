#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long fatIter, fatRec;

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Valor invalido! Informe um numero >= 0.\n");
        return 1;
    }

    fatIter = fatorialIterativo(n);
    fatRec = fatorialRecursivo(n);

    printf("Fatorial Iterativo (%d!) = %ld\n", n, fatIter);
    printf("Fatorial Recursivo (%d!) = %ld\n", n, fatRec);

    if (fatIter == fatRec) {
        printf("Confirmado: os dois resultados coincidem.\n");
    } else {
        printf("Divergencia entre os resultados.\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}

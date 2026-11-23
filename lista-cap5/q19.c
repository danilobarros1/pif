#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: informe um numero positivo.\n");
        return 1;
    }

    printf("Contagem regressiva: ");
    contagem(n);

    printf("Contagem crescente (1 ate %d): ", n);
    contagemCrescente(n);
    printf("\n");

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d ", n);
    contagem(n - 1);
}

/*
 * Explicacao da diferenca:
 * Na contagem regressiva, o printf ocorre ANTES da chamada recursiva,
 * imprimindo os valores durante a fase de empilhamento (de n ate 1).
 * Na versao crescente abaixo, o printf fica DEPOIS da chamada recursiva:
 * todas as chamadas sao empilhadas ate n == 0 e a impressao ocorre apenas
 * durante o desempilhamento, exibindo os numeros em ordem crescente (1 ate n).
 */
void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);
    printf("%d ", n);
}

#include <stdio.h>

int main(void) {
    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    // O %d exibe o valor numerico decimal associado na Tabela ASCII
    printf("Caractere: '%c' | Codigo ASCII: %d\n", c, (int)c);

    return 0;
}

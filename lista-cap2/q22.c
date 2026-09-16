#include <stdio.h>

int main(void) {
    char maiuscula;
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    // Converte adicionando a diferenca ('a' - 'A' = 32 posicoes)
    char minuscula = maiuscula + ('a' - 'A');

    printf("Letra minuscula: %c\n", minuscula);

    return 0;
}

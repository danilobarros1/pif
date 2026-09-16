#include <stdio.h>

int main(void) {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int quadrado = num * num;
    // Cast explicito para evitar a divisao inteira
    float decima_parte = (float)num / 10.0f;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);

    return 0;
}

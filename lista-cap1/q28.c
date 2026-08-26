#include <stdio.h>

int main(void) {
    int n1, n2, n3;
    double media;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Média: %.2f\n", media);

    return 0;
}

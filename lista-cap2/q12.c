#include <stdio.h>

int main(void) {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int antecessor = num;
    --antecessor;

    int sucessor = num;
    ++sucessor;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}

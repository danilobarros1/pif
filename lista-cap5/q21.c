#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void) {
    int x, y;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    printf("Quadrado de %d = %d\n", x, SQR(x));
    printf("Quadrado de %d = %d\n", y, SQR(y));
    printf("Maior = %d\n", MAX(x, y));
    printf("Menor = %d\n", MIN(x, y));

    return 0;
}

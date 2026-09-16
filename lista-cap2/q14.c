#include <stdio.h>
#include <math.h>

// Compilacao: gcc exercicio14.c -o exercicio14 -lm

int main(void) {
    float a, b, c;
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    float p = (a + b + c) / 2.0f;
    float area = sqrtf(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}

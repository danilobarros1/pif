#include <stdio.h>

int main(void) {
    float lado, base, altura;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    printf("Digite a base e a altura (retangulo/triangulo): ");
    scanf("%f %f", &base, &altura);

    printf("Area do Quadrado: %.2f\n", lado * lado);
    printf("Area do Retangulo: %.2f\n", base * altura);
    printf("Area do Triangulo Retangulo: %.2f\n", (base * altura) / 2.0f);

    return 0;
}

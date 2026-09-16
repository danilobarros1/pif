#include <stdio.h>

int main(void) {
    float n1, n2, n3, n4;
    printf("Digite as quatro notas do aluno: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float simples = (n1 + n2 + n3 + n4) / 4.0f;
    float ponderada = (n1*1.0f + n2*1.0f + n3*2.0f + n4*2.0f) / 6.0f;

    printf("Media Aritmetica Simples: %.2f\n", simples);
    printf("Media Ponderada: %.2f\n", ponderada);

    return 0;
}

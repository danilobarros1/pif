#include <stdio.h>

int main(void) {
    float salario_base;
    printf("Digite o salario-base: ");
    scanf("%f", &salario_base);

    // Salario = base + 5% - 7% = base * (1 + 0.05 - 0.07) = base * 0.98
    float salario_liquido = salario_base * 0.98f;

    printf("Salario a receber: R$ %.2f\n", salario_liquido);

    return 0;
}

#include <stdio.h>

int main(void) {
    int dias;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    float bruto = dias * 30.0f;
    float liquido = bruto * 0.92f; // 8% descontado na fonte

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}

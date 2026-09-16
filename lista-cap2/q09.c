#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    // Tratamento para evitar divisao por zero usando operador ternario (sem if/else)
    float divisao = (b != 0) ? ((float)a / (float)b) : 0.0f;
    printf("Divisao real: %.2f\n", divisao);

    return 0;
}

#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float num1, num2;

    printf("=== CALCULADORA ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha a operacao: ");
    scanf("%d", &opcao);

    printf("Digite dois valores: ");
    scanf("%f %f", &num1, &num2);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(num1, num2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(num1, num2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(num1, num2));
            break;
        case 4:
            if (num2 == 0.0f) {
                printf("Erro: divisao por zero nao permitida.\n");
            } else {
                printf("Resultado: %.2f\n", divide(num1, num2));
            }
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

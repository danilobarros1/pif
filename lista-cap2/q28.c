#include <stdio.h>

int main(void) {
    float h_normais, h_extras;
    printf("Horas normais no ano: ");
    scanf("%f", &h_normais);
    printf("Horas extras no ano: ");
    scanf("%f", &h_extras);

    float bruto = (h_normais * 10.0f) + (h_extras * 15.0f);
    
    // Operador ternario calcula o excedente sem usar if
    float excedente = (bruto > 12000.0f) ? (bruto - 12000.0f) : 0.0f;
    float imposto = excedente * 0.10f;

    printf("Salario anual bruto: R$ %.2f\n", bruto);
    printf("Imposto devido: R$ %.2f\n", imposto);

    return 0;
}

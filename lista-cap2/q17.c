#include <stdio.h>

#define PI 3.141593f

int main(void) {
    float raio;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    printf("Area: %.2f\n", PI * raio * raio);
    printf("Circunferencia: %.2f\n", 2.0f * PI * raio);

    return 0;
}

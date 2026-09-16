#include <stdio.h>

#define PI 3.141593f

int main(void) {
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float area = 4.0f * PI * raio * raio;
    // Uso do 4.0 / 3.0 para impedir a divisao inteira (truncamento)
    float volume = (4.0f / 3.0f) * PI * raio * raio * raio;

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}

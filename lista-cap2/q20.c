#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b;
    printf("Digite os valores dos dois catetos: ");
    scanf("%f %f", &a, &b);

    float hipotenusa = sqrtf(powf(a, 2.0f) + powf(b, 2.0f));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}

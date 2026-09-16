#include <stdio.h>
#include <math.h>

int main(void) {
    float degrau_cm, total_m;
    printf("Altura do degrau (cm): ");
    scanf("%f", &degrau_cm);
    printf("Altura total a alcancar (m): ");
    scanf("%f", &total_m);

    float total_cm = total_m * 100.0f;
    int degraus = (int)ceilf(total_cm / degrau_cm);

    printf("Numero minimo de degraus: %d\n", degraus);

    return 0;
}

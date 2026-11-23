#include <stdio.h>
#include "areas.h"

int main(void) {
    float raio, baseRet, altRet, baseTri, altTri;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("Area do circulo = %.2f\n\n", A_CIRC(raio));

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &baseRet, &altRet);
    printf("Area do retangulo = %.2f\n\n", A_RET(baseRet, altRet));

    printf("Digite a base e a altura do triangulo: ");
    scanf("%f %f", &baseTri, &altTri);
    printf("Area do triangulo = %.2f\n", A_TRI(baseTri, altTri));

    return 0;
}

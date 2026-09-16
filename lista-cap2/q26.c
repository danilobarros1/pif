#include <stdio.h>

int main(void) {
    float comp, larg, preco_m;
    printf("Comprimento e largura do terreno (m): ");
    scanf("%f %f", &comp, &larg);
    printf("Preco por metro de arame (R$): ");
    scanf("%f", &preco_m);

    float perimetro = 2.0f * (comp + larg);
    float total_arame = perimetro * 3.0f; // 3 fios de arame
    float custo = total_arame * preco_m;

    printf("Metros de arame necessarios: %.2f m\n", total_arame);
    printf("Custo total: R$ %.2f\n", custo);

    return 0;
}

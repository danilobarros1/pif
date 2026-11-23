#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;

    printf("Digite a base e o expoente (nao negativo): ");
    scanf("%d %d", &base, &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente deve ser maior ou igual a zero.\n");
    } else {
        printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));
    }

    return 0;
}

long potencia(int base, int expoente) {
    // Caso base: qualquer numero elevado a 0 resulta em 1
    if (expoente == 0) {
        return 1;
    }
    // Passo recursivo: multiplica a base pela potencia com expoente decrementado
    return (long)base * potencia(base, expoente - 1);
}

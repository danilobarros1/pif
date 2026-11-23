#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(void) {
    /*
     * DOBRO(2+3) expande literalmente para: 2+3*2.
     * Pela precedencia de operadores, 3*2 eh avaliado primeiro, resultando em 2 + 6 = 8.
     * Ja a funcao dobro(2+3) avalia o argumento (2+3 = 5) antes da chamada, retornando 10.
     */
    printf("Macro sem parenteses DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3)               = %d\n", dobro(2+3));

    // Redefinindo a macro com parenteses de protecao
    #undef DOBRO
    #define DOBRO(x) ((x) * 2)

    printf("Macro corrigida DOBRO(2+3)      = %d\n", DOBRO(2+3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}

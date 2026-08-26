#include <stdio.h>

int main(void) {
    /* Versão 1: Uma única chamada de printf() */
    printf("Treinamento em programação.\nLinguagem C.\n\n");

    /* Versão 2: Duas instruções de printf() */
    printf("Treinamento em programação.\n");
    printf("Linguagem C.\n\n");

    /* Versão 3: Frases emolduradas com caracteres gráficos */
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA Treinamento em programação. \xBA\n");
    printf("\xBA Linguagem C.               \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

    return 0;
}

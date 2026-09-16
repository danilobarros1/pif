#include <stdio.h>

int main(void) {
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", 
           valor, valor, valor, (char)valor);

    return 0;
}

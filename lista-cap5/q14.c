#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, digite um numero positivo.\n");
    } else {
        printf("Soma dos digitos de %d = %d\n", numero, somaDigitos(numero));
    }

    return 0;
}

int somaDigitos(int n) {
    // Caso base: quando nao ha mais digitos a extrair (n == 0)
    if (n == 0) {
        return 0;
    }
    // Passo recursivo: soma o ultimo digito (n % 10) com a soma dos restantes (n / 10)
    return (n % 10) + somaDigitos(n / 10);
}

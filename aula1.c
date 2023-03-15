#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\nHell World! \n\n");
    int a, b;     // %i    ou     %d   para me referir a uma variável! Nesse caso um inteiro.
    printf("Soma de dois numeros! \n");
    printf("Digite o primeiro numero: ");
    scanf("%i", &a,"\n"); // & para referenciar ao locar de memória
    printf("Digite o segundo numero: ");
    scanf("%i", &b,"\n");
    printf("\n");
    printf("A soma %i + %i = %i! \n", a, b, a + b);
    printf("\n");
    return 0;
}
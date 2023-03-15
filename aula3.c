#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Tamanho de armazenamento para o tipo INT: %i \n", sizeof(int));
    printf("Tamanho de armazenamento para o tipo SHORT: %i \n", sizeof(short));
    printf("Tamanho de armazenamento para o tipo LONG: %i \n", sizeof(long));

    printf("\n\nTamanho de armazenamento para o tipo FLOAT: %i \n", sizeof(float));
    printf("Tamanho de armazenamento para o tipo DOUBLE: %i \n", sizeof(double));
    printf("Tamanho de armazenamento para o tipo LONG DOUBLE: %i \n", sizeof(long double));

    return 0; 
}
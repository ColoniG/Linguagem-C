/* Iniciando a jornada em C! */
#include <stdio.h>
#include <stdlib.h>

void main() {                                       // void   -->   retorna vazio ou nada!
    printf("Welcome to the C language! \n");        // \n  -->  new line

    int num1, num2, soma;     
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1,"\n"); 
    printf("Digite o segundo numero: ");
    scanf("%i", &num2,"\n");
    printf("\n");

    soma = num1 + num2;

    printf("Soma: %i \n", soma);
    printf("\n");
}
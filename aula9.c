#include <stdio.h>
#include <stdlib.h>

int main() {

    int inteiro1, dia, mes, ano;
    float f1, f2;
    char letra;
    char frase[15];
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro1);
    printf("\nDigite dois numeros de ponto flutuante: ");
    scanf("%f%f", &f1, &f2);
    printf("\nDigite um caracter: ");
    scanf(" %c", &letra);
    printf("\nDigite uma frase: ");
    scanf("%s", &frase);

    printf("\n\nNumero inteiro: %d \n", inteiro1);
    printf("Ponto flutuante: %.2f e %.2f  \n", f1, f2);
    printf("Caracter: %c  \n", letra);
    printf("Frase: %s  \n", frase);

    //  DESCARTANDO CARACTERES DURANTE A LEITURA DE UMA STRING
    printf("\n\nDESCARTANDO CARACTERES DURANTE A LEITURA DE UMA STRING\nDigite uma data no formato dd/mm/aa: ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);         //   %*c  --> É para Ignorar o caracter
    printf("\nDia: %d \n", dia);
    printf("\nMes: %d \n", mes);
    printf("\nAno: %d \n", ano);

    return 0; 
}
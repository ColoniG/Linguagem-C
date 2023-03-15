// ESTRUTURA WHILE
#include <stdio.h>
#include <stdlib.h>
void main() {

    int contador;
    float nota, media, total;
    contador = 1;
    total = 0;

    while (contador <= 4) {
        printf("Digite a nota de numero %d: ", contador);
        scanf("%f", &nota);
        total = total + nota;
        contador ++;
    }

    media = total / 4; 
    printf("Nota media: %.2f\n", media);    

    ////////////   CASO 2 COM FLAG

    contador = 0;
    total = 0;
    nota = 0;

    printf("\n\nVAMOS DESCOBRIR A MEDIA DOS VALORES DIGITADOS\n(OBS: DIGITE -1 PARA SAIR)!!!\nDigite o numero 1: ");
    scanf("%f", &nota);

      while (nota != -1) {           //  -1 É A FLAG
        total = total + nota;
        contador ++;
        printf("\nDigite o numero %d: ", contador + 1);
        scanf("%f", &nota);
        }   
    media = total / contador; 
    printf("\nValor medio: %.2f\n", media);  

    return 0; 
}
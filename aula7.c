#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 450;
    float f = 250.12345;
    char s[] = "Gilson Coloni Filho";

    printf("Precisao em inteiros: \n");
    printf("%d \n", x);
    printf("%.5d \n", x);
    printf("%.12d \n", x);
    printf("\n\nPrecisao em ponto flutuante: \n");
    printf("%f \n", f);
    printf("%.2f \n", f);
    printf("\n\nPrecisao em literais: \n");
    printf("%s \n", s);
    printf("%.5s \n", s);
    printf("%.25s \n", s);
    //TAMANHO E PRECISAO JUNTOS
    printf("\nTAMANHO E PRECISAO JUNTOS\nPrecisao em inteiros: \n");
    printf("%10.5d \n", x);
    printf("%15.12d \n", x);
    printf("\n\nPrecisao em ponto flutuante: \n");
    printf("%8.2f \n", f);
    printf("\n\nPrecisao em literais: \n");
    printf("%10.5s \n", s);
    return 0; 
}
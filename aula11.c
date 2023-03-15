// DESVIO CONDICIONAL SIMPLES
#include <stdio.h>
void main() {

    float n1, n2, media;
    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    media = (n1 + n2) / 2.0;
    if (media >= 7) {
        printf("Aluno aprovado!!!\n");
    }
    return 0; 
}
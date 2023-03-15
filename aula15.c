// ESTRUTURA for
#include <stdio.h>
#include <stdlib.h>
int main() {

    int contador;
    char cod;
    float nota, media, total;
    total = 0;
    cod = 'C';

    for (contador = 1; contador <= 10; contador++) {
        printf("%d\n", contador);
    }
    
    ///////////////////////////////////////////    CASO 2
    printf("\n\n");
    for (contador = 1; contador <= 4; contador++) {
        printf("Digite a nota %d: ", contador);
        scanf("%f", &nota);
        total = total + nota;        
    }
    media = total / 4;
    printf("Nota media: %.2f\n", media);
    printf("\n\n");
    ///////////////////////////////////////////    CASO 3
    total = 0;
    nota = 0;
    while (cod != 'F') {           
        for (contador = 1; contador <= 4; contador++) {
            printf("\nDigite a nota %d: ", contador);
            scanf("%f", &nota);
            total = total + nota;        
        }
        media = total / 4;
        printf("\nNota media: %.2f\n", media);
        total = 0;
        nota = 0;
        printf("Para inserir mais notas digite qualquer tecla ou `F` para sair!\n");
        cod = getche();
    }     
    return 0; 
}
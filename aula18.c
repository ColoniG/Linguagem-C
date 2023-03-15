// Arrays 
#include <stdio.h>
#include <stdlib.h>

int main() {
    // EXEMPLO 1
    float notas[4] = {7.5, 8.0, 6.5, 3.5};
    int i ;

    for (i = 0; i < 4; i++) {
        printf("Nota %d = %4.2f\n", i + 1, notas[i]);
    }
    
    // EXEMPLO 2
    printf("\n\n");
    float NOTAS[4];
    i = 0;

    for (i = 0; i < 4; i++) {
        printf("Entre com a %d do aluno: ", i + 1);
        scanf("%f", &NOTAS[i]);
    } 

    for (i = 0; i < 4; i++) {
        printf("Nota %d = %4.2f\n", i + 1, NOTAS[i]);
    }    
    return 0; 
}


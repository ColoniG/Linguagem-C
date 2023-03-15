// Como criar arquivos de cabeçalho em linguagem C   
#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main() {
    printf("Usando headers!\n");
    int y = 5;
    int quad = quadrado(y);
    int cub = cubo(y);
    
    printf("O quadrado de %d: %d\n", y, quad);
    printf("O cubo de %d: %d\n", y, cub);
    printf("O valor da constante PI: %f\n", _PI);

    return 0; 
}

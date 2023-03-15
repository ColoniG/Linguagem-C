// Ponteiros – Indireção Múltipla  
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    int a = 40;  
    int *pont1;
    int **pont2;

    pont1 = &a;
    pont2 = &pont1;

    printf("O endereco da variavel a eh: %p\n", &a);
    printf("O endereco do ponteiro pont1 eh: %p\n", &pont1);
    printf("O endereco do ponteiro pont2 eh: %p\n", &pont2);
    printf("O endereco apontada por pont1: %p\n", pont1);
    printf("O endereco apontada por pont2: %p\n", pont2);
    printf("E o valor armazenado em a eh: %d\n", **pont2);
   
    return 0; 
}

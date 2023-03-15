// Ponteiros – Introdução  
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    int *x, valor, y;  //  *x     é um ponteiro     ///    &   operador de endereco
    valor = 35;
    x = &valor;    //  ATRIBUINDO O ENDERECO DE valor A x
    y = *x;        //  ATRIBUINDO O CONTEUDO DA VARIAVEL APONTADA POR x A y

    printf("Endereco da variavel comum valor: %p\n", &valor);
    printf("Lendo o conteudo do ponteiro x: %p\n", x);
    printf("Endereco da variavel apontada por x: %p\n", &x);
    printf("Conteudo da variavel apontada por x: %d\n", *x);
    printf("Conteudo da variavel comum y: %d\n", y);
   
    return 0; 
}
